#include <iostream>
#include <fstream>
using namespace std;
void ulang();
int main(){
	long voc,jum;
	cout<<"||   anjaydev@gmail.com   ||\n\n";
	cout<<"Masukkan voucher : ";cin>>voc;
	cout<<"Extrap sebanyak : ";cin>>jum;
	system("cls");
	ofstream hasil;
	hasil.open("results.txt");
	for(long i=1; i<=jum; i++){
		cout<<"Voucher : "<<voc+(i*100)<<endl;
		hasil<<"Voucher : "<<voc+(i*100)<<"\n";
	}
	hasil.close();
	cout<<"\n######################################\n\nExtrap selesai!\nHasil disimpan dalam file results.txt.\n\n";
	ulang();
}
void ulang(){
	char lagi;
	cout<<"Extrap lagi? [Y/N] : ";cin>>lagi;
	if (lagi=='Y'){
		system("cls");
		main();
	}
	else if (lagi=='N'){
		system("exit");
	}
	else {
		system("cls");
		ulang();
	}
}
