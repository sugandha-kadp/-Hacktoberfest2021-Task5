#include<stdio.h>
int main (void)
{
	printf("Are you getting juggled with the even and odd numbers...\n");
	printf("Dont worry\n\n");
	printf("'****' We are there for you '****'\n");
	printf("Just enter the number, we will tell you the number is even or the odd.\n");
	int num;
	printf("Please enter the valid number.\n");
	scanf("%d.\n",&num);
	printf("Okk..... You entered %d\n",num);
	printf("****Let's the magic begin****\n\n");
	if(num%2==0){
		printf("Your entered number is even i.e. %d is even number.\n",num);
	}
	else{
		printf("Your entered number is odd i.e. %d is odd number.\n",num);
	}
	printf("Hope you get your desired result..\n");
	printf("PLEASE rate us.\n");
	int rating;
	printf("Please enter the rating.\n");
	scanf("%d.\n",&rating);
	switch(rating){
		case 1:
			printf("You rate me 1.\nThanks for rating , We try to improve our work.\n");
			break;
			
			case 2:
			printf("You rate me 2.\nThanks for rating, We try to improve our work.\n");
			break;
			
			case 3:
			printf("You rate me 3.\nThanks for rating, We try to improve our work.\n");
			break;
			  
			case 4:
			printf("You rate me 4.\nThanks for rating.\n");
			break;
			
			case 5:
			printf("You rate me 5.\nThanks for rating.\n");
			break;
			
			default:
			printf("INVALID RATING! plase grade us for our work.\n");
			break;
			
		}
		return 0;
	}
			                                                                                                                      
																																  
