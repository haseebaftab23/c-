#ifndef balldraw_h
#define balldraw_h

#define UPRIGHT   1    // Directions of ball movement
#define DOWNRIGHT 2
#define UPLEFT    3
#define DOWNLEFT  4

struct BALL
{
	int x;
	int y;
	int color;
	int direction;
};
BALL balls[90];
void SetBalls( int num )     // This function sets random things for the balls
{
	for ( int a = 0; a < num; a++ )
	{
		back:
		balls[a].x=(rand()%310)+5;
		balls[a].y=(rand()%190)+5;
		if ( get_pixel( balls[a].x, balls[a].y ) )
			goto back;
		balls[a].color=rand()%10+4;
		balls[a].direction=rand()%4+1;
	}
}
void DrawBalls( int num )
{
	for ( int a = 0; a < num; a++ )
	{
		// Collision Detection, oh what fun this was figuring out!
		if ( balls[a].direction==UPRIGHT )
		{
			if ( (get_pixel( balls[a].x+3, balls[a].y ) ) || (get_pixel( balls[a].x+3, balls[a].y+1 )) || (get_pixel( balls[a].x+3, balls[a].y+2 )) || (get_pixel( balls[a].x+3, balls[a].y+3 )) )
				balls[a].direction=UPLEFT;
			if ( (get_pixel( balls[a].x-1, balls[a].y-1 ) ) || (get_pixel( balls[a].x, balls[a].y-1 )) || (get_pixel( balls[a].x+1, balls[a].y-1 )) || (get_pixel( balls[a].x+2, balls[a].y-2 )) )
				balls[a].direction=DOWNRIGHT;
			Line( balls[a].x+3, balls[a].y+4, balls[a].x-2, balls[a].y+4, 0 );  // bottom
			Line( balls[a].x-2, balls[a].y+4, balls[a].x-2, balls[a].y-1, 0 );  // left
			if ( balls[a].direction!=UPRIGHT )
				goto end;
		}
		if ( balls[a].direction==DOWNRIGHT )
		{
			if ( (get_pixel( balls[a].x + 3, balls[a].y ) ) || (get_pixel( balls[a].x+3, balls[a].y-1 )) || (get_pixel( balls[a].x+3, balls[a].y+2 )) || (get_pixel( balls[a].x+3, balls[a].y+3 )) )
				balls[a].direction=DOWNLEFT;
			if ( (get_pixel( balls[a].x - 1, balls[a].y + 4 )) || (get_pixel( balls[a].x, balls[a].y+4 )) || (get_pixel( balls[a].x+1, balls[a].y+4) ) || (get_pixel( balls[a].x+2, balls[a].y+4 )) )
				balls[a].direction=UPRIGHT;
			Line( balls[a].x-2, balls[a].y-1, balls[a].x+3, balls[a].y-1, 0 );  // top
			Line( balls[a].x-2, balls[a].y+4, balls[a].x-2, balls[a].y-1, 0 );  // left
			if ( balls[a].direction!=DOWNRIGHT )
				goto end;
		}
		if ( balls[a].direction==UPLEFT )
		{
			if ( (get_pixel( balls[a].x-2, balls[a].y ) ) || (get_pixel( balls[a].x-2, balls[a].y+1 )) || (get_pixel( balls[a].x-2, balls[a].y+2 )) || (get_pixel( balls[a].x-2, balls[a].y+3 )) )
				balls[a].direction=UPRIGHT;
			if ( (get_pixel( balls[a].x-1, balls[a].y-1 ) ) || (get_pixel( balls[a].x, balls[a].y-1 )) || (get_pixel( balls[a].x+1, balls[a].y-1 )) || (get_pixel( balls[a].x+2, balls[a].y-2 )) )
				balls[a].direction=DOWNLEFT;
			Line( balls[a].x+3, balls[a].y+4, balls[a].x-2, balls[a].y+4, 0 );  // bottom
			Line( balls[a].x+3, balls[a].y-1, balls[a].x+3, balls[a].y+4, 0 );  // right
			if ( balls[a].direction!=UPLEFT )
				goto end;
		}
		if ( balls[a].direction==DOWNLEFT )
		{
			if ( (get_pixel( balls[a].x-2, balls[a].y ) ) || (get_pixel( balls[a].x-2, balls[a].y+1 )) || (get_pixel( balls[a].x-2, balls[a].y+2 )) || (get_pixel( balls[a].x-2, balls[a].y+3 )) )
				balls[a].direction=DOWNRIGHT;
			if ( (get_pixel( balls[a].x - 1, balls[a].y + 4 )) || (get_pixel( balls[a].x, balls[a].y+4 )) || (get_pixel( balls[a].x+1, balls[a].y+4) ) || (get_pixel( balls[a].x+2, balls[a].y+4 )) )
				balls[a].direction=UPLEFT;
			Line( balls[a].x-2, balls[a].y-1, balls[a].x+3, balls[a].y-1, 0 );  // top
			Line( balls[a].x+3, balls[a].y-1, balls[a].x+3, balls[a].y+4, 0 );  // right
			if ( balls[a].direction!=DOWNLEFT )
				goto end;
		}
		end:
		// Drawing the balls, where x,y is the top left corner

		Line( balls[a].x, balls[a].y, balls[a].x+2, balls[a].y, balls[a].color );
		Line( balls[a].x+2, balls[a].y+1, balls[a].x+2, balls[a].y+3, balls[a].color );
		Line( balls[a].x+1, balls[a].y+3, balls[a].x-1, balls[a].y+3, balls[a].color );
		Line( balls[a].x-1, balls[a].y+2, balls[a].x-1, balls[a].y, balls[a].color );

		Line( balls[a].x, balls[a].y+1, balls[a].x+2, balls[a].y+1, balls[a].color );
		Line( balls[a].x, balls[a].y+2, balls[a].x+2, balls[a].y+2, balls[a].color );

		int counter = 0;   // Counter to stop loop if ball gets stuck
		back:
		counter++;
		if ( counter>100 ) // if it checked 100 times, and changed the direction
			goto skipit;    // each time, the ball is probably stuck, so skip it
		if ( balls[a].direction==UPRIGHT )
		{
			// More collision detection, if there is a better way please fix it!
			if ( (get_pixel( balls[a].x+3, balls[a].y ) ) || (get_pixel( balls[a].x+3, balls[a].y+1 )) || (get_pixel( balls[a].x+3, balls[a].y+2 )) || (get_pixel( balls[a].x+3, balls[a].y+3 )) )
			{
				balls[a].direction=UPLEFT;
				goto back;
			}
			if ( (get_pixel( balls[a].x-1, balls[a].y-1 ) ) || (get_pixel( balls[a].x, balls[a].y-1 )) || (get_pixel( balls[a].x+1, balls[a].y-1 )) || (get_pixel( balls[a].x+2, balls[a].y-1 )) )
			{
				balls[a].direction=DOWNRIGHT;
				goto back;
			}
			balls[a].x++;
			balls[a].y--;
		}
		if ( balls[a].direction==DOWNRIGHT )
		{
			if ( (get_pixel( balls[a].x + 3, balls[a].y ) ) || (get_pixel( balls[a].x+3, balls[a].y-1 )) || (get_pixel( balls[a].x+3, balls[a].y+2 )) || (get_pixel( balls[a].x+3, balls[a].y+3 )) )
			{
				balls[a].direction=DOWNLEFT;
				goto back;
			}
			if ( (get_pixel( balls[a].x - 1, balls[a].y + 4 )) || (get_pixel( balls[a].x, balls[a].y+4 )) || (get_pixel( balls[a].x+1, balls[a].y+4) ) || (get_pixel( balls[a].x+2, balls[a].y+4 )) )
			{
				balls[a].direction=UPRIGHT;
				goto back;
			}
			balls[a].x++;
			balls[a].y++;
		}
		if ( balls[a].direction==UPLEFT )
		{
			if ( (get_pixel( balls[a].x-2, balls[a].y ) ) || (get_pixel( balls[a].x-2, balls[a].y+1 )) || (get_pixel( balls[a].x-2, balls[a].y+2 )) || (get_pixel( balls[a].x-2, balls[a].y+3 )) )
			{
				balls[a].direction=UPRIGHT;
				goto back;
			}
			if ( (get_pixel( balls[a].x-1, balls[a].y-1 ) ) || (get_pixel( balls[a].x, balls[a].y-1 )) || (get_pixel( balls[a].x+1, balls[a].y-1 )) || (get_pixel( balls[a].x+2, balls[a].y-2 )) )
			{
				balls[a].direction=DOWNLEFT;
				goto back;
			}
			balls[a].x--;
			balls[a].y--;
		}
		if ( balls[a].direction==DOWNLEFT )
		{
			if ( (get_pixel( balls[a].x-2, balls[a].y ) ) || (get_pixel( balls[a].x-2, balls[a].y+1 )) || (get_pixel( balls[a].x-2, balls[a].y+2 )) || (get_pixel( balls[a].x-2, balls[a].y+3 )) )
			{
				balls[a].direction=DOWNRIGHT;
				goto back;
			}
			if ( (get_pixel( balls[a].x - 1, balls[a].y + 4 )) || (get_pixel( balls[a].x, balls[a].y+4 )) || (get_pixel( balls[a].x+1, balls[a].y+4) ) || (get_pixel( balls[a].x+2, balls[a].y+4 )) )
			{
				balls[a].direction=UPLEFT;
				goto back;
			}
			balls[a].x--;
			balls[a].y++;
		}
		// Ya! the end of colision detection! hooray!!!

		skipit:
	}
}
#endif


