#include <iostream>

int main()
{
    std::cout << "El tamaño de un Char   es: " << sizeof(char) << " byte/s.\n";
    std::cout << "El tamaño de un Int    es: " << sizeof(int) << " byte/s.\n";
    std::cout << "El tamaño de un Short  es: " << sizeof(short) << " byte/s.\n";
    std::cout << "El tamaño de un Long   es: " << sizeof(long) << " byte/s.\n";
    std::cout << "El tamaño de un Float  es: " << sizeof(float) << " byte/s.\n";
    std::cout << "El tamaño de un Double es: " << sizeof(double) << " byte/s.\n";

    // Overflow con un char
    std::cout << "\nCHAR" << std::endl;
    char ch;
    ch = 'a';
    std::cout << (int(ch)) << " = " << ch << std::endl;

    ch = 70;
    std::cout << (int(ch)) << " = " << ch << std::endl;

    ch = 255;
    std::cout << (int(ch)) << " = " << ch << std::endl;

    ch += 1;
    std::cout << (int(ch)) << " = " << ch << std::endl;

    // Overflow con un short
    std::cout << "\nSHORT" << std::endl;
    unsigned short sh;
    sh = 30000;
    std::cout << sh << std::endl;

    sh = 70;
    std::cout << sh << std::endl;

    sh = 255;
    std::cout << sh << std::endl;

    sh = 256;
    std::cout << sh << std::endl;

    sh = 65535;
    std::cout << sh << std::endl;

    sh += 1;
    std::cout << sh << std::endl;

    // Overflow con INT
    std::cout << "\nINT" << std::endl;
    unsigned int in;
    in = 0xFFFFFFFF;
    std::cout << in << std::endl;

    in = 70;
    std::cout << in << std::endl;

    in = 255;
    std::cout << in << std::endl;

    in = 256;
    std::cout << in << std::endl;

    in = 65535;
    std::cout << in << std::endl;

    in += 1;
    std::cout << in << std::endl;

    unsigned int binario = 0b1111'1111'1111'1111'1111'1111'1111'1111;
    std::cout << binario << std::endl;
}
