#pragma once
#include "header.h"


rectangle()
{
	int width = 0;
	int height = 0;
	int ascii = 0;
	int userInput = 0;

	printf("Rectangle Generator!!!!!\n\n");
	
	printf("How many characters wide do you want your rectangle? Character length of console is 120 don't exceed it. ");
	scanf("%d", &width);

	printf("How many characters high do you want your rectangle? ");
	scanf("%d", &height);

	printf("\n\nDo you want your rectangle to be made of a specific character from ASCII? ");
	printf("\nPress 1. Yes ");
	printf("\nPress 2. No (The rectangle will be made from asterisks).");
	scanf("%d", &userInput);
	
	


	if (userInput == 1) {  // User input is yes

	printf("\nWhat ascii character do you want your rectangle to be made of? Type in the ASCII value you want to use.\n ");
	scanf("%d", &ascii);

		for (int i = 0; i < height; i++) {

			for (int j = 0; j < width; j++) {
				printf("%c",ascii);

			}

			printf("\n");
		}


	}
	else if (userInput == 2) { // user input is no


	for (int i = 0; i < height; i++) {

		for (int j = 0; j < width; j++) {
			printf("*");

		}
		
		printf("\n");
	}



	}



	printf("\n\nYour rectangle is made! :) \n\n");

	return NULL;
}

triangle()
{
	int row = 0;
	int userInput = 0;
	int ascii = 0;

	printf("Triangle Generator!!!!!\n\n");
	printf("How many rows do you want your triangle to have?  Character length of console is 120 don't exceed it. ");
	scanf("%d", &row);

	printf("\n\nDo you want your rectangle to be made of a specific character from ASCII? ");
	printf("\nPress 1. Yes ");
	printf("\nPress 2. No (The rectangle will be made from asterisks).");
	scanf("%d", &userInput);

	if (userInput == 1) {
		
		printf("\nWhat ascii character do you want your rectangle to be made of? Type in the ASCII value you want to use.\n ");
		scanf("%d", &ascii);

		for (int i = 1; i <= row; i++) {
			for (int j = 1; j <= i; j++) {
				printf("%c", ascii);
			}
			printf("\n");

		}

	}
	if (userInput == 2) {

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");

	}

	}


	printf("\n\nYour triangle is made! :)\n\n");
	

}