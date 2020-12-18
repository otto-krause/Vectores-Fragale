#include <stdio.h>
#include <stdlib.h>

int main()
{
	int v[5],acu=0,z;
	ing(v);
	for(z=0;z<5;z++)
	{
	printf("\n La resistencia %d es : %d ",z,v[z]);
	acu=acu+v[z];
	}
	printf("\n La resistencia total es %d ",acu);
	}
	int ing(int *a)
	{
	int i;
	for (i=0;i<5;i++)
	{
		printf("\n Ingrese una resistencia ");
		scanf("%d",&a[i]);
	}
}
