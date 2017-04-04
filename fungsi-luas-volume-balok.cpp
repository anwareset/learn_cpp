#include <iostream>
using namespace std;
int lbalok(int a, int b, int c);
int vbalok(int x, int y, int z);
int main(){
	int p,l,t,l_balok,v_balok;
	cout<<"Masukkan panjang balok = ";cin>>p;
	cout<<"Masukkan lebar balok = ";cin>>l;
	cout<<"Masukkan tinggi balok = ";cin>>t;
	l_balok=lbalok(p, l, t);
	v_balok=vbalok(p, l, t);
	cout<<"Luas = "<<l_balok<<endl;
	cout<<"Volume = "<<v_balok;
}
int lbalok(int a, int b, int c){
	int lhasil;
	lhasil=2*((a*b)+(a*c)+(b*c));
}
int vbalok(int x, int y, int z){
	int vhasil;
	vhasil=x*y*z;
}
