#include <iostream>
using namespace std;
int main(){
int p, l, t, i, j, pilih;
cout<<"====== Gambar Bangun Datar ======"<<endl;
cout<<"1. Kotak Bolong"<<endl;
cout<<"2. Segitiga "<<endl;
cout<<"Pilih :";
cin>>pilih;

switch(pilih){
case 1:
	cout<<"Panjang : ";
	cin>>p;
	cout<<"Lebar : ";
	cin>>l;
		for (i=0; i<p; i++){
			for (j=0; j<l; j++){
				if (i==0 || i==p-1 || j==0 || j==l-1) {
				cout<<"*";
			}
				else {
				cout<<" ";	
				}
				}cout<<endl;
			}
		break;
	case 2:
	cout<<"Tinggi :";
	cin>>t;
	for ( i=1; i<=t; i++){
		int m=1;
		int n=i;
		for( j=1; j<=i; j++){
		cout<<n;
		cout<<" ";
		n=n+(t-m);
		m++;
		}
		cout<<endl;
		
	}
	break;
	}

return 0;
}


