#include <iostream>
using namespace std;
void salom(int x){
   cout << x*x*x;
}
int main() {
    int son1; 
    cout << "1-son kiriting  "; 
    cin >> son1;
    salom(son1);
    return 0;
}
