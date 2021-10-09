#include <iostream>

int main(void)
{
 double salary, netSalary;
 int etype, otHrs, otRate;
 char s[100];
 
  switch (etype)
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

char sNetSalary[100];
itoa(netSalary, sNetSalary, 100);


 return 0;
}
