#include <stdio.h>
#include <stdlib.h>

int main()
{

	int nm=0, i=0, x=0, y=1, z=1, j;

	printf("Ingrese el numero maximo : ");
	scanf("%d",&nm);
	int v[nm];
	for(i=0;i<nm;i++)
	{
		z = x + y;
		x = y;
		y = z;
		v[i]=z;
	}
	for (j=0;j<nm;j++)
	{
		printf("%d, ",v[j]);
	}

}
