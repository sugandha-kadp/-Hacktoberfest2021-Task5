#include <stdio.h>

int main(){
	
	double salary, netsalary;
	int emptype,hour,rate;
	
	//emptype is 1,2,3
	printf("Enter Employee Type --- ");
	scanf("%d",&emptype);
	printf("Enter Employee Salary --- ");
	scanf("%lf",&salary);
	printf("Enter Hours --- ");
	scanf("%d",&hour);
	
	switch(emptype){
		
		case 1 :
       			rate = 1000;
      			break;
     		case 2 :
        		rate = 1500;
     			break;
		default :
        		rate = 1700;
      			break;
	}
	
	netsalary = salary + hour*rate;
 	printf("Netsalary is --- %lf",netsalary);	
 	
 	return 0;
}
