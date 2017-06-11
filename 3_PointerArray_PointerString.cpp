#include <iostream>
using namespace std;
void array();
void str();
int main(){
	int x;
	cout<<"Main Menu";
	cout<<"\n[ 1 ] Pointer pada Array\n[ 2 ] Pointer pada str\n\nPilih [ 1 / 2 ] : ";cin>>x;
	if(x==1){
		array();
	}
	if(x==2){
		str();
	}
	else{
		main();
	}
}
void array(){
	int a[3],*px;
	px = &a[0];
	for (int i=0;i<3;i++){
		cout<<"Nilai ke-"<<i+1<<" : ";cin>>a[i];
	}
	cout<<"\n";
	for(int i=0;i<3;i++){
		cout<<"Nilai a["<<i<<"] = "<<*px<<"\n";
		px++;
	}
	cout<<"\n\n\n";
	main();
}
void str(){
	char n[]="Muhammad Tri Anwarruddin",*pn=n;
	cout<<"Nama\t: "<<n;
	cout<<"\npn\t: "<<pn;
	pn+=13;
	cout<<"\n\nSetelah n+=13\n";
	cout<<"\nNama\t: "<<n;
	cout<<"\npn\t: "<<pn;
	cout<<"\n\n\n";
	main();
}
