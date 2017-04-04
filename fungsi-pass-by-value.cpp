#include <iostream>
using namespace std;
int tambah(int x);
int main(){
	int a, hasil;
	cout<<"Masukkan bilangan : ";cin>>a;
	cout<<"Nilai a awal : "<<a<<endl;
	hasil=tambah(a);
	cout<<"Nilai a akhir : "<<a<<endl;
	cout<<"Hasil : "<<hasil;
}
int tambah(int x){
	cout<<"Nilasi x awal = "<<x<<endl;
	x=x+5;
	cout<<"Nilai x akhir = "<<x<<endl;
	return x;
}
