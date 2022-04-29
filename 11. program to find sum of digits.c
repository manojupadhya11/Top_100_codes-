//10. program to find sum of digits
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the number to find its sum of digits ");
    scanf("%d",&num);
    while(num!=0){
        sum = sum + num%10;
        num = num/10;
    }
    printf("The sum of digits = %d ",sum);
}