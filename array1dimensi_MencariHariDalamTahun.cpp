#include <iostream>
using namespace std;
int main(){
	int jumh[12]=
	{		
		31,29,31,30,31,30,31,30,31,30,31,30
	};
	int tgl,bln,jmlh=0;
	cout<<"Program Menari Hari di Tahun 2008\n";
	cout<<"Masukkan tgl = ";cin>>tgl;
	cout<<"Masukkan bln = ";cin>>bln;
	for(int i=0;i<(bln-i);i++){
		jmlh=jmlh+jumh[i];
	}
	jmlh=jmlh+tgl;
	cout<<"\n\nJumlah hr = "<<jmlh;
	int sisa;
	sisa = jmlh % 7;
	cout<<"\nTanggal "<<tgl<<"\nBulan "<<bln<<"\nadalah Hari = ";
	if (sisa==0)
		cout<<"Senin";
	else if (sisa==1)
		cout<<"Selasa";
		else if (sisa==2)
			cout<<"Rabu";
			else if(sisa==3)
				cout<<"Kamis";
				else if (sisa == 4)
					cout<<"Jumat";
					else if(sisa==5)
						cout<<"Sabtu";
						else if(sisa==6)
							cout<<"Minggu";
}
