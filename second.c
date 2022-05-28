# LBAssignments
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *ptr=NULL;
   int num,even=0,odd=0,num2;
   scanf("%d",&num);
   scanf("%d",&num2);

   ptr=(int*)malloc(num*(sizeof(int)));
   for(int i=0;i<num;++i)
   {
      scanf("%d",&ptr[i]);
   }
   for(int j=0;j<num;++j)
   {
      if((ptr[j])==num2)
      {
         // printf("YES,IT CONTAINS 11\n");
         even++;

      }
      else
      {
         // printf("NO,IT DOES NOT CONTAINS 11");
      }
   }      
   printf("%d",even);
}
