#include <iostream>
using namespace std;
int main(){
	int array[3][3]={10,100,78,11,5,43,56,8,120};
	int terkecil=120,terbesar=0; //variabel penampung
	cout<<"Nilai terbesar & terkecil dari array :\n\n";
	for(int x=0;x<3;x++){
		for(int y=0;y<3;y++){
			cout<<array[x][y]<<"\t";
			if(array[x][y]<terkecil){
				terkecil=array[x][y];
			}
			if(array[x][y]>terbesar){
				terbesar=array[x][y];
			}
		}
	cout<<"\n";
	}
	cout<<"\n\nAdalah = "<<terbesar<<" dan "<<terkecil<<"\n";
}
