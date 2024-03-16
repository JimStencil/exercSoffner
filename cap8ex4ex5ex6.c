#include <stdio.h>

int main() {
	// exercicio 4
	char string[] = "FATEC";
	char *ptr_str = string;
	printf("\n%s\n", string);
	
	// exercicio 5 
	char c = 'T', d = 'S';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;	
	
		
	p3 = &d;
	printf("\n%c", *p3); // S
	
	p3 = p1;
	printf("\n%c", *p3); // T
	
	*p1 = *p2;
	printf("\n%c\n", *p1); // S
	
	// exercicio 6
	int *p;
	int i;
	int k;
	i = 42;
	k = i;
	p = &i;

	*p = 75;
	printf("\n%d\n", *p);
	
	return 0;
}
