#include<stdio.h>
#include<stdlib.h>
int main ()

{ int a;
float b,c;
  
	printf("SGPA to CGPA CONVERTER\n\n");
	printf("Number of Semesters in which you appear\n");
	scanf("%d", &a);
    printf("Sum of SGPA\n");
    scanf("%f",&b);
    
    c=b/a;
    printf("CGPA:- %f",c);
    system("pause");

    
}
