#include <iostream>
using namespace std;
void tampil(int n[3][2]);
int main(){
    int angka[3][2] = {
		{3, 4},
		{9, 5},
		{7, 1}
    };
    tampil(angka);
}
void tampil(int n[3][2]){
    cout<<"Menampilkan nilai : \n";
    for(int x=0;x<3;++x){
        for(int y=0;y<2;++y){
            cout<<n[x][y]<<" ";
        }
    }
}
