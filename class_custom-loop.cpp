#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
struct core {
	int w,h;
	float bmi;
};
int main(){
	core x;int l;
	for(l=1;l<5;l++){
		if(l<3&&l>1){
			system("PAUSE");
			cout<<"\n\n";
		}
		cout<<"Masukkan Berat Badan [KG] : ";cin>>x.w;
		cout<<"\nMasukkan Tinggi Badan [M] : ";cin>>x.h;
		x.bmi=x.w/(pow(x.h,2));
		cout<<"\nSkor BMI : "<<x.bmi;
		if(x.bmi<18.5){
			cout<<"\nBerat badan kurang.\n";
		}
		if((x.bmi>=18.5)&&(x.bmi<=24.9)){
			cout<<"\nBerat badan normal.\n";
		}
		if((x.bmi>=25)&&(x.bmi<=30)){
			cout<<"\nBerat badan berlebihan.\n";
		}
		if(x.bmi>30){
			cout<<"\nObesitas!\n";
		}
		cout<<"\n\n-----------------------------\n\n";
	}
	cout<<"\nBerhasil lanjut ke level selanjutnya!\n\n";
	system("PAUSE");
}
