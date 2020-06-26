/*

install GNU c compiler - GCC
$ sudo apt install build-essentials

build hello_world.c
$ gcc hello_world.c

this generates a.out

grant os exec permissions to a.out
$ sudo chmod +x a.out

*/

// pre-processor directive, include external 
#include <stdio.h>

int main() {
   printf("yo");
   return 0;
}