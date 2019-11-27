#include "average/gjennomsnitt.h"

#include <iostream>


int main(int argc, char **argv) {
	int mylist [7] ={900, 12, 3, 17, 50, 282, -1};
	int len = *(&mylist + 1) - mylist;
	double snitt = gjennomsnitt(mylist, len);
	std::cout << "\n\nGjennomsnitt: "<< snitt;
	return 0;
}


