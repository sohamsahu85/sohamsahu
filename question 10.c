#include<stdio.h>
int main()
{

    int i,j,temp,n=6;
    int array[6]={1,9,4,2,6,3};
    int size= sizeof(array)/sizeof(array[0]);

    for(i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(array[j]>array[j+1])
        {
            temp=array[j];
            array[j]=array[j+1];   //bubble sort
            array[j+1]=temp;
        }
    }
}

printf("the sorted array is \n");

for(i=0;i<n;i++)
{
    printf("%d",array[i]);
}
                                //binary search
   int left=0;
   int right = size-1;

   while(left<=right){
   int mid = left + (right-left)/2;
   int target = 6;

   if(array[mid]==target)
   {
    return mid;
   }

  else if(array[mid]>target)
   {
       right=mid-1;
   }
   else
   {
   left=mid+1;
   }
   }
   return 0;
}

