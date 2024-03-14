#include <iostream>
using namespace std;

int arr[20];			// Membuat array dengan panjang data 20
int n;					// Membuat Variable inputan n

void input() {	// Procedure untuk input
	while (true) { //Looping
		cout << "Masukan banyaknya elemen pada array: ";	// Output ke layar
		cin >> n;		// Input dari pengguna 
		if (n <= 20)	// Jika n kurang dari atau sama dengan 20
			break;		// Keluar dari loop
		else {			// Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 element.\n";	// Output ke layar
		}
		cout << endl;
	}