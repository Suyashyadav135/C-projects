#include<stdio.h>
int main(){
    int const flr=5;
    int ch=0;
    printf("\n\t***welcome***\n");
    while(ch!=-1){
    printf("\nenter the floor you want to go:0-5\n\tOR\npress-1 to exit the lift:\n");
    scanf("%d",&ch);
    switch(ch){
        case -1:{
        printf("\t### thank you ###");
        break;}
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        printf("you are on :%d floor",ch);
        break;
        default:{
            printf("plz enter correct floor:");
        }
    }
    }
    return 0;
}