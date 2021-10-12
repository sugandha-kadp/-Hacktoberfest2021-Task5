#include <iostream>
using namespace std;
int main(void)
{
 double salary, netSalary;
 int etype, otHrs, otRate;

  // Emp types are 1,2,3
 cout << "Enter Employee Type : "
 cout >> etype;

 cout << "Enter Salary : "<<endl;
 cin >> salary;

 cout << "Enter OtHrs : "<<endl;
 cin >> otHrs;

  switch (etype)
  {
     case 1 :
       otRate = 1000;
      break;
     case 2 :
        otRate = 1500;
      break;
     default :
        otRate = 1700;
      break;
  }
 netSalary = salary + otHrs* otRate;
 cout << "Net Salary is "<< netSalary<<endl;

 return 0;
}
