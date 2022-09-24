#include <iostream>
using namespace std;
int main(){
	int a;
	
	cout << "Input Data: " << endl;
	cout << "Harga pakaian sebelum didiskon:" << endl;
	cin >> a;
	int b = 0.1 * a;
	int c = a - b;
	
	
	
	cout << endl;
	cout << "Harga setelah didiskon: " << c << endl;
	cout << "Total diskon yang didapatkan: " << b << endl;
	
}
