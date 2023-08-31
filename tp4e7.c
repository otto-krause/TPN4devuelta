#include <stdio.h>
#include <stdLib.h>


float octa(int num) {
	
	float octava=num / 8;
	printf("La octava parte de %d es %.2f \n", num, octava);
	
	return num;
}

int main() {
	int num;
	

	printf("Ingresa un número: ");
	scanf("%d",&num);
	
	
 octa(num);
	system("pause");
}
