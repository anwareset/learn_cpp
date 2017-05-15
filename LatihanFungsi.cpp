#include <iostream>
using namespace std;
int bl(int hb, int jb);
int dk(int b, int j);
int main(){
	int harga,jumlah;
	cout<<"Masukkan jumlah beli : ";cin>>jumlah;
	cout<<"\nMasukkan harga barang : ";cin>>harga;
	cout<<"\nHarga total : "<<bl(harga,jumlah)<<"\n";
	dk(bl(harga,jumlah),jumlah);
	cout<<"\n";
	system("PAUSE");
	return 0;
}
int bl(int hb, int jb){
	return hb*jb;
}
int dk(int b, int j){
		if(b>=400000&&j>4){
			cout<<"\nBonus : Kipas angin";
		}
		if(b>=200000&&j>3&&b<400000){
			cout<<"\nBonus : Handuk";
		}
		if(b>=50000&&j>2&&b<200000){
			cout<<"\nBonus : Ballpoint";
		}
		if(j<2&&b<50000) {
			cout<<"\nTidak mendapat bonus!";
		}
}
