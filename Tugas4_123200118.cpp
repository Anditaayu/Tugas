 #include <iostream>

using namespace std;

int main(){
	int pilih, a, b, c;
	cout<<"Perkalian & Perpangkatan======"<<endl;
	cout<<"1. Perkalian"<<endl;
	cout<<"2. Perpangkatan"<<endl;
	cout<<"Pilih : ";
	cin>>pilih;
	switch(pilih){
        case 1:
			cout<<"Input angka N : ";
			cin>>a;
			cout<<"Input angka M : ";
			cin>>b;
			cout<<"Hasil "<<a<<"x"<<b<<endl; 
			c=b;
			cout<<b;
			for(int i=1; i<a; i++){
		 	cout<<"+";
			cout<<b;
			c=b+c;
			}
	
		 		cout<<"="<<c;
			break;
		case 2:
			cout<<"Input angka N : ";
			cin>>a;
			cout<<"Input angka M : ";
			cin>>b;
			cout<<"Hasil "<<a<<"x"<<b<<endl;
			c=a;
			cout<<a;
			for(int i=1; i<b; i++){
			cout<<"x";
			cout<<a;
			c=a*c;
			}
				cout<<"="<<c;	
			
	
}
            
    return 0;
}
