#include<stdio.h> 
void add(float *x, float *y, float *result)
{ 
 *result= *x + *y; 
}

void sub(float *x, float *y, float *result)
{ 
 *result= *x - *y; 
}

void mul(float *x, float *y, float *result) 
{ 
 *result= *x * *y; 
}

void divide(float *x, float *y, float *result) 
{ 
 *result= *x / *y; 
}

void main()
 { 
 int choice; 
 float x,y,result;

 do
  { 
 //system("cls"); 

 printf("*********Menu*********\n"); 
 printf("----------------------\n");
 printf("\t1. Add \n"); 
 printf("\t2. Sub \n"); 
 printf("\t3. Mul \n"); 
 printf("\t4. Divide \n"); 
 printf("\t5. To exit \n"); 
 printf("----------------------\n"); 
 printf("----------------------\n");
 printf("\nEnter your choice: "); 
 scanf("\n%d", & choice); 
 
 if(choice == 1 || choice == 2 || choice == 3 || choice == 4)
  { 
 printf("Enter your Num1: "); 
 scanf("%f", & x); 
 printf("Enter your Num2: "); 
 scanf("%f", & y);
  }
  
 else if( choice != 5)
  { 
 printf("!!! Please select only 1 to 5 !!!\n"); 
 getch();
  } 
 
 switch(choice)
   { 
 case 1: 
 add(&x,&y,&result); 
 printf("Your Add is : %.2lf + %.2lf = %.2lf \n", x,y,result); 
 getch(); 
 break; 

case 2 : 
 sub(&x,&y,&result); 
 printf("Your Sub is : %.2lf - %.2lf = %.2lf \n", x,y,result); 
 getch(); 
 break; 
 
 case 3: 
 mul(&x,&y,&result); 
 printf("Your Mul is : %.2lf * %.2lf = %.2lf \n", x,y,result); 
 getch(); 
 break; 
 
 case 4: 
 if(y == 0)
   { 
 printf("!!! Can not divide by zero !!!\n"); 
 getch(); 
 break;
   }
   
 else
   { 
 divide(&x,&y,&result); 
 printf("Your Divide is : %.2lf / %.2lf = %.2lf \n", x,y,result); 
 getch(); 
 break; 
   } 
  } 
 } while(choice!=5);
}

