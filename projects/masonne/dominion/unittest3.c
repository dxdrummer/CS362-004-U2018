/**
Name: Neale Mason
Date: 7/20/2018
Email: masonne@oregonstate.edu
Description: Here I test the isGameOver function

**/

#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i=0;
int testInt=0;
int test_Result=1;
struct gameState tester;



int main(){

printf("Testing isGameOver: ");

for(i=0;i<25;i++){
    tester.supplyCount[i]=5;
}
testInt = isGameOver(&tester); //game should not be over as all supply is full, so the stack of Province cards will not be empty and there wont be 3 supply piles empty

if(testInt==1){
    test_Result=0;
}

for(i=0;i<2;i++){ //test that the game is not over before at least 3 supply counts are empty
    tester.supplyCount[i]=0;
    testInt=isGameOver(&tester);
    if(testInt==1){
        test_Result=0;
    }
}
tester.supplyCount[2]=0; //we're now setting the 3rd supply pile to 0, so the game should be over.
testInt=isGameOver(&tester);
    if(testInt==0){
        test_Result=0;
    }

for(i=0;i<3;i++){
    tester.supplyCount[i]=1;
}
tester.supplyCount[province]=0; //here we test that the game shows as over if the province cards are empty even if all other supply is full
testInt=isGameOver(&tester);
    if(testInt==0){
        test_Result=0;
    }


if(test_Result==1){
    printf("PASSED!\n");
}
else{
    printf("FAILED!\n");
}





}
