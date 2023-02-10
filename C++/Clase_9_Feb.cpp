#include <iostream>
// using namespace std;
int main()
{
    float base = 0.0, altura = 0.0;
    std::cout << "Ingresa la base: ";
    std::cin >> base;
    std::cout << "Ingresa la altura: ";
    std::cin >> altura;
    std::cout << "El área es: " << ((base * altura) / 2) << "\n";

    /*char caracter = 'A';
    for (int i=0; i<20; i++){
    std::cout << caracter << "\n";
    caracter++;
    }*/
    return 0;
}
