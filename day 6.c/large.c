#include<stdio.h>
int main()
{
   int max=0;
   int array[]={60,3,6,444};
   for(int i=0;i<5;i++)
  {
   if(array[i]>max)
   {
       max=array[i];
   }
}
 printf("%d\n",max);
   
return 0;
}