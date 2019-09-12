/*Saleh Almatar
C++ Fall 2019
Date: 08 ,27,2019
Lab#: Lab1
Lab dessricptio: My week schedule 
*/
#include <iostream>
using namespace std;
//varible daclaration
const string MO = "Monday	";
const string TU = "Tuesday	";
const string WE = "Wednesday";
const string TH = "Thursday";
const string FR = "Friday	";
const string CAT = " 8:00 College Algebra & Trigonometry 127";
const string C2 = " 9:10 Composition 2 106";
const string CB = " 12:50 C++ 162";
const string CP = " 1:40 Classical Physics 212";
const string MS = "\n";


int main() {
	// function call
	cout << MO << CAT << endl;
	cout << MO << C2 << endl;
	cout << MO << CB << endl;
	cout << MO << CP << endl;
	cout << MS <<  endl;
	cout << TU << CAT << endl;
	cout << TU << CB << endl;
	cout << TU << CP << endl;
	cout << MS << endl;
	cout << WE << CAT << endl;
	cout << WE << C2 << endl;
	cout << WE << CB << endl;
	cout << WE << CP << endl;
	cout << MS << endl;
	cout << TH << CAT << endl;
	cout << TH << CB << endl;
	cout << TH << CP << endl;
	cout << MS << endl;
	cout << FR << CAT << endl;
	cout << FR << C2 << endl;
	cout << FR << CB << endl;
	cout << FR << CP << endl;
	return 0;
}
