#include "average/gjennomsnitt.h"

#include <iostream>


int main(int argc, char **argv) {
	int size = argc - 1 ;
	int* mylist  = (int*)calloc( size, sizeof(int) ) ;

	if(size==0){
		std::printf("Call with some numbers...\n");
		return 0;
	}
    for( int i = 0; i < size; i++)
    {
        // convert to integer
        std::sscanf( argv[i + 1], "%d", &mylist[i] ) ;
    }
	double snitt = gjennomsnitt(mylist, size);
	std::printf("\nAverage: %d\n", snitt);
	return 0;
}


