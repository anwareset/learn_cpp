#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
struct core {
	int w,h;
	float bmi;
};
int main(){
	core x;
	cout<<"Masukkan Berat Badan [KG] : ";cin>>x.w;
	cout<<"\nMasukkan Tinggi Badan [M] : ";cin>>x.h;
	system("cls");
	x.bmi=x.w/(pow(x.h,2));
	cout<<"Skor BMI\t: "<<x.bmi;
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
	system("PAUSE");
	return 0;
}
