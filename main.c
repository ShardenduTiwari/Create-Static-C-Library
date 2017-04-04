
#include"calc.h"
int main()
{
 int a,o,n;
 printf("Choices available:\n");
 printf("1.factorial\n2.Square\n3.Cube\n4.even/odd");
 printf("\nEnter the operation required:\t");
 scanf("%d",&a);
 printf("\nEnter the number:\t");
 scanf("%d",&n);
 if(a==1)
 {
	o=fact(n);
  	printf("The factorial of %d is:%d",n,o);
 }
 else if(a==2)
 {	o=square(n);
	printf("The square of %d is:%d",n,o);
 }
 else if(a==3) 
 {
        o=cube(n); 
        printf("The cube of %d is:%d",n,o);
 }
 else if(a==4)
 {       o=ev_od(n);
         printf("The square of %d is:%d",n,o);
 }
 else
	printf("Wrong value choosen");

 return 0;
}


