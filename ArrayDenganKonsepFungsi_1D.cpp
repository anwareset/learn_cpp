#include <iostream>
using namespace std;
void tampil(int nilai[5]);
int main(){
    int nilai[5] = {88, 76, 90, 61, 69};
    tampil(nilai);
}
void tampil(int m[5]){
    cout<<"Menampilkan nilai : \n";
    for (int x=0;x<5;++x){
        cout<<"Mahawiswa "<<x+1<<" : "<<m[x]<<endl;
    }
}
