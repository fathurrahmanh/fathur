#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int LR=42;
	cout<<"Luas Rumah			: "<<LR<<" m2 "<<endl;
	double LP=1.87596;
	cout<<"Luas 1 box parket	: "<<LP<<" m2 "<<endl;
	double JP=LR/LP;
	cout<<"Jumlah box parket	: "<<JP<<endl;
	double BPR=JP*500;
	cout<<"biaya parket (Rp)	: "<<BPR<<endl;
	int BPS=LR*20;
	cout<<"biaya pasang (Rp)	: "<<BPS<<endl;
	double TB=BPR+BPS;
}
