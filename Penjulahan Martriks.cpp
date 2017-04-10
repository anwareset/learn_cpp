#include <iostream>
#include <windows.h>
using namespace std;
int gotoxy(int x,int y){
	static HANDLE h = NULL;
	if(!h)
		h = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD c = { x,y };
		SetConsoleCursorPosition(h,c);
} 
int main(){
	int mtrx[20][30], mtrx2[2][3],jumlah[2][3];
	int x, y;
	cout<<"mtrx pertama =";
	cout<<endl;
	for (x=1;x<=2;x++)
    {
   	for(y=1;y<=3;y++){
    	cout<<"masukkan angka baris"<<x<<" kolom "<<y<<" : ";
    	cin>>mtrx[x][y];
    	}
	}
	cout<<"\nmtrx kedua =\n";
	for (x=1;x<=2;x++){
		for(y=1;y<=3;y++){
			cout<<"masukkan angka baris"<<x<<" kolom "<<y<<" : ";
			cin>>mtrx2[x][y];
    	}
	}
	for (x=1;x<=2;x++){
	for(y=1;y<=3;y++){
			jumlah[x][y]=mtrx[x][y] + mtrx2[x][y];
		}
	}
	cout<<endl;
	gotoxy(1,20);
	cout<<"C = ";
	for(x=1;x<=2;x++){
		for(y=1;y<=3;y++){
			gotoxy(3+4*y,17+2*x);
			cout<<mtrx[x][y];
		}
	}
	gotoxy(17,20);
	cout<<" + ";
	for(x=1;x<=2;x++){
		for(y=1;y<=3;y++){
			gotoxy(18+4*y,17+2*x);
			cout<<mtrx2[x][y];
		}
	}
	gotoxy(32,20);
	cout<<" = ";
	for(x=1;x<=2;x++){
		for(y=1;y<=3;y++){
			gotoxy(33+4*y,17+2*x);
			cout<<jumlah[x][y];
		}
	}
}
