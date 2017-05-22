#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
	int n1=5;int n2=12;int *ptr;
	ptr=&n1;
	*ptr=10;
	ptr=&n2;
	*ptr=20;
	cout<<"Nilai 1 = "<<n1<<" dan nilai 2 = "<<n2;
}
