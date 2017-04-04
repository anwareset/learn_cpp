#include <iostream>
using namespace std;
int luaspp(double x, double y){
	double hasil;
	hasil=x*y;
	return (hasil);
}
int main() {
	double p,l,luas;
	cout<<"Panjang : "; cin>>p;
	cout<<"Lebar : "; cin>>l;
	luas=luaspp(p,l);
	cout<<"Luas Persegi Panjang : "<<luas;
}
