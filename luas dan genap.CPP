#include <iostream>
#include <math.h>
using namespace std;
void lingkaran();void genap(int bil);void garis();
void garis(){for(int i=1;i<=50;i++){cout<<"=";}}
void genap(int bil){for (bil=2;bil<=10;bil+=2){cout<<bil<<" ";}}
void lingkaran()
{int a;float L;const float p=3.1415926;
cout<<"masukkan jari jari = ";cin>>a;L=p*a*a;cout<<"Luas lingkaran = "<<L<<endl;}
int main()
{int bil;lingkaran();garis();
cout<<"\nbilangan genap = "<<" ";genap(bil);
}


