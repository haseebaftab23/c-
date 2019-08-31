#include "global.h" //header files, function prototypes, & classes

void setcolor(unsigned short color) {	//begining of set color funtion
 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);  	//gets std handle
 SetConsoleTextAttribute(hCon,color); 	//Sets Console Text Attribute HCon color.
}	//end of set color funtion
int main() {	//begining of main funtion
	printf("What color do you want the text to be?(1 = blue, 2 = green, 4 = red, 14 = yellow)");	//displays text
	scanf("%d", &C.I);	//scans number
	setcolor(C.I);	//sets color
	cout << " _____  ____  ____  _____\n";	//displays text
	cout << "|_   _|| __ || ___||_   _|\n";	//displays text
	cout << "  | |  |  __||__     | |\n";	//displays text
	cout << "  | |  | |__  __| |  | |\n";	//displays text
	cout << "  |_|  |____||____|  |_|\n";	//displays text
	return 0;	//returns 0
}	//end of main function