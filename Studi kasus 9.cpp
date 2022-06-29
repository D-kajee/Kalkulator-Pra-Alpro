#include <iostream>
using namespace std;

class Stuka{
public:
	void input();
	void proses();
	void output();
private:
	int buku[24]; int bil[6][4];
	int x,y,temp;
};

void Stuka::input(){
	cout<<"====================================================="<<endl;
    cout<<"Masukan Nomor Yang Tertera Pada Setiap Buku :"<<endl;
    cout<<"====================================================="<<endl;
    for(int i=0; i<24; i++){
    	cout<<"Masukkan Nomor buku ke-"<<i+1<<" = ";
    	cin>>buku[i];
    }
    cout<<endl;
}

void Stuka::proses(){
	for(x=0; x<23; x++){
      for(y=x+1; y<24; y++){
        if(buku[x]>buku[y]){
          temp = buku[x];
          buku[x] = buku[y];
          buku[y] = temp;
        }
      }
    }
    int i = 0;
    while(i<20){
      for(x=0; x<6; x++){
        for(y=0; y<4; y++){
          bil[x][y] = buku[i];
          i++;
        }
      }
    }
}

void Stuka::output(){
	system("cls");
	cout<<"================================================================="<<endl;
	cout<<"Nomor Buku Setelah Diurutkan : "<<endl<<endl;
    for(int i=0; i<24; i++){
    	cout<<" "<<buku[i]<<" ";
    }
    cout<<"\n================================================================="<<endl;
    cout<<endl;
    cout<<"================================================================="<<endl;
    cout<<"Tampilan Nomor Buku Pada Rak : "<<endl<<endl;
    for(int i=0; i<6; i++){
    	for(int j=0; j<4; j++){
        	cout<<"\t"<<bil[i][j]<<" ";
		}
    	cout<<endl;
    }
    cout<<"================================================================="<<endl;
}

int main(){
	Stuka x;
	x.input();
	x.proses();
	x.output();
	return 0;
}
