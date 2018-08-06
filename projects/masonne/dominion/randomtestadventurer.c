/**
Name: Neale Mason
Date: 7/20/2018
Email: masonne@oregonstate.edu
Description: Here I test the adventurer card
**/

//Includes are from the dominion.c file
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int failures, tester, numTries;
int choice1, choice2, choice3;
//following code borrows heavily from playdom.c for implementation
int main(){
 int i=0;
 numTries=100;
   printf ("Testing ADVENTURER: ");
 

 
 struct gameState G, H; //using 2 gamestates to keep track of "before card" and "after card"
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};



  
//int initializeGame(int numPlayers, int kingdomCards[10], int randomSeed, struct gameState *state);
  
  tester = 0;

  int test_Result=1;
  
	initializeGame(2, k, 20, &G);
	for(i=0; i<100; i++){
  int test_Result=1;

	choice1= rand() % (200) + -200; 
	  choice2= rand() % (200) + -200;  
	  choice3= rand() % (200) + -200; 

 
  H=G;

  int tester = 0;
  
  tester = cardEffect(adventurer,choice1, choice2, choice3, &G,0,0);
  
if(G.handCount[G.whoseTurn]!=H.handCount[H.whoseTurn]+2){ //tests to see if Adventurer has the player draw 2 more cards If not, fails the test
    test_Result=0;
  }
  if(G.coins != H.coins+2){
    test_Result=0;
  }

  if(test_Result==1){
    printf("PASSED!\n");
	
  }
  else if(test_Result==0 || tester){
    printf("FAILED!\n");
	failures++;
  }
 
}
return failures;
}
