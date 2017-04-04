#include <iostream>
using namespace std;
main()
{
int nilai[5][3]={{7,8,9},{3,4,7},{7,4,9},{5,9,4},{6,8,5}};
int m,n=0;
cout<<"Daftar Nilai\n";
cout<<"----------\n";
cout<<"|No|M|F|S|\n";
cout<<"----------\n";
for(n=0;n<5;n++)
{
cout<<"|"<<(n+1)<<" |";
for(m=0;m<3;m++)
cout<<nilai[n][m]<<"|";
cout<<"\n";
}
cout<<"----------";
return 0;
}
