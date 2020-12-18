#include <stdio.h>
#include <stdlib.h>

	int main()
	{
	float v[5];
	ing(v);
	prom(v);
	may(v);
	}
	void ing(float numr[])
	{
	int i;
	for (i=0;i<5;i++)
	{
		printf("Ingrese un numero ");
		scanf("%f",&numr[i]);
	}
		}
	void prom(float v[5])
	{
	float numr=0,pnr=0;
	int n;

	for (n=0;n<5;n++)
	{
		numr= numr+v[n];
	}
	pnr= acu/5;
	printf("\n El promedio de los numeros es %.2f ",pnr);
	}
	void may(float v[5])
	{
		int a;
		float copy=0;
		for (a=0;a<5;a++)
		{
			if (copy < v[a])
			{
				copy= v[a];
			}
		}
		printf("\n El numero mayor es %.2f ",copy);
	}
