// P - dereferencing a pointer w/o having allocated memory for it
// D - deallocating memory that has already been deallocated
// H - deallocating memory that is not located on the heap
// M - memory leak

#include <stdio.h>
#include <stdlib.h>

typedef struct _student {
		unsigned long student_number;
		char* name;
		int year;
} student;


int main(int argc, char **argv) {

	student s1, *s2, *s3;
	char somename[15] = "Sarah Bellum";
	char *othername = malloc(15 * sizeof(char));
	strncpy(othername, "Corey Ander", 15);

	s1.student_number = 999999;
	strncpy(s1.name, "Sue Flay", 10);
	s1.year = 2;

	s2 = malloc(sizeof(student));
	s2->student_number = 997788;
	s2->name = somename;
	s2->year = 3;

	s1.name = othername;

	s3 = malloc(sizeof(student));
	s3->student_number = 991133;
	strncpy(s3->name, "Warren Peace", 12);
	s3->year = 1;

	free(s1.name);
	free(s2->name);
	free(othername);

	return 0;
}
