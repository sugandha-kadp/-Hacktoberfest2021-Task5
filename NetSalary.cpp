//Change the extention in salary.cpp code
#include <iostream>
using namespace std;
int main(void)
{
 double salary, netSalary;
 int etype, otHrs, otRate;

 cout << "Enter Employee Type : "; //Enter the emp type
 cin >> salary;

 cout << "Enter Salary : "; // Enthe the Salary amount
 cin >> salary;

 cout << "Enter OtHrs : "; // Enther the Ot Hours
 cin >> otHrs;

  switch (etype) // Switch Statement
  {
     case 1 :
       otRate = 1000;
      break;
     case 2 :
        otRate = 1500;
     default :
        otRate = 1700;
      break;
  }
 netSalary = salary + otHrs* otRate; // Salary Calculation 
 cout << "Net Salary is "<< netSalary;  // Dispaly the output

 return 0;
}
