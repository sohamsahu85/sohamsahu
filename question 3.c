#include<stdio.h>
int main()
{
    int totalunits,costs;

    printf("total units consumed");
    scanf("%d",&totalunits);

    if(totalunits>0 && totalunits<=100)
    {
        costs=5*totalunits;

    }

else if(totalunits>100 && totalunits<=300)
   {
    costs= (5*100) + 8*(totalunits-100);
   }

else
{
    costs=(5*100) + (8*200) + 10*(totalunits-300);

}

printf("the electricity bill is %d rupees",costs);
scanf("%d",&costs);

return 0;
}
