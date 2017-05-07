#include <iostream>
#include <fstream>
using namespace std;
main(){
	ofstream fileku; //menulis file
	cout<<"Operasi File\n\n";
	fileku.open("filesaya.txt"); //membuka file bernama filesaya.txt
	//jika file tidak ada, program akan otomatis membuat file bernama filesaya.txt
	fileku<<"Belajar operasi file pada C++"; //menulis didalam file
	fileku.close(); //menutup file
	cout<<"\nData telah ditulis kedalam file.";
}
