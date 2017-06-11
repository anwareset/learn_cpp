#include <iostream>
using namespace std;
int main(){
	void *p;
	int x=188;
	float y=4.6;
	char z='Y';
	
	p=&x;
	cout<<"p Akan menunjuk tipe data int. Alamat yang ditunjuk saat (p=&x) : "<<p;
	p=&y;
	cout<<"\np Akan menunjuk tipe data float. Alamat yang ditunjuk saat (p=&y) : "<<p;
	p=&z;
	cout<<"\np Akan menunjuk tipe data int. Alamat yang ditunjuk saat (p=&z) : "<<p;
}
