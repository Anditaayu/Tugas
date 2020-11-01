#include <iostream>		//Nama: Andita Ayu Safitri
#include <conio.h>		//NIM: 123200118
#include <iomanip>
using namespace std;

int main (){
	string username, pass, keterangan;
   double a,b,c,rataan;
   int pilih;
   cout << "LOGIN AKUN ================ \n";  
   
       cout << "Username : "; cin >> username;
       cout << "Password : "; cin >> pass;
  
    if (username =="anditaayu" && pass=="ayu2020"){
        cout <<"=============================\n";
        cout <<"LOGIN BERHASIL";
        cout <<endl;
        cout <<"Input Nilai Mata Kuliah\n";
        cout <<"1 Algoritma dan Pemrograman\n";
        cout <<"2 Kalkulus\n";
        cout<<endl;
        cout <<"Pilih :";
		cin>>pilih;
		cout <<"Nilai Harian 	:";
		cin>>a;
        cout <<"Nilai UTS	 :";
        cin>>b;
        cout <<"Nilai UAS	 :";
        cin>>c;
        cout<<endl;
    }
        rataan=(a+b+c)/3;
		if (rataan >=80)
        	keterangan="Lulus";

		 else if (rataan <80)
		 	keterangan="Tidak Lulus";	
		switch(pilih){
        case 1:
    
			cout<<"Anda "<<keterangan<<" Algoritma dan Pemrograman dengan nilai ";
			cout<<setprecision(3)<<rataan<<endl;
            break;
        case 2:

			cout<<"Anda "<<keterangan<<" Kalkulus dengan nilai ";
			cout<<setprecision(3)<<rataan<<endl;
		}
  
	if (username !="anditaayu" && pass!="ayu2020")
	cout<<"Username dan Password anda salah!";
	
		else if (username != "anditaayu")
		cout<<"Username anda salah!";
		else if (pass!= "ayu2020")
		cout<<"Password anda salah!";

return 0;
}
	

 
		 

