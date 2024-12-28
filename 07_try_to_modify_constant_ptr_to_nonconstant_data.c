// Attempting to modify a constant pointer to non-constant data.
#include <stdio.h>

int main_707(void)
{
	int x = 0; //define x
	int y = 0; //define y

	// ptr is a constant pointer to an integer that can be modified
	// through ptr, but ptr always points to the same memory location
	int* const ptr = &x;

	*ptr = 7; // allowed: *ptr is not const
	// ptr = &y; // error: ptr is const; cannot assign new address
	puts("Attempting to modify a constant pointer to non-constant data");
}
