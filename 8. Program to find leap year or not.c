//7. Program to find leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year to find out whether it is leap year or not ");
    scanf("%d",&year);
    if(year%400 == 0){
        printf("%d is a leap year",year);
        
    }else if (year%4 ==0 && year%100 !=0){
        printf("%d is a leap year",year);
        
    }else{
        printf("%d is not a leap year",year);
    }
    return 0;
}
