#include <iostream>
using namespace std;
#define ROWS 3 
#define COLS 2 
int main() { 

int tahun=2010;
int cell=10;
int penjualan[ROWS][COLS];
for (int i=0; i < ROWS; i++) { 
cout << "\nPenjualan Tahun " << i+tahun; 
cout << "\n--------------------\n"; 
for (int j=0; j < COLS; j++) { 
cout << "Data ke-" << j+1; 
cout << " = "; cin >> penjualan[i][j]; 
} 
} 
cout << "Data penjualan pertahun\n"; 
cout << "-----------------------\n"; 
for (int i=0; i < ROWS; i++) { 
cout << "\nTahun " << tahun+i; 
cout << "\n----------------\n"; 
for (int j=0; j < COLS; j++) { 
cout << j+1 << ") "; 
cout << penjualan[i][j] << endl; 
} 
}  
}
