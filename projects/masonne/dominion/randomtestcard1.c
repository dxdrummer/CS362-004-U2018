/**
Name: Neale Mason
Date: 8/4/2018
Email: masonne@oregonstate.edu
Description: Here I test the Gardens card
**/

//Includes are from the dominion.c file
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int choice1, choice2, choice3;
//following code borrows heavily from playdom.c for implementation
int main(){
 struct gameState G; //using 2 gamestates to keep track of "before card" and "after card"
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};

  printf ("Testing Gardens: ");

//int initializeGame(int numPlayers, int kingdomCards[10], int randomSeed, struct gameState *state);
  initializeGame(2, k, 20, &G);
	int failures = 0;
	srand(time(NULL));
	int i=0;
	
	for(i=0; i<100; i++){

	  //int test_Result=1;


	  choice1= rand() % (200) + -200; 
	  choice2= rand() % (200) + -200;  
	  choice3= rand() % (200) + -200; 
	  
	  


	  int tester = cardEffect(gardens,choice1, choice2, choice3, &G,0,0);

		
		if(tester!=-1){
			//printf("FAILED!\n");
			failures++;
		}
	}
	return failures;
}
