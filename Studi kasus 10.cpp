#include <iostream>
using namespace std;

class stuka{
private:
	int *nim, jm;
    int nimMhs[10];
    string *nama;
    string namaMhs[10];
public:
  	void input();
  	void proses();
  	void output();
};

void stuka::input(){
	cout<<"Masukan Jumlah Mahasiswa Yang Masuk Final Lomba Parmatika : ";
	cin>>jm;
	if(jm>=5){
		cout<<"============================================================\n";
		cout<< "Masukkan Data Mahasiswa\n";
	    for (int i=0; i<jm; i++){
	      cout << "Masukkan NIM Finalis : ";
	      cin >> nimMhs[i];
	      cout << "Masukkan Nama Finalis : ";
	      cin >> namaMhs[i];
	    }
	}
	else{
		cout<<"\nJumlah Mahasiswa Minimal 5 !!!\n";
		exit(0);
	}
}

void stuka::proses(){
	cout << "\n===========================";
	cout << "\nMenyimpan data\n";
	cout << "===========================\n";
    nim = new int[10];
    nama = new string[10];
    for(int i=0; i<jm; i++){
      *nim = nimMhs[i];
      nim += 1;
      *nama = namaMhs[i];
      nama += 1;
    }
}
  
void stuka::output(){
    nim -= jm;
    nama -= jm;
    cout<<"Menampilkan data mahasiswa"<<endl;
    for (int i=0; i<jm; i++) {
      cout << "\nNama ke-" << i+1 << " : ";
      cout << *nama ;
      nama += 1;
      cout << "\nNim : " ;
      cout << *nim ;
      nim += 1;
    }
}

int main(){
  stuka studi;
  studi.input();
  studi.proses();
  studi.output();
}

