//9. Program to print prime numbers in the given range
#include<stdio.h>
#include<math.h>
int isprime(int num)
{
    if(num<2){
        return 0;
    }
    else
    {
        int x = num/2;
        for(int i = 2; i <= x; i++)
        {
            if(num % i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int a,b;
    printf("Enter  the lower and upper range ");
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        if(isprime(i))
            printf("%d ",i);
        
    }
}