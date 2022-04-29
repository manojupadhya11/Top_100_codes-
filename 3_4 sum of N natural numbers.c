//2. Sum of first N natural numbers
//3. Sum of N natural numbers
#include<stdio.h>
int main(){
    int sum=0, N ,i;
    printf("Enter the value of N:  ");
    scanf("%d",&N);
    for(i=0;i<=N; i++){
        sum = sum +i;
    }
    printf("the sum of %d Natural numbers is %d",N,sum);
    return 0;
    
}