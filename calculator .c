 #include<stdio.h>
#include<stdlib.h>

int main()
{
   int choice;
   int a;
   int b;
   printf("enter the value for a");
   scanf("%d",&a);
   printf("enter the value for b");
   scanf("%d",&b);
   printf("\n1. addation ");
   printf("\n2. subtraction");
   printf("\n3. multiplication");
   printf("\n4. division");
   printf("enter your choice");
   scanf("%d",&choice);
   
   switch(choice)
   {
   case 1: 
   printf("%d",a + b);
   break;
   
   case 2:
   
   printf("%d",a - b);
   break;
   
   case 3:
   
   printf("%d",a * b);
   break;
   
   case 4:
   
   printf("%d",a / b);
   
   break;
   
   }
   return 0;    
   
}