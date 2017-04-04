#include <iostream>
using namespace std;
void luaspp(double x, double y);
void luaspp(double x, double y){
	double hasil;
	hasil=x*y;
	cout<<hasil;
}
int main() {
	double p,l;
	cout<<"Panjang : "; cin>>p;
	cout<<"Lebar : "; cin>>l;
	cout<<"Luas Persegi Panjang : ";
	luaspp(p,l);
}
