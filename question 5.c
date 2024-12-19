#include<stdio.h>
int main()
{
    int array[5]={1,2,2,3,3};
    int i,j,a=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {


if (array[i]==array[j])
{
    break;
}
        }


if(j==i){
    array[a++]=array[i];
}
}

printf("array without duplicate ");
for(i=0;i<a;i++){

    printf("%d",array[i]);
}

        printf("\n");

    return 0;
    }
