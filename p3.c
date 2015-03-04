// P - dereferencing a pointer w/o having allocated memory for it
// D - deallocating memory that has already been deallocated
// H - deallocating memory that is not located on the heap
// M - memory leak

#include <stdio.h>
#include <stdlib.h>

int main() {

	int a=0, b=1, c=2;
	int *p, *q, *r;

	q = &c;
	p = &a;
	*q = b;
	q = malloc(sizeof(int));
	r = q;
	*r = a + *q + c;
	free(p);
	r = malloc(sizeof(int));
	free(q);
	a = b + c + *r;
	*q = *r;
	free(r);

	return 0;
}
