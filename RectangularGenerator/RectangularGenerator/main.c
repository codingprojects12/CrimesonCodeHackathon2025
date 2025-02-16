#include "header.h"



int main(void) {
		int userInput2 = 0;
	
	while (1) {

		printf("Do you want to make a triangle or a rectangle?");
		printf("\n1. Rectangle");
		printf("\n2. Triangle");
		scanf("%d", &userInput2);
		system("cls");

		if (userInput2 == 1) {

			rectangle();

		}
		else if (userInput2 == 2) {

			triangle();

		}


	printf("\nMake another shape?");
	printf("\nPress 1. Yes ");
	printf("\nPress 2. No ");
	scanf("%d", &userInput2);
	if (userInput2 == 1) {
		system("cls");
	}
	if (userInput2 == 2) {
		return NULL;
	}


	}
	



}