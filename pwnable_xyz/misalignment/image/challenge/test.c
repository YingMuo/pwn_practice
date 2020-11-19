#include <stdio.h>

int main()
{
	long a = 0xb500000000000000;
	printf( "%ld\n", a );
	long b = 0;
	scanf( "%ld", &b );
	printf( "%ld\n", b );
	return 0;
}
