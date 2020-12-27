#include <iostream>
using namespace std;
	
	int main(){
	int i, n, maksimum= -100000, minimum = 100000, selisihmax = 0, selisih;
	double jumlah = 0;
	
	cout<<"Masukkan banyak angka : ";
	cin>>n;
	int array[n];
	
	for (int i=0; i<n; i++) {
		cout<<"Angka ke-"<<i+1<<" : ";
		cin>>array[i];
	}
	cout<<endl;
	cout<<endl;
	cout<<"_______Hasil_______"<<endl;
	
	cout<<"Deret 		: ";
		for(i=0; i<n; i++){
		cout<<array[i]<<" ";
		}
			cout<<endl;
	
 	 	maksimum = array[0];
  		for(i = 0; i < n; i++){
   		if (array[i] > maksimum)
      		maksimum = array[i];
      	}
		cout<<"Maksimum	: "<<maksimum<<endl;

		minimum = array[0];
  		for(i = 0; i < n; i++){
   		if (array[i] < minimum)
      		minimum = array[i];
      	}	
		cout<<"Minimum 	: "<<minimum<<endl;
		
		for(i=0; i<n; i++){
		jumlah+=array[i];
		}
		cout<<"Rata-rata	: "<<jumlah/n<<endl;
		
    	
    for(i=0; i<n; i++){	
		selisih=array[i]-array[i+1];
		if(i==n-1)
			selisih=array[i-1]-array[i];
		if(selisih<0)
			selisih*=-1;
		if(selisih>=selisihmax)
			selisihmax=selisih;
		}
		cout<<"Selisih Max 	: "<<selisihmax;
    return 0;
	}

