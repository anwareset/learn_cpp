#include <iostream>
using namespace std;
int bayar(int x, int y);
struct s {
	int h[5]={6500,11500,26500,51500,101500},p,b,hp,tbayar;
};
int main(){
	s ss;
	cout<<"List Pulsa\n--------\n[1] 5000\n[2] 10000\n[3] 25000\n[4] 50000\n[5] 100000\n\nPilih : ";cin>>ss.p;
	ss.tbayar=ss.h[ss.p];
	cout<<"Masukkan nomor HP : ";cin>>ss.hp;
	cout<<"Beli berapa kali : ";cin>>ss.b;
	system("cls");
	cout<<"Bayar : "<<bayar(ss.b, ss.tbayar);
	cout<<"\n";
	system("PAUSE");
}
int bayar(int x, int y){
	return (x*y);
}
