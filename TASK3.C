#include<stdio.h>
#include<conio.h>

void main()
{\
   clrscr();
   float basesalary,hra,da,ta,gs;
   printf("enter base salary");
   scanf("%f",&basesalary);
   printf("salary=%0.f",basesalary);
   hra=(basesalary*10)/100;
   ta=(basesalary*3)/100;
   da=(basesalary*5)/100;
   gs=(basesalary+hra+da+ta);
   printf("\nhra=%0.f\nda+%0.f",hra,da,ta);
   printf("\n gross salary of=%0.f",gs);
 getch();
  }