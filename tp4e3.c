#include <stdio.h>
#include <stdLib.h>
int SP(int a,int b)
{
	printf("Ingrese Un Numero: \n");
	scanf("%d",&a);
	printf("Ingrese Otro Numero: \n");
	scanf("%d",&b);
	
	printf("El primer numero ingresado es: %d\n\n",a);
	
	printf("El segundo numero ingresado es: %d\n\n",b);
	return b;
}

int main() 
{
	
	int a=0,b=0;

	
	SP(a,b);
	
	
	system("pause");
}
