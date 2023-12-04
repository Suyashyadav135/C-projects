#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int random = rand()%100; //doing this to make the remainder lie btwin 0-100
    printf("%d",random);
    int guess;
    int n;
   printf("I have a number in my mind (0-100) can you guess it?\n");
    {
        while(1){// using this to create an infinite loop.
        printf("enter your guess: ");
        scanf("%d",&guess);
        if(random == guess ){ //random num and the guessed num matches.
            printf("you've guessed the correct number :) ");
            break;
        }
        else if(random > guess){
            printf("my number is greater tha your guess TRY AGAIN \n");
        }
        else{
            printf("my number is smaller than your guess TRY AGAIN \n ");
        }
    }
    return 0;
   }
   }
