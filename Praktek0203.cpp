#include <iostream>
using namespace std;

int main(){
	double ton=35273.92;
	
	double berat;
	cin >> berat;
	
	double ounce = 1/ton;
	double beratTon = berat*ton;
	
	cout << beratTon<<endl;
	
	double jumlah=1/beratTon;
	cout << jumlah;
}
