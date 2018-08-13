/**
Name: Neale Mason
Date: 7/20/2018
Email: masonne@oregonstate.edu
Description: Here I test the getCost function
**/

//Includes are from the dominion.c file
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**

card names are (in order):
[curse, estate, duchy, province, copper, silver, gold, adventurer, council_room, feast, gardens, mine, remodel, smithy, village, baron, great_hall, minion, steward, tribute, ambassador, cutpurse, embargo, outpost, salvager, sea_hag, treasure_map

I will test that all the values to ensure that they're correct as well as test indices that are outside of those cards

**/

int cardValues[27] = {0,2,5,8,0,3,6,6,5,4,4,5,4,4,3,4,3,5,3,5,3,4,2,5,4,4,4};
int test_Result = 1;
int testerInt=0;
int i=0;

int main(){

printf("Testing getCost function: ");

for (i=0; i<27; i++){
    int testerInt= getCost(i);
    if(cardValues[i]!= testerInt){
        test_Result=0;
    }
}
    testerInt=getCost(-20);
    if(testerInt!= -1){
       test_Result=0;
    }
    testerInt=getCost(30);
    if(testerInt!=-1){
        test_Result=0;
    }

if(test_Result==1){
    printf("PASSED!\n");

}else{
    printf("FAILED!\n");

}

}
