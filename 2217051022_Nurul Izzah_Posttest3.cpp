#include <iostream>
using namespace std;
int main(){
	
cout << "Cek Tahun Kabisat\n";

int tahun;
cout << "Masukkan tahun : ";
cin >> tahun;


if(tahun%400==0){
	cout << "Tahun Kabisat\n";
}else if(tahun%100==0){
	cout << "Bukan tahun kabisat\n";
}else if(tahun%4){
	cout << "Tahun Kabisat\n";
}else{
	cout <<"Bukan tahun kabisat\n";
}

}

