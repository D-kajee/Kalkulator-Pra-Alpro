#include <iostream>
using namespace std;

main(){
	int a, b, c, m;
	cout<<"PROGRAM KALKULATOR"<<endl;
	while(true){
		cout<<"\nMenu: \n1. Penambahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian \n0. Keluar"<<endl;
		cout<<"Pilih Menu No: ";cin>>m;
		if(m==1){
	    	cout<<"Bilangan Pertama: ";cin>>a;
	    	cout<<"Bilangan Kedua: ";cin>>b;
	    	cout<<"Hasil "<<a<<" + "<<b<<" = "<<a+b<<endl;
		}
		else if(m==2){
			cout<<"Bilangan Pertama: ";cin>>a;
	    	cout<<"Bilangan Kedua: ";cin>>b;
	    	cout<<"Hasil "<<a<<" - "<<b<<" = "<<a-b<<endl;	
		}
		else if(m==3){
		    cout<<"Bilangan Pertama: ";cin>>a;
	    	cout<<"Bilangan Kedua: ";cin>>b;
	    	cout<<"Hasil "<<a<<" * "<<b<<" = "<<a*b<<endl;
		}
		else if(m==4){
		    cout<<"Bilangan Pertama: ";cin>>a;
	    	cout<<"Bilangan Kedua: ";cin>>b;
	    	cout<<"Hasil "<<a<<" / "<<b<<" = "<<a/b<<endl;
		}
		else if(m==0)
		    break;
	}
	cout<<"Anda Telah Keluar Dari Kalkulator";
	return 0;
}
