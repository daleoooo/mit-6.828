// program to cause a breakpoint trap

#include <inc/lib.h>

# define    DALE    0

void
umain(int argc, char **argv)
{
# ifdef DALE

# endif /* Dale */

	asm volatile("int $3");
}

