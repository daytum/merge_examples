#include "stdio.h"
#include <errno.h>
void quit(char *message) {
	printf('Error number %d', errno)
        exit(1);
