/*

name mark thuranira

reg no CT100/G/26254/25

Des printing the element of the above array using nested for loop*/

#include<stdio.h>

int main(){

int scores [2][2] = {

{65, 92},

{35, 70}

};

int i, o;

for(i=0; i<2; i++){

for(o=0; o<2; o++){

printf("%d",scores[i][o]);

}

printf("\n");

}

return 0;

}
