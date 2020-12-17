#include <iostream>
#include <conio.h>
using namespace std;

	double phi=3.14, r, t;
	void input(){
		cout<<"Jari-jari : ";
	 	cin>>r;
	}
	void input2(){
		cout<<"Jari-jari : ";
	 	cin>>r;
	 	cout<<"Tinggi : ";
	 	cin>>t;
	}
	double luas(){
		double l;
		cout<<"Luas Lingkaran adalah "<<phi*r*r<<endl;
		return l;
		}
	double keliling(){
		double k;
		cout<<"Keliling Lingkaran adalah "<<phi*(2*r)<<endl;
		return k;
	}
	double volume(){
		double v;
		cout<<"Volume Tabung adalah "<<phi*r*r*t<<endl;
		return v;
	}
	main (){
	int pilih;
	double phi=3.14, r, t;
	char ulang;
	double luas(), keliling(), volume();
	do{
	 cout<<"Hitung Lingkaran ==========\n";
	 cout<<"1. Luas Lingkaran\n";
	 cout<<"2. Keliling Lingkaran\n";
	 cout<<"3. Volume Tabung\n";
	 cout<<"Pilih : ";
	 cin>>pilih;
	switch(pilih){
		case 1:
			input();
	 		luas();
	 		break;
		case 2:
			input();
			keliling();
			break;
		case 3:
			input2();
	 		volume();
	 		break;
		}
	
		cout<<"Ulangi Program? (y/n) ";
	 	cin>>ulang;	
	 	cout<<endl;
	 	} while (ulang == 'y');
	
	 return 0;
}

