#include <stdio.h>


int main(void)
{
   double salary, netSalary;
   int etype, otHrs, otRate;

   // Emp types are 1,2,3
   printf("Enter Employee Type : ");
   scanf("%d",&etype);

   printf("Enter Salary : ");
   scanf("%lf",&salary);

   printf("Enter OtHrs : ");
   scanf("%d",&otHrs);

   switch(otHrs)
   {
      case 1 :
         otRate = 1000;
         break;
      case 8 :
         otRate = 1500;
      default :
         otRate = 1700;
         break;
   }

   netSalary = salary + otHrs* otRate;
   
   printf("Net Salary is %lf\n",netSalary);  

   return 0;
}
