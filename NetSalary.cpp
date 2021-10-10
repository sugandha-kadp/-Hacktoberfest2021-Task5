#include <iostream>
using namespace std;
int main(void)
{
 double salary, netSalary;
 int etype, otHrs, otRate;

  // Emp types are 1,2,3
 cout << "Enter Employee Type : ";
 cin >> etype;

 cout << "Enter Salary : ";
 cin >> salary;

 cout << "Enter OtHrs : ";
 cin >> otHrs;

  switch (etype)
  {
     case 1 :
       otRate = 1000;
      break;
     case 8 :
        otRate = 1500;
      break;
      default :
        otRate = 1700;
    
      
  }
 netSalary = salary + otHrs* otRate;
 cout << "Net Salary is "<<  netSalary;

 return 0;
}
