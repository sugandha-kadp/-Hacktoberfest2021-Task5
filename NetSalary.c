#include <stdio.h>

      int main(){

      double salary,netsalary;
      int etype,otHrs,otRate;

      printf("Enter Employee Type : ");
      scanf("%d", &etype);

      printf("Enter Salary : ");
      scanf("%lf", &salary);

      printf("Enter OtHrs : ");
      scanf("%d", &otHrs);

      switch(etype)
      {
      case 1:
      otRate = 1000;
      break;
      case 2:
      otRate = 1500;
      break;
      default:
      otRate = 1700;
      }
      netsalary = salary + otHrs * otRate;
      printf("\nNet Salary is %lf", netsalary);
      return 0;
      }
