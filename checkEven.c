#include<stdio.h>
#include<stdlib.h>
// -----------
int cntEven(int *p,int iLength)
{ int cnt=0;
    for(int j=0;j<iLength;j++)
    {
        if(p[j]%2==0)
        {
            cnt++;

        }
    }
    return cnt;

}
// ---------
int main()
{
    int iSize=0,*p,count=0;
    printf("Enter the how many nubers you want to write:\n");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*(sizeof(int)));
    printf("Enter the numbers:\n");
    for(int i=1;i<=iSize;i++)
    {
       scanf("%d",&p[i-1]);
    }
   count= cntEven(p,iSize);
   printf("%d",count);
    return 0;
}
