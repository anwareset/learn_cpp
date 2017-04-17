#include <iostream>
using namespace std;
int main(){
	int nilai[3][4];
	int p,i;
	nilai[0][0]=70;
	nilai[0][1]=76;
	nilai[0][2]=80;
	nilai[0][3]=90;
	nilai[1][0]=65;
	nilai[1][1]=85;
	nilai[1][2]=76;
	nilai[1][3]=85;
	nilai[2][0]=76;
	nilai[2][1]=90;
	nilai[2][2]=65;
	nilai[2][3]=80;
	while(1){
		cout<<"(0 = Tito, 1 = Susi, 2 = Nona)\n";
		cout<<"Nama Siswa (masukkan kode angka) : ";cin>>p;
		if ((p==0)||(p==1)||(p==2))
		break;
	}
	cout<<"\nNama Siswa : ";
	if(p==0){
		cout<<"Tito\n";
	}
	if(p==1){
	cout<<"Susi\n";
	}
	if(p==2){
	cout<<"Nona\n";
	}
	for (i=0;i<4;i++){
		cout<<"Minggu "<<i+1<<" || Nilai : "<<nilai[p][i]<<"\n";
	}	
}
