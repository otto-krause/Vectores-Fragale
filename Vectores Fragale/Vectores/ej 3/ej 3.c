#include <stdlib.h>
#include <stdio.h>

int main()
{
int j=0;
int i;
int num1=0;
int num2=0;
int max= 0;
int min=0;
printf ("\nIngrese un numero ");
scanf ("%d",&num1);
printf ("\nIngrese otro numero ");
scanf ("%d",&num2);

if(num1>num2)
{
    max=num1; min=num2;
  }
  else
  {
    max=num2; min=num1;
  }
for (i=min+1 ; i<=max-1; i++)
{

    printf ("%i,",i);
  }
system ("pause");
return 0;
}
