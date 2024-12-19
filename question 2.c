#include<stdio.h>
int main()
{
    float sec,hours,minutes,remainingsec;

    printf("enter the number of seconds");
    scanf("%d",&sec);

    hours=sec/3600;
    minutes=sec/60;
    remainingsec=sec%60;

    printf("number of hours are %d\n",hours);
    printf("numbers of minutes are %d\n",minutes);
    printf("the remaining seconds are %d",remainingsec);


    return 0;
}
