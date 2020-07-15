#include<stdio.h>
void main()
{
 int i,guess,flag=1,count=0,num=51;
 printf("guess the number \n");
 scanf("%d",&guess);
do
{
  if(num==guess)
   {
    flag=0;
   }
  else if(guess<num)
    {
    flag=1;
    printf("your guess is lower than the number \n");
    count++;
    }
  else
  {
  flag=1;
  printf("your guess is greater than the number \n");
  count++;
 }
 if(flag==1)
 {
   printf("SORRY! plz guess it again");
   scanf("%d",&guess);
  }
}while(flag);
printf("CONGRATS!you guess the number %d \n",num);
printf("no. of the trials:%d\n", count);
}