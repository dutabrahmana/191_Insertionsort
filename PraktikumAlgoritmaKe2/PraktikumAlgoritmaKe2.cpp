#include <iostream>
using namespace std;

int arr[20];			// Membuat array dengan panjang data 20
int n;					// Membuat Variable inputan n

void input() {	// Procedure untuk input
	while (true) { //Looping
		cout << "Masukan banyaknya elemen pada array: ";	// Output ke layar
		cin >> n;		// Input dari pengguna 
		if (n <= 20)	// membuat kondisi n tidak lebih dari 20
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 element.\n";	// Menampilkan pesan jika data lebih dari 20
		}
		cout << endl;								// Membuat jarak per baris program
		cout << "===================" << endl;		// Membuat tampilan susunan data element array
		cout << "Masukan Element Array" << endl;
		cout << "===================" << endl;

		for (int i = 0; i < n; i++)						// mengunakan perulangan for untuk menyimpan data pada array
		{
			cout << "Data ke-" << (i + 1) << "; ";		// memasukan atau menginputkan nilai data n
			cin >> arr[i];								// Menyimpan nilai data n kedalam array arr
		}
	}