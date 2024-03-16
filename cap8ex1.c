#include <stdio.h>


int main() {
	int num = 9465;
	int *ptr_num = &num;
	
	printf("\n Valor ponteiristico (*ptr): %d", ptr_num);
	printf("\n Valor acessado (*ptr): %d", *ptr_num);
	printf("\n");
	
	return 0;
}
