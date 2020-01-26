#pragma once

template<class T1, class T2>

class Par {
public:
	Par(T1 prvi, T2 drugi) {
		this->prvi = prvi;
		this->drugi = drugi;
	}
	void setPrvi(T1 prvi) {
		this->prvi = prvi;
	}
	void setDrugi(T2 drugi) {
		this->drugi = drugi;
	}
	T1 getPrvi() {
		return prvi;
	}
	T2 getDrugi() {
		return drugi;
	}
private:
	T1 prvi;
	T2 drugi;
};