#include <stdio.h>
#include <stdlib.h>

	int main()
	 {
	float v[30],acu=0,pc=0;
	int b;
	ing(v);
	for (b=0;b<30;b++)
	{
	acu=acu+v[b];
	}
	pc=acu/30;

	printf("El promedio del curso es %.2f ",pc);
	}
	void ing(int a[])
	{
	int i;
	for(i=0;i<30;i++)
	{
	printf("Ingrese la nota de el alumno %d ",i);
	scanf("%f",&a[i]);
	}
}
