#include <iostream>
#include <string>
using namespace std;
class Nota{
	private:
		string kBarang;
		int jBarang,hPerBarang,totalHarga;
	public:
		void setKodeBarang(string kb){
			kBarang=kb;
		}
		void setJumlahBarang(int jb){
			jBarang=jb;
		}
		void setHargaPerBarang(int hpb){
			hPerBarang=hpb;
		}
		int getTotalHarga(){
			return (jBarang*hPerBarang);
		}
		void displayTotalHarga(){
			cout<<"\nTotal Harga\t\t: "<<getTotalHarga()<<"\n\n";
		}
};
int main(){
	string kb;int x,y;
	Nota iniNota;
	cout<<"Kode barang\t\t: ";getline(cin, kb);iniNota.setKodeBarang(kb);
	cout<<"\nJumlah barang\t\t: ";cin>>x;iniNota.setJumlahBarang(x);
	cout<<"\nHarga Per Barang\t: ";cin>>y;iniNota.setHargaPerBarang(y);
	iniNota.displayTotalHarga();
	system("pause");
}
