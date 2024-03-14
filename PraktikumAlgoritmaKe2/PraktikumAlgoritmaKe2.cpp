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

void insertionsort() {			// procedure insertionsort

	int temp;				// membuat variabel data temporer atau penyimpanan sementara
	int i, j;				// membuat variable j sebagai penanda 

	for (i = 1; i <= n - 1; i++) {		//1.Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];					//2.simpan nilai arr[i] ke variabel sementara temp

		j = i - 1;						//3.seting nilai j sama dengan

		while (j >= 0 && arr[j] > temp)	//4.looping while dimana nilai j lebih besar sama dengan 0 dan
			//arr [j] lebih besar dari pada temp
		{
			arr[j + 1] = arr[j];		//4a.simpan arr [j] ke dalam variable arr[j+1]
			j--;						//Decrement nilai j by 1
		}

		arr[j + 1] = temp;				// 5. simapan nilai temp ke dalam arr[j+1]

		cout << "\nPass " << i << "; ";	// output ke layar
		for (int k = 0; k < n; k++) {	//looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << ' ';		// outout ke layar
		}
	}
}
void display() {		// Prosedur untuk menampilkan hasil 
	cout << endl;		// Output baris kosong
	cout << "==============================" << endl;		// Output ke layar 
	cout << "Element Array yang telah disusun" << endl;		// Output ke layar
	cout << "==============================" << endl;		// Output ke layar

	for (int j = 0; j < n; j++) {				// Looping dengan j dimulai dari o hingga n-1

		cout << arr[j] << endl;					// Output ke layar
	}
	cout << endl;
}

int main()
{
	input();			// Memangil input 
	insertionsort();	// Memangil insertionsort
	display();			// Memangil Display
}