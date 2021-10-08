#include <iostream>
using namespace std;
int main(void)
{
 double salary, netSalary;
 int etype, otHrs, otRate;
 bool i = true;

  // Emp types are 1,2,3
 cout << "Enter Employee Type : ";
 cin >> etype;

 cout << "Enter Salary : ";
 cin >> salary;

 cout << "Enter OtHrs : ";
 cin >> otHrs;
while(i)
{
  i = true;
  switch (etype)
  {
     case 1 :
       otRate = 1000;
       i = false;
      break;
     case 2 :
        otRate = 1500;
        i = false;
        break;
     case 3 :
        otRate = 1700;
        i = false;
        break;
     default :
        cout << "Enter valid employee type" << endl;
        cout << "Enter Employee Type : ";
        cin >> etype;
        i = true;
      break;
  }
}
 netSalary = salary + otHrs* otRate;
 cout << "Net Salary is "<<  netSalary;

 return 0;
}