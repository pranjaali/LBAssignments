# LBAssignments
int main()
{
   int num=0;
   scanf("%d",&num);
   BOOL returnType=false;
   returnType=Check(num);
   if(returnType==true)
   {
      printf("NUMBER IS DIVISIBLE BY 5\n");

   }
   else
   {
      printf("%d is not divisible by 5:\n",num);
   }
   return 0;
}
