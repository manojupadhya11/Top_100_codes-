//Problem 1 program for finding the given number is positive or negative
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number to check for Positive or Negative\t");
    scanf("%d",&num);
    if(num<0){
        printf("Negative Number");
        
    }else if(num>0){
        printf("Positive Number");
        
    }else{
        printf("Number is Zero");
    }
}
