#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
int simpul,garis=0;
char A[20];
 
cout<<"banyak PC yang terhubung = ";
cin>>simpul;
cout<<endl;
 
for (int i=0; i<simpul; i++){
cout<<"Nomor PC ke "<<i+1;
cout<<" = ";
cin>>A[i];
}
 
cout<<"\nJumlah Koneksi = ";
for (int i=0; i<simpul; i++){
for (int j=i+1; j<simpul; j++){
cout<<" ";
cout<<A[i]<<"-"<<A[j];
}
}
getch();
return 0;
}