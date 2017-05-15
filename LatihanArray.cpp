#include <iostream>
using namespace std;
int main(){
	int a[7]={24,16,25,14,16,11,24},cari,n,b=0;
	for(int x=0;x<7;x++){
		cout<<a[x]<<" ";
	}
	cout<<"\nCari nilai : ";cin>>cari;
	for(int x=0;x<7;x++){
		if(cari==a[x]){
			cout<<"\nNilai "<<cari<<" ditemukan pada index ke-"<<x;
			n=a[x];
		}
		if(a[x]>b){
			b=a[x];
		}
	}
	if(cari!=n){
		cout<<"\nNilai tidak ditemukan!";
	}
	cout<<"\nNilai terbesar : "<<b<<"\n";
	system("PAUSE");
	return 0;
}
