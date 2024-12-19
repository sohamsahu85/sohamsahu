#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("enter 3 integers");
    scanf("%d%d%d",&a,&b,&c);

sum = a+b+c;

printf("the sum of %d,%d and %d is %d:\n",a,b,c,sum);

if(sum%2==0)
{
    printf("the sum is an even number\n");
}else{

printf("the sum is a odd number\n");
}

if(sum<=1)
{
    printf("sum is not prime\n");
}
else
{
    for(int i=1;i<=sum;i++)
    {
        if(sum%i==0)
             sum++;
    }
    if(sum>2)
    {
        printf("sum is not prime\n");
    }
    else
    {
        printf("sum is prime\n");
    }
}

    return 0;
}

