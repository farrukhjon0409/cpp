#include <iostream>
using namespace std;

double factorial(int x){
	if (x == 0)  return 1;
	if (x != 0) return x*factorial(x-1); };

int main() {
	int n,s;
	cout <<"son kiriting "; 
	cin >> n;
	s = factorial(n);
	cout << s << endl;
  return 0;
}