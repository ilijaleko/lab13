#pragma once

template<typename T>
class Vektor {
public:
	Vektor() {
		velicina = 0;
	}
	T& pocetak() {
		if (velicina > 0) {
			return polje[0];
		}
	}
	T& kraj() {
		if (velicina > 0) {
			return polje[velicina-1];
		}
	}
	T& na(int n) {
		if (velicina >= n) {
			return polje[n];
		}
	}
	T velicinaPolja() {
		return velicina;
	}
	void ubaciNaKraj(T broj) {
		polje[velicina] = broj;
		velicina++;
	}
	int& operator[] (int n) {
		if (n < velicina) {
			return polje[n];
		}
	}
private:
	int velicina;
	T polje[100];
};