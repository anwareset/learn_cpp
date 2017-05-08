#include <iostream>
using namespace std;
int diskon(int tb);
int bayar(int x, int y);
int main(){
	int tbeli;
	cout<<"Masukkan total pembelian = ";cin>>tbeli;
	cout<<"Diskon = "<<diskon(tbeli)<<"\n";
	cout<<"Total bayar = "<<bayar(tbeli, diskon(tbeli));
}
int diskon(int tb){
	if(tb>300000){
		tb=tb*0.15;
	}
	else
		if (tb>500000){
			tb=tb*0.2;
		}
		else
			return 0;
}
int bayar(int x, int y){
	return (x - y);
}
