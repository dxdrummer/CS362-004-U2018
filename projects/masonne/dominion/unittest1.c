/**
Name: Neale Mason
Date: 7/20/2018
Email: masonne@oregonstate.edu
Description: Here I test the numHandCards function
**/


//Includes are from the dominion.c file
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int test_Result=1;
int numTests = 200;
int testerInt=0;
int i;

/**
testing function numHandCards(struct gameState *state);

' int numHandCards(struct gameState *state) {
'       return state->handCount[ whoseTurn(state) ];
' }

**/

int main(){
        struct gameState tester;
        //struct gameState* testPointer;


printf("Testing numHandCards: ");

    for(i=-10; i<numTests; i++){

        tester.whoseTurn=1;
        tester.handCount[tester.whoseTurn]=i;
        //testPointer=&tester;
        testerInt = numHandCards(&tester);
        if(testerInt!=i){
            test_Result=0;
        }
}
    tester.whoseTurn=1;
    tester.handCount[tester.whoseTurn]=2147483647; //testing max int size
    testerInt=numHandCards(&tester);
    if(testerInt!=2147483647){
        test_Result=0;
    }


if(test_Result==1){
    printf("PASSED!\n");
}else{
    printf("FAILED!\n");
}




}
