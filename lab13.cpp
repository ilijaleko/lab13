#include <iostream>
#include "Par.hpp"
#include "Vektor.hpp"

template<typename T>
T potencija(T a, int b) {
    T broj=1;
    for (int i = 0; i < b; i++) {
        broj = broj * a;
    }
    return broj;
}

template<typename T>
void umnozak(T &sum, T x, int n) {
    for (int i = 1; i <= n; i++) {
        sum = sum + (i * x);
    }
    std::cout << "Sum = " << sum << std::endl;
}

int main()
{
    //potencija
    std::cout << potencija(4, 3) << std::endl;
    
    //umnozak
    int sum = 0;
    umnozak(sum, 3, 5);

    //Par
    Par<int, std::string> par1 (2, "daa");
    Par<int, int> par2(4, 4);
    std::cout << "Par1: " << par1.getPrvi() << ", " << par1.getDrugi() << std::endl;
    std::cout << "Par1: " << par2.getPrvi() << ", " << par2.getDrugi() << std::endl;
    par1.setPrvi(100);
    par1.setDrugi("neee");
    par2.setPrvi(4444);
    par2.setDrugi(4444);
    std::cout << "Par1: " << par1.getPrvi() << ", " << par1.getDrugi() << std::endl;
    std::cout << "Par1: " << par2.getPrvi() << ", " << par2.getDrugi() << std::endl;

    //Polje/vektor
    Vektor<int> v1;
    v1.ubaciNaKraj(10);
    v1.ubaciNaKraj(9);
    v1.ubaciNaKraj(8);
    v1.ubaciNaKraj(7);
    std::cout << v1.pocetak() << std::endl;
    v1.pocetak() = 5;
    std::cout << v1.pocetak() << std::endl;
    std::cout << v1.kraj() << std::endl;
    std::cout << v1.velicinaPolja() << std::endl;
    std::cout << v1[2] << std::endl;
    std::cout << v1.na(2) << std::endl;
}
