/*#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int num = 0;

    while (num <= 50) {
        if (num % 2 == 0) {
            b += num;
        } else {
            a += num;
        }
        num++;
    }
    cout << "La suma de los números impares es: " << a << endl;
    cout << "La suma de los números pares es: " << b << endl;

    return 0;
    /*
}


#include <iostream>

int main() {

    for (int numero = 0; numero <= 30; numero += 3) {

        if (numero % 2 != 0) {
            std::cout << "Primer número impar después de 30: " << numero << std::endl;
            break;
        }
    }

    return 0;
}