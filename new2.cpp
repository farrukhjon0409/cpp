// #include <iostream>
// using namespace std;
// int sum(int k) {
//   if (k > 0) {
//     return k + sum(k - 1);
//   } else {
//     return 0;
//   }
// }
// int main() {
//   int result;
//   result = sum(10);
//   cout << result;
//   return 0;}

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// int factorial(int x){
// 	if (x == 0)  return 1;
// 	if (x != 0) return x*factorial(x-1);
// }
// int main() {
// 	int n,s;
// 	cout <<"son kiriting   "; 
// 	cin >> n;
// 	s = factorial(n);
// 	cout << s;
//   return 0;
// }
int AddLeftDigit(int K, int R) {
   if (K == 0) { // K ning 0 ga teng bo'lgan holat.
       return R;
   } else {
       int digit = K % 10; // eng oxirgi raqamni olish.
       int newInt = (R * 10) + digit; // yangi sonni tuzish.
       return AddLeftDigit(K / 10, newInt); // olingan raqamni qo'shish.
   }
}

int main() {
   int K, R;
   cout << "son kiriting ";
   cin >> K >> R;
   if (R < 1 || R > 9) {
       cout << "R bu qandaydirligi uchun noto'g'ri!" << endl;
       return 0;
   }
   int result = AddLeftDigit(K, R);
   cout << result << endl;
   return 0;
}