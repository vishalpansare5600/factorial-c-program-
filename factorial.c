#include<stdio.h>
#include<conio.h>

 void main()
 {
 
 int i,fact=1,number;
 
 printf("enter a number");
 scanf("%d",&number);
 
 for(i=1;i<=number;i++)
 {
 
 fact=fact*i;
}
 
 	printf("factorial of number %d is %d",number,fact);
 	
 	return 0;
 
 }
