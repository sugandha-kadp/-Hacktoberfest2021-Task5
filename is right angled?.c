#include <stdio.h>

int main(){

int a,b,c;
printf("Hello there!\n");
printf("We are going to find out weather the given triangle is rightangled triangle or not\n For that 1st please enter the length of largest side\n");
scanf("%d",&a);
printf(" Now enter the length of othe sides\n ");
scanf("%d%d",&b,&c);
 if(a*a==(b*b)+(c*c))
{
    printf("This is a right angled triangle");
}
    else{
    printf("This is not a right angled triangle");
}
return (0);
}
