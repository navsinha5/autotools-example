#include <stdio.h>
#include "libsome.h"
#include "libsomeother.h"

int main(){
	printf("hello Autotools!!\n");
	printHelloFromLibSome();
	printHelloFromLibSomeOther();
}