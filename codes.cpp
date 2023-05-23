//#include <iostream>
//#include <iomanip>
//#include <string>
//#include <cmath>
//using namespace std;
//
//int main() {
//	 
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
// 
//int main () {
//  string firstName,lastName;
//  cin >> firstName;
//  cin >> lastName;
//  string fullName = firstName +' '+ lastName;
//  cout << fullName;
//  return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
// 
//int main () {
//  int x = 10;
//  int y = 20;
//  int z = x + y;
//  cout << z;
//	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    cout << "The length of the txt string is: " << txt.size();
//  return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//  int x = 5;
//  int y = 3;
//  cout << (x < y); // natija 0 chiqadi
//  return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//  bool bir = true;
//  bool nol = false;
//  cout << bir << "\n";
//  cout << nol;
//  return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	int x = 81;
//	cout << x / 3 << "\t";
//	x &= 3;
//	cout << x;
//	int a = 6;     // 0110b  (0x06)
//	int b = 10;    // 1010b  (0x0A)
//	int c = a & b; // 0010b  (0x02)
//	cout << "a = " << a << endl << "b = " << b << endl << "c = " << c;
//  return 0;
//}

//int a = 5;     // 0101b  (0x05)
//int b = 12;    // 1100b  (0x0C)
//int c = a | b; // 1101b  (0x0D)
//cout << "a = " << a << ", b = " << b << ", c = " << c;

//#include <iostream>
//#include <string>
//#include <cmath>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//	cout << "uchburchakning yarim perapetri va yuzasini topish dasturi\n";
//	int a,b,c,p;
//	cout << "a= "; cin >> a;
//	cout << "b= "; cin >> b;
//	cout << "c= "; cin >> c;
//	cout << "p= " << (a+b+c)/2 << endl;
//	p = (a+b+c)/2;
//	cout << "p= " << p << endl;
//	cout << "s= " << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
//
//	int a,b,c,r;
//	cout << "c= "; cin >> c;
//	cout << "b= " << sqrt(c*c-a*a) << endl;
//	b = sqrt(c*c-a*a);
//	cout << "b= " << b << endl;
//	cout << "r= " << (a+b+c)/(a*b) << endl;
//	r = (a+b+c)/(a*b);
//	cout << "r= " << r << endl;	cout << "a= "; cin >> a;
//
//	
//
//	float a,b; // double yozish mumkin edi.
//	cin >> a;
//	cin >> b;
//	cout << a/b << endl;  
//	cout <<  setprecision(1) << fixed << a/b;
//	
//	int a,b,c;
//	cout << "a= "; cin >> a;
//	cout << "b= "; cin >> b;
//	c=a; 
//	a=b;
//	b=c;
//	cout << "a= " << a << endl; 
//	cout << "b= " << b << endl;
//	return 0;
//}

//#include <iostream>
//#include <cmath> 
//#include <string> 
//#include <iomanip>  
//              
//using  namespace std;
//
//int main() {
////	int yil;
////	cin >> yil;
////	if (yil % 4 == 0){
////		if (yil % 100 == 0){
////			if (yil % 400 == 0){
////				cout <<"kabisa";
////			}
////			else{
////				cout <<"kabisamas";
////			}
////		}
////		else{
////			cout << "kabisa";
////		}
////	}
////	else {
////		cout << "kabisamas";
////	}
//
////	int year;
////	cin >> year;
////	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
////		cout <<"kabisa";
////	}
////	else {
////		cout << "kabisamas";
////	}
//	
//// 	int year;
//// 	cin >> year; 
////	string result = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? "kabisa" : "kabisamas";
////	cout << result; 
//
////int day;
////cin >> day;
////switch (day) {
////  case 6:
////    cout << "Today is Saturday";
////    break;
////  case 7:
////    cout << "Today is Sunday";
////    break;
////  default:
////    cout << "Looking forward to the Weekend";
////}
//	
//
//
//	return 0;
//}
//


//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int a, b, c, n = 0;
//
//    cout << "Uchta son kiriting: ";
//    cin >> a >> b >> c;
//
//    if(a % 2 == 0) {
//        n++;
//    }
//    if(b % 2 == 0) {
//        n++;
//    }
//    if(c % 2 == 0) {
//        n++;
//    }
//
//    cout << "Butun sonlar soni: " << n << endl;
//
//    return 0;
//}
//int main() {
//	cout << "uchburchakning yarim perapetri va yuzasini topish dasturi\n";
//	int a,b,c,p;
//	cout << "a= "; cin >> a;
//	cout << "b= "; cin >> b;
//	cout << "c= "; cin >> c;
////	cout << "p= " << (a+b+c)/2 << endl;
//	p = (a+b+c)/2;
//	cout << "p= " << p << endl;
//	cout << "s= " << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;

//	int a,b,c,r;
//	cout << "a= "; cin >> a;
//	cout << "c= "; cin >> c;
//	cout << "b= " << sqrt(c*c-a*a) << endl;
//	b = sqrt(c*c-a*a);
//	cout << "b= " << b << endl;
//	cout << "r= " << (a+b+c)/(a*b) << endl;
//	r = (a+b+c)/(a*b);
//	cout << "r= " << r << endl;
//	

//	float a,b; // double yozish mumkin edi.
//	cin >> a;
//	cin >> b;
//	cout << a/b << endl;  
//	cout <<  setprecision(1) << fixed << a/b;
//	
//	int a,b,c;
//	cout << "a= "; cin >> a;
//	cout << "b= "; cin >> b;
//	c=a; 
//	a=b;
//	b=c;
//	
//	cout << "a= " << a << endl; 
//	cout << "b= " << b << endl;
//	return 0;
//}
//int main() {
//	char belgi;
//	cin >> belgi ;
//	if (belgi == '.'){
//		cout << "nuqta kiritdingiz";
//	}
//	else {
//		cout << "boshqa belgi kiritdingiz";
//	}
//	cout << "Uchta son kiriting";
//	int a,b,c, x = 0;
//	cin >> a; cin >> b; cin >> c;
//	if (a % 2 == 0){
//		x++;
//	}
//	if (b % 2 == 0){
//		x++;
//	}
//	if (c % 2 == 0){
//		x++;
//	}
//	cout << x;
//	char javob=' ';
//	cout<<"jarayon davom etsinmi?('y'','Y'):";
//	cin>>javob;
//	switch(javob)
//	{
//		case 'y':
//			cout<<"jarayon davom etadi!\n";
//			break;
//		case 'Y':
//			cout<<"jarayon davom etadi!\n";
//			break; 
//		default:
//			cout<<"jarayon tugadi!\n";
//	}
//   return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main(){
//	//terner operatori
//	int x; string s;
//	cout << "Bitta son kiriting\n";
//	cin >>x;
//	s= (x%2==1) ? "Bu son toq": "Bu son juft";
//	cout << s << '\n';
//
//	//goto operatori
//	int n, x=1, s=0; 
//	cin >> n; //n=5
//	utish: s += x; x++;
//	if (x <= n) {
//		goto utish;
//	}
//	cout << "s=" << s << '\n';
//
//	//ko'rsatkichlar (pointers)
//	int son;
//	son = 123;
//	int* raqam = &son;
//	cout << son << "\n";
//	cout << &son << "\n";
//	cout << raqam  << "\n";
//
//	string meva = "banan";
//	string* fruit = &meva;
//	cout << meva << endl;
//	cout << fruit << endl;
//	cout << &meva; 
//	
//    return 0;
//}


//	int a=1;
//	while(true){
//  		cout << a << endl;
//  	 	a++; 
//	}
//	cout << "oxirgi a ning qiymati " << a;
//	int a=1;
//	for(int i=1; i <= 10; i++){
//  		cout << a << endl;
//		  a++; 
//	}
//	cout << "oxirgi a ning qiymati " << a;

//1
//	int n, x=1;
//	cin >> n;
//	while(x*x <= n){
//		cout << x*x << ' ';
//		x++;
//	}
//2
//int n, x=1;
//	cin >> n;
//	while (x*x <= n){
//		cout << x*x << ' ';
//		x++;
//	}
//3
//int f0 = 0, f1 = 1, f2 = 0, n;
//	cin >> n;
//		while(n-- != 0){
//			f2 = f1 + f0;
//			f0 = f1;
//			f1 = f2;
//		}
//		cout << f0;
//
//
//kerak
//	string s, psw="C++";
//  	cout << "Checking password program\n\n";
//  	do{  
//    	cout << "Input password: ";
//    	cin >> s;
//    	if(s!=psw) cout << "Access denied.\n";
//  	}while(s!=psw);
//  	cout << "Access granted!\n\n";
//2
//	cout.precision(6);
//	cout << fixed;
//	int x, cnt = 0, s = 0;
//	do{
//		cin >> x;
//		cnt ++;
//		s += x;
//	}while(x != 0);
//	cout << 1. * s / (cnt-1);


