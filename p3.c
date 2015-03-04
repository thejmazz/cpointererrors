#include <stdio.h>
#include <stdlib.h>

int main() {

	int a=0, b=1, c=2;
	int *p, *q, *r;

	q = &c;
	p = &a; 
	*q = b;
	q = malloc(sizeof(int));
	r = q;g
	*r = a + *q + c; 
	free(p); 
	r = malloc(sizeof(int));
	free(q);
	a = b + c + *r;
	*q = *r;
	free(r);
		
	return 0;
}