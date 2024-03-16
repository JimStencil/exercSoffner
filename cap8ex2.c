#include <stdio.h>

int main() {
	float num = 94.23;
	float *ptr_num = &num;
	
	printf("\n Valor acessado via ponteiro: %.2f", *ptr_num);
	printf("\n");
	
	return 0;
}
