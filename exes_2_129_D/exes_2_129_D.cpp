#include <iostream>
using namespace std;

void BinarySearch(string dam[16], int n, string name) {
	int adam = 0, putra = n - 1;
	int mid  = (adam + putra) / 2;

	while (adam <= putra) {
		if (dam[mid] == name) {
			cout << "Nama" << name << " Di temukan pada indeks ke - " << mid << endl;
			return;

		}
		else if (dam[mid] < name) {
			adam = mid + 1;
		}
		else
		{
			adam = mid - 1;
		}
		mid = (adam + putra) / 2;
	}
	cout << "nama" << name << " Not found" << endl;
	{

	}
}

int main() {
	const int MAX_LENGHT = 16;
	string dam[MAX_LENGHT] = { "" }
		int n = MAX_LENGHT
		string name;

	cout << "masukan nama yang ingin di cari"
	


	
}

