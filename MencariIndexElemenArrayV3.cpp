#include <iostream>
using namespace std;
int main(){
	int a[5] = {2, 3, 2, 10, 12},cari,x,y;
	cout<<"Array : { 2, 3, 2, 10, 12 }\n";
	cout<<"Cari index dari angka : ";cin>>cari;
	for(x=0;x<5;x++){
		if(a[x]==cari){
			y=a[x];
    		cout<<"\nAngka "<<cari<<" ditemukan pada index ke-"<<x;
		}
	}
   	if(y!=cari){
   			cout<<"\nAngka "<<cari<<" tidak ditemukan!";
	}
}
