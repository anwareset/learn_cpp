#include <iostream>
using namespace std;
int main(){
	int nilai[6];
	int i,r,j=0;
	cout<<"Masukkan nilai ujian mahasiswa!\n";
	for (i=0;i<6;i++)
	{
		cout<<"Mahasiswa "<<(i+1)<<" : ";
		cin>>nilai[i];
	}
	cout<<"\nNilai mahasiswa yang telah Anda masukkan adalah : ";
	for (i=0; i<6; i++)
	{
		cout<<"\nMahasiswa " << (i+1)<<" : "<<nilai[i];
		j=j+nilai[1];
	}
	r=j/6;
	cout<<"\n\nRata - rata = "<<r;
	cout<<"\n\nTerimakasih";
}
