#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf( "%d\n", O_RDONLY );
	int fd = 0;

	fd = open( "flag", O_RDONLY, 0 );
	char buf[50] = {0};
	read( fd, buf, 0x20 );
	write( 1, buf, 0x20 );

	return 0;
}
