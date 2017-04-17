#include <iostream>
using namespace std;
int main(){
	int data[10]{5,6,3,-9,0,2,4,-2,-3,7};
	int indeks, ketemu, x;
	cout<<"Masukkan data yang dicari : ";cin>>x;
	ketemu=0;
	for (indeks=0; indeks<=9;indeks++)
	{
		if (data[indeks]==x)
		{
			ketemu=!ketemu;
			break;
		}
	}
		if(ketemu==0)
			cout<<"\nData tidak ditemukan ";	
		else
			cout<<"Data pada indeks = "<<indeks;
}
