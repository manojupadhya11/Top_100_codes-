//4. sum of natural numbers in the given range
#include<stdio.h>
int main(){
    int sum=0, N ,i,lower,upper;
    printf("Enter the lower bound:  ");
    scanf("%d",&lower);
    printf("Enter the upper bound:  ");
    scanf("%d",&upper);
    
    for(i=lower;i<=upper; i++){
        sum = sum +i;
    }
    printf("the sum of  Natural numbers from %d to %d is %d",lower,upper,sum);
    return 0;
    
}