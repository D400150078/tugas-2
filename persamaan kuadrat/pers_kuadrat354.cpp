#include<stdio.h>  
#include<stdlib.h> 
#include<math.h> 

main ()
{
    float a, b, c, d, x1, x2; 
	printf("Nama : Ahmad Alam Wijayanto \n"); 
	printf("Nim  : D400150078 \n"); 
    printf("Masukan nilai a :"); 
    scanf("%f", &a); 
    printf("Masukan nilai b :"); 
    scanf("%f", &b); 
    printf("Masukan nilai c :"); 
    scanf("%f", &c);
    d=(b*b)-(4*a*c);
    if(d==0) 
    {
            x1=b/(2*a); 
            printf("x1=x2= %f\n", x1); 
            }
    else if(d<0) 
    {
         x1=-b/(2*a); 
         x2=sqrt(-d)/(2*a); 
         printf("x1= %f\n", x1);
         printf("x2= %f\n", x2);
         }
    else if(d>0)
    {
         x1=-b+ sqrt(d)/(2*a);
         x2=-b- sqrt(d)/(2*a);
         printf("x1= %f\n", x1);
         printf("x2= %f\n", x2);
         }
    system("pause");
}
