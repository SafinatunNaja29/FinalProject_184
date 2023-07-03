#include <iostream>
using namespace std;

class bidangDatar {
private :
	int x, y;
public :
	bidangDatar() {
		x = 0;
		y = 0;
	}

	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	void setY(int b) {
		this->y = b;
	}
	int getY() {
		return y;
	}
};

class Lingkaran : public bidangDatar {			//inheritance
public:
	void input() {
		int jejari;
		cout << "Lingkaran dibuat" << endl;;
		cout << "Masukkan jejari : ";
		cin >> jejari;
		setX(jejari);
	}
	float Luas(int a) {
		return 3.14 * a * a;
	}
	float Keliling(int a) {
		return 2 * 3.14 * a;
	}
	void cekUkuran(int keliling) {
		while (true) {
			if (keliling > 40) {
				cout << " Ukuran lingkaran adalah besar " << endl;
				break;
			}
			else if (keliling < 20) {
				cout << " Ukuran Lingkaran adalah sedang " << endl;
				break;
			}
			else if (keliling < 10) {
				cout << "Ukuran Lingkaran adalah kecil " << endl;
			}
		}
	}
};

class Persegipanjang : public bidangDatar {		//inheritance
public:
	void input() {
		int lebar;
		int panjang;
		cout << "Persegipanjang dibuat" << endl;
		cout << "Masukkan panjang : ";
		cin >> lebar;
		setX(lebar);

		cout << "Masukkan lebar : ";
		cin >> lebar;
		setY(lebar);
	}
	float Luas(int a) {
		return a * a;
	}
	float Keliling(int a) {
		return 4 * a;
	}
	void cekUkuran(int keliling) {
			if (keliling > 40) {
				cout << " Ukuran Persegi Panjang adalah besar " << endl;
			}
			else if (keliling < 20) {
				cout << " Ukuran Persegi Panjang adalah sedang " << endl;
			}
			else if (keliling < 10) {
				cout << "Ukuran Persegi Panjang adalah kecil " << endl;
			}
		}
	
};


int main() {
	bidangDatar* BD;
	int next;

	do {
	BD = new Lingkaran;
	BD->input();
	cout << "Luas Lingkaran = " << BD->Luas(BD->getX()) << endl;
	cout << "Keliling Lingkaran = " << BD->Keliling(BD->getX()) << endl;
	delete BD;

	cout << endl;

	BD = new Persegipanjang;
	BD->input();
	cout << "Luas Persegi Panjang = " << BD->Luas(BD->getX()) << endl;
	cout << "Keliling Persegi Panjang = " << BD->Keliling(BD->getX()) << endl;
	delete BD;

	
		cout << " apakah anda ingin mengulang program(Y/N) :";
		cin >> next;

	} while (next == 'Y');
	return 0;
};