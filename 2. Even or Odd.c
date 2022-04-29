//2. problem 2 program for even or odd
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number to check even or odd:  ");
    scanf("%d",&num);
    if(num%2==0){
        printf("The %d is Even number",num);
        
    }else{
        printf("the %d is odd number",num);
        
    }
    return 0;
    
}