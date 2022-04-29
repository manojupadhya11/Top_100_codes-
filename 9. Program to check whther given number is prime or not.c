//8. Program to check whether given number is prime or not
#include<stdio.h>
int main(){
    
        int i,num;
        int count=0;
        printf("Enter the number to check whether it is prime or not  ");
        scanf("%d",&num);
    
        for(i=1; i<=num; i++)
        {
            if(num%i==0)        //calculating total number of divisors
                count = count + 1;
        }
        if(num == 0 || num == 1)
            printf("%d is not a prime number",num);
        else if(count > 2)
            printf("%d is not a prime number",num);
    else
    printf("%d is a prime number",num);
    
    return 0;
}