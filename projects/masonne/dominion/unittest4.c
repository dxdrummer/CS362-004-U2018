/**
Name: Neale Mason
Date: 7/20/2018
Email: masonne@oregonstate.edu
Description: Here I test the supplyCount function
**/

#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int test_Result=1;
int i=0;
struct gameState tester;
int tempRand=0;

int main(){

printf("Testing supplyCount: ");

int tempArray[25];


for(i=0; i<25; i++){
    tempRand=rand()%20;
    tester.supplyCount[i]= tempRand;
    tempArray[i]=tempRand;
}

for(i=0; i<25;i++){
    if(tempArray[i]!=supplyCount(i, &tester)){
        test_Result=0;
    }
}

if(test_Result==1){
    printf("PASSED!\n");
}
else{
    printf("FAILED!\n");
}


}
