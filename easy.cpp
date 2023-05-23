#include <iostream>
#include <cmath>
using namespace std;
const double pi=(3.1415);
double yuza(double r){
	
	double sn2=pi*r*r;
	 return sn2;
}
int main(){
	double r ;
	cin >>r;
	double yuz=yuza(r);
	cout << yuz;
	return 0;
}