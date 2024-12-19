#include<stdio.h>
int main()
{
    int N,num;
    float largest,secondlargest;

    printf("enter the number of integers");
    scanf("%d",&N);

    if(N<2)
    {
        printf("number of integers should be at least 2\n");
        return 0;
    }

    printf("Enter integer 1");
    scanf("%f",&largest);
    printf("Enter integer 2");
    scanf("%f",&num);

secondlargest=-1;

 if (num > largest) {
        secondlargest = largest;
        largest = num;
    } else {
        secondlargest = num;
    }


    for (int i = 3; i <= N; i++) {
        printf("Enter number %f: ", i);
        scanf("%f", &num);

        if (num > largest) {
            secondlargest = largest;
            largest = num;
        } else if (num > secondlargest && num != largest) {
            secondlargest = num;
        }
    }


    printf("the second largest number is %d",secondlargest);

    return 0;
}
