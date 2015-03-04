// P - dereferencing a pointer w/o having allocated memory for it
// D - deallocating memory that has already been deallocated
// H - deallocating memory that is not located on the heap
// M - memory leak

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a=0, b=1, c=2;
	int *p, *q, *r;

	p = malloc(sizeof(int));
	*p = b;
	q = &c;
	*q = b;
	q = malloc(sizeof(int));
	*r = a + b + *p; // P
	free(p);
	free(q);

	return 0;
}
