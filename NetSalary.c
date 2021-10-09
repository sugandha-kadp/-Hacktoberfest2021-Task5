#include <iostream>
int main(void)
{
 double salary, netSalary;
 int etype, otHrs, otRate;
 bool x = true;
 std::cout << "Enter Emp Type : ";
 std::cin >> etype;
 std::cout << "Enter Salary : ";
 std::cin >> salary;
 std::cout << "Enter OtHrs : ";
 std::cin >> otHrs;
while(x)
{
  x = true;
  switch (etype)
  {
     case 1 :
       otRate = 1000;
       x = false;
      break;
     case 2 :
        otRate = 1500;
        x = false;
        break;
     case 3 :
        otRate = 1700;
        x = false;
        break;
     default :
        std::cout << "Enter valid employee type" << endl;
        std::cout << "Enter Employee Type : ";
        std::cin >> etype;
        x = true;
      break;
  }
}
 netSalary = salary + otHrs* otRate;
 std::cout << "Net Salary: "<<  netSalary;

 return 0;
}