// Attempting to modify data through a
// non-constant pointer to constant data.
#include <stdio.h>

void f(const int* xPtr);

int main_706(void)
{
	int y = 7; // define y

	f(&y); // f attempts illegal modification
}

void f(const int* xPtr)
{
	// *xPtr = 100; // error: cannot modify a const object
	printf("Illegal modification to constant data");
}
