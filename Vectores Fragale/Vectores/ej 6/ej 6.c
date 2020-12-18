#include <stdio.h>
#include <stdlib.h>

int main( )
{
	int z,mnp=0,mmp=0;
	float v[20];
	ing(v);

	for (z=0;z<20;z++)
	{
	if (v[z]>=20000)
	{
		mmp=mmp+1;
	}else
	{
		mnp=mnp+1;
	}
	}
	printf("\n Las personas que ganan mas de 20 mil pesos son %d",mmp);
	printf("\n Las personas que ganan menos de 20 mil pesos son %d",mnp);

	return 0;
	}
	void ing(float a[])
	{
	int i;
	for (i=0;i<20;i++)
	{
		printf("Ingrese un salario ");
		scanf("%f",&a[i]);
	}
}
