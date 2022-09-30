#include <iostream>
using namespace std;
int main(){
	
	cout << "Program untuk menghitung variansi data\n";
	
	int n;
	float jumlah, sigma, mean, variansi;

	
	cout << "Input jumlah data n		: ";
	cin >> n; 
	for(int i = 1; i<=n; i++){
		jumlah=jumlah+i;
	}
		
	//menghitung mean
	mean= jumlah/n;

	for(int x=1; x<=n;x++){
		sigma += (x-mean)*(x-mean);
		variansi = sigma/(n-1);
	
	}
		cout << "Variansi Data			: ";
		cout << variansi;

	return 0;
}
	
