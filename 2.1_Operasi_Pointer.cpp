#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void aritmatika();
void logika();
void penugasan();
int main(){
	int x;
	cout<<"Operasi Pointer\n--------------\n\n[1] Aritmatika Pointer\n[2] Logika Pointer\n[3] Penugasan Pointer\n\nPilih [ 1 / 2 / 3 ] = ";
	cin>>x;
	system("clear");
	if(x==1){
		aritmatika();
	}
	if(x==2){
		logika();
	}
	if(x==3){
		penugasan();
	}
	else{
		main();
	}
}
void aritmatika(){
	int n[5]={11,22,33,44,55},*px;
	px=&n[0];
	cout<<"n[4] = { 11, 22, 33, 44, 55 }";
	cout<<"\n*px dari 'px=&n[0]'\t: "<<*px;
	px=px+3;
	cout<<"\n*px dari 'px=px+3'\t: "<<*px;
	px=px-2;
	cout<<"\n*px dari 'px=px-2'\t: "<<*px;
	px=(px+((10/5)-1));
	cout<<"\n*px dari 'px=px*(10/5)'\t: "<<*px;
	cout<<"\n\n\n";
	main();
}
void logika(){
	int n1,n2,*a,*b;
	cout<<"Masukkan n1 : ";cin>>n1;
	cout<<"\nMasukkan n2 : ";cin>>n2;
	a=&n1;
	b=&n2;
	system("clear");
	cout<<"n1 = "<<n1;
	cout<<"\nn2 = "<<n2;
	cout<<"\na = "<<a;
	cout<<"\nb = "<<b;
	if(a<b){
		cout<<"\na menunjuk ke memori yang lebih rendah dari b";
	}
	if(a>b){
		cout<<"\na menunjuk ke memori yang lebih tinggi dari b";
	}
	if(a==b){
		cout<<"\na menunjuk ke momori yang sama dengan b";
	}
	cout<<"\n\n\n";
	main();
}
void penugasan(){
	int x,*y,*z;
	cout<<"Masukkan x : ";cin>>x;
	y=&x;
	z=y;
	cout<<"\nNilai x : "<<x<<". Dan beralamat di y\t: "<<y;
	cout<<"\nNilai x : "<<x<<". Juga beralamat di z\t: "<<z;
	cout<<"\n\n\n";
	main();
}
