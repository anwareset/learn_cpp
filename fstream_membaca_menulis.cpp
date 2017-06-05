#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream ops;
	char ngisi[999];
	ops.open("fileteks.txt");
	cout<<"Tulis sesuatu : ";cin.getline(ngisi,sizeof(ngisi));
	ops<<ngisi;
	ops.close();
	system("cls");
	ifstream opsn;
	opsn.open("fileteks.txt");
	char isi[999];
	opsn.getline(isi, sizeof(isi));
	cout<<"Isi teks -> "<<isi<<"\n";
	opsn.close();
	system("notepad.exe fileteks.txt");
	system("PAUSE");
}
