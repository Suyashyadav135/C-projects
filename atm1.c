#include<stdio.h>
#include<string.h>

int main(){
    int choice,i=0,pin=2006,n,amt,j=1;
    int an,bal;
    char name[10];
    printf("\t*****WELCOME TO OUR ATM*****\n");
    printf("enter your name:");
    scanf("%s",&name[i]);
    printf("enter your ACC NO:");
    scanf("%d",&an);
    printf("enter your initial balance:");
    scanf("%d",&bal);
    printf("enter security pin:");
    scanf("%d",&n);
    if(pin==n){
        while(j){
        printf("\nenter choice \t\n1:deposit amt\n2:withdraw amt\n3:mini statement\n4:exit");
        scanf("%d",&choice);
    
    switch(choice){
        case 1:{
        printf("enter amount to be deposited:");
        scanf("%d",&amt);
        if(amt<=20000){//limit is set at 20k
        bal = bal+amt;
        printf("CURRENT BALANCE: %drs",bal);}
        else{
        printf("your daily deposit limit is 20k only ");}
        break;}
        case 2:{
            printf("enter amount to be withdrawn:");
            scanf("%d",&amt);
            if(amt<bal){
            bal= bal-amt;
            printf("CURRENT BALANCE: %drs",bal);}
            else{
            printf("INSUFFICIENT BALANCE");}
            break;
        }
        case 3:{
            printf("\t## MINI STATEMENT ##\n");
            printf(" your name: %s\n ACC NO: %d\n CURRENT BALANCE(updated): %d\n",name,an,bal);
            break;
        }
        case 4:{
            printf("THANK YOU FOR USING OUR ATM");
            j=0;
            break;
        }
        default:{
            printf("invalid choice :( ");
            break;
        }}}
        
    }
    else{
        printf("inccorect PIN");

    }
    return 0;
    
}