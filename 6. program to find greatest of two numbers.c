//5. program to find greatest of two numbers
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the first number ");
    scanf("%d",&num1);
    printf("Enter the second number ");
    scanf("%d",&num2);
    if(num1 > num2){
        printf("%d is greatest",num1);
        
    }else{
        printf("%d is greatest",num2);
    }
    return 0;
    
}