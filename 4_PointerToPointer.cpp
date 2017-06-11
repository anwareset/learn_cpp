#include <iostream>
using namespace std;
int main(){
	int a,*pa,**ptp;
	cout<<"Masukkan nilai a : ";cin>>a;
	pa=&a;
	ptp=&pa;
	cout<<"\nNilai x\t\t= "<<a<<"\t( "<<&a<<" )";
	cout<<"\nNilai pa\t= "<<*pa<<"\t( "<<&pa<<" )";
	cout << "\nNilai ptp\t= " << **ptp<<"\t( "<<&ptp<<" )";
}
