#include <iostream>
//Nama: Andita Ayu Safitri
//NIM: 123200118
using namespace std;
int main() {

	int hari, tagihan,umurayah, umuribu, umuranak1,umuranak2, biayaayah, biayaibu, biayaanak1, biayaanak2;
	hari=30;
	cout<<"Umur Ayah :";
	cin>>umurayah;
	
	cout<<"Umur Ibu : ";
	cin>>umuribu;	
	
	cout<<"Umur Anak 1 : ";
	cin>>umuranak1;
	
	cout<<"Umur Anak 2 : ";
	cin>>umuranak2;
	
	if (umurayah <= 12)
	{ biayaayah=15000;
	}
	else if (12<umurayah<20)
	{ biayaayah=20000;
	}
	if (umurayah >= 20)
	{ biayaayah=30000;
	}
	
	if (umuribu <= 12)
	{ biayaibu=15000;
	}
	else if (12<umuribu<20)
	{ biayaibu=20000;
	}
	if (umuribu >= 20)
	{ biayaibu=30000;
	}
	
	if (umuranak1 <= 12)
	{ biayaanak1=15000;
	}
	else if (12<umuranak1<20)
	{ biayaanak1=20000;
	}
	if (umuranak1 >= 20)
	{ biayaanak1=30000;
	}
	
	if (umuranak2 <= 12)
	{ biayaanak2=15000;
	}
	else if (12<umuranak2<20)
	{ biayaanak2=20000;
	}
	if (umuranak2 >= 20)
	{ biayaanak2=30000;
	}
	cout<<endl;
	
	cout<<"Tagihan satu bulan adalah Rp "<<hari*(biayaayah + biayaibu + biayaanak1 + biayaanak2);
	return(0);

}
