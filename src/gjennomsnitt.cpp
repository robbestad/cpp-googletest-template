#include "average/gjennomsnitt.h"
#include <iostream>
using namespace std;

double gjennomsnitt(int* tallrekke, int size){
	int sum=0;
	for(int i =0; i<size;i++){
		i+1==size && std::cout << tallrekke[i];
		i+1<size && std::cout << tallrekke[i] << ", ";
		sum+=tallrekke[i];
	}
	return (double) sum/size;
}

