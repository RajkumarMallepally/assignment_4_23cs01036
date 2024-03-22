#include <stdio.h>
#include <math.h>
int main()
{
  int arm_num,dig,n;
  printf("Enter your number : ");
  scanf("%d",&arm_num);
  int num_dig = 0;
  if (arm_num>=100&&arm_num<=999)
   {
      int p1=arm_num/100;
      int p2=(arm_num%100)/10;
      int p3=(arm_num%100)%10;
     if  (pow(p1,3)+pow(p2,3)+pow(p3,3)==arm_num)
     {
       printf("It is an Armstrong number");
     }
     else{
      printf("It is not an Armstrong number");
     }

   }
    else{
      printf("It is not a 3 digit number");
     }
  return 0;

}