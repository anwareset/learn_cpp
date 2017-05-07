#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main(){
    ifstream myfile; //stream untuk membaca file
    char sv_text;
    myfile.open("TEST.txt"); //membuka file TEST.txt
	cout<<"OPERASI FILE 2"<<endl;
	cout<<"--------------"<<endl;
	cout<<"Isi dari File -> ";
    //ulang selama program belum mencapai akhir konten dari file
    while (!myfile.eof()){
    	myfile.get(sv_text);
        cout<<sv_text;
		}
    myfile.close(); //menutup file
    return EXIT_SUCCESS;
}

