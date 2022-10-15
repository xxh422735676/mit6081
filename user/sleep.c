#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"

int 
main(int argc , char *argv[])
{
	if(argc<2) {printf("too few args\n");exit(0);}
	else if(argc>2) {printf("too much args\n");exit(0);}
	else sleep(atoi(argv[1]));
	exit(0);
}
