/**
Name: Neale Mason
Date: 7/20/2018
Email: masonne@oregonstate.edu
Description: Here I test the smithy card
**/

//Includes are from the dominion.c file
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int failures, choice1, choice2, choice3;
int randomizerPlayer, randomizerSeed;
//following code borrows heavily from playdom.c for implementation
int main(){
 struct gameState G, H; //using 2 gamestates to keep track of "before card" and "after card"
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};

  printf ("Testing SMITHY: ");

//int initializeGame(int numPlayers, int kingdomCards[10], int randomSeed, struct gameState *state);
  
 failures=0;
  	srand(time(NULL));
	int i=0;
	int j=0;
	int randomizer;

	randomizerPlayer = rand() % (200);
	randomizerSeed = rand() % 20;
		initializeGame(randomizerPlayer, k, randomizerSeed, &G);
	for(i=0; i<100; i++){
  int test_Result=1;

	choice1= rand() % (200) + -200; 
	  choice2= rand() % (200) + -200;  
	  choice3= rand() % (200) + -200; 
	  
  H=G;

	 if(G.handCount[G.whoseTurn]!=H.handCount[H.whoseTurn]+2){ //tests to see if Smithy has the player draw 3 more cards then discard one or not. If not, fails the test
		failures++;
  }

}

}
