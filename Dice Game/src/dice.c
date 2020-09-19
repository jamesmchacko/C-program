/*
 ============================================================================
 Name        : fh.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
	int diceone, dicetwo, sum, points;
	srand(time(NULL));
	diceone = rand() % 6 + 1;
	printf("value of first dice is:%d\n", diceone);
	dicetwo = rand() % 6 + 1;
	printf("value of second dice is:%d\n", dicetwo);
	sum = diceone + dicetwo;
	printf("the sum value of dice is:%d\n", sum);       // Winning in first time
	if (sum == 7 || sum == 11)
		printf("jackpot");
	if (sum == 2 || sum == 3 || sum == 12)             // failed in first chance
		printf("better luck next time");
	if (sum == 4 || sum == 5 || sum == 6 || sum == 8 || sum == 9 || sum == 10) {
		points = sum;                           // adding value of sum to points
		jump: printf("try again\n");
		diceone = rand() % 6 + 1;                      // rolling the dice again
		printf("value of other dice is:%d\n", diceone);
		dicetwo = rand() % 6 + 1;
		printf("value of third dice is:%d\n", dicetwo);
		sum = diceone + dicetwo;
		printf("sum value of dice is:%d\n", sum);
		if (sum == points) //if the sum of the dice in second chance is same                                                                                                                                                    chance we win//
				{
			printf("you have win");
		} else if (sum == 7)    // if sum in second chance is 7 we lose
				{
			printf("you lose,better luck next time");
		} else
			goto jump;
		// else go to jump line in the programm and start again 
	}
	return 0;
}
