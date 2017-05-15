#include <iostream>
using namespace std;
int main(){
	
	int a[3][4]={23,35,21,34,23,21,43,65,43,67,87,32},cari,n=0,b=0,k=0,jumlah=0;
	float rata;
	for(int x=0;x<3;x++){
		for(int y=0;y<4;y++){
			cout<<a[x][y]<<" ";
			if(a[x][y]>b){
				b=a[x][y];
				k=b;
			}
			
		}
		cout<<"\n";
	}
	cout<<"\nCari nilai : ";cin>>cari;
	system("cls");
	for(int x=0;x<3;x++){
		for(int y=0;y<4;y++){
			if(a[x][y]==cari){
				cout<<"\nNilai "<<cari<<" ditemukan pada baris "<<x+1<<" kolom "<<y+1;
				n=a[x][y];
			}
			if(a[x][y]<k){
				k=a[x][y];
			}
			jumlah+=a[x][y];
		}
	}
	if(cari!=n){
		cout<<"\nNilai "<<cari<<" tidak ditemukan!";
	}
	rata=jumlah/12;
	cout<<"\nNilai terbesar\t: "<<b;
	cout<<"\nNilai terkecil\t: "<<k;
	cout<<"\nJumlah\t\t: "<<jumlah;
	cout<<"\nRata - rata\t: "<<rata<<"\n";
	system("PAUSE");
	return 0;
}
