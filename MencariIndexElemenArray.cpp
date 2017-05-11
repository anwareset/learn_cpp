#include <iostream>
using namespace std;
int main()
{
    int banyakData, cariData, posisi=0;
    bool ketemu = false;
    cout << "Banyak data : ";
    cin >> banyakData;
    int data[banyakData];
    for(int ulang=0; ulang<banyakData; ulang++)
    {
        cout <<"Berikan Data ke["<<ulang<<"] : ";
        cin >> data[ulang];
    }
    cout <<"Data yang akan di cari posisinya: ";
    cin >> cariData;
    for(int ulang=0; ulang<banyakData; ulang++)
    {
        if(cariData == data[ulang])
        {
            posisi = ulang;
            ketemu = true;
            break;
        }
    }
	if(ketemu)
    {
        cout<<"Data "<<cariData<<" ditemukan di posisi : "<<posisi<<endl;
        cout<<"Terimakasih"<<endl;
    }
    else
    {
        cout<<"Data yang anda berikan"<<endl;
        cout<<"Tidak tertera pada data Array"<<endl;
    }
    system("pause");
    return 0;
}
