#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//Estados
#define ESTADO_STOP 10
#define ESTADO_RUN 20
#define ESTADO_LAP 30
//Botones
#define BOTON_START 's'
#define BOTON_STOP 'S'
#define BOTON_LAP 'l'
#define BOTON_RESET 'r'
//Prototipos
void comienza_a_contar(void);
void deten_cuenta(void);
void automata(char key);

int main()
{
    char key;
    while (1)
    {
        std::cout << "Ingresa s / S / r / l : ";
        std::cin >> key;

        if (feof(stdin) != 0) // feof: file end of file
        {
            break;
        }

        automata(key);
    }

    std::cout << "Hemos terminado\n";

    return 0;
}

void automata(char key)
{
    static short estado_automata = ESTADO_STOP;
    short var1;
    short count = 0;
    std::cout << "Estado actual: " << estado_automata << "\n";
    switch (estado_automata)
    {
    case ESTADO_STOP:
        if (key == BOTON_START)
        {
            estado_automata = ESTADO_RUN;
            std::cout << "salto a ESTADO_RUN \n";
            std::cout << "comando: comienza a contar\n";
            comienza_a_contar();
        }
        else if (key == BOTON_RESET) // estimulo RESET
        {
            count = 0;
            std::cout << "comando: count = 0\n";
        }
        else
        {
            std::cout << "Estas en el else de STOP\n";
        }
        break;

    case ESTADO_RUN:
        if (key == BOTON_STOP)
        {
            std::cout << "comando: congelar el display\n";
            estado_automata = ESTADO_STOP;
            std::cout << "salto a ESTADO_STOP\n";
            std::cout << "comando: deten cuenta\n";
            deten_cuenta();
        }
        else if (key == BOTON_LAP)
        {
            estado_automata = ESTADO_LAP;
            std::cout << "salto a ESTADO_LAP\n";
            std::cout << "comando: congelar el display\n";
        }
        else if (key == BOTON_RESET)
        {
            estado_automata = ESTADO_STOP;
            std::cout << "salto a estado STOP por RESET\n";
        }
        else
        {
            std::cout << "Estas en el else de RUN\n";
        }

        break;

    case ESTADO_LAP:
        if (key == BOTON_LAP)
        {
            estado_automata = ESTADO_RUN;
            std::cout << "salto a ESTADO_RUN\n";
            std::cout << "comando: descongelar display\n";
        }
        else if (key == BOTON_RESET)
        {
            estado_automata = ESTADO_STOP;
            std::cout << "salto a estado STOP por RESET\n";
        }
        else
        {
            // no hacer nada
        }

        break;

    default:
        std::cout << "Estado desconocido\n";
        exit(1);
    }
}
void comienza_a_contar(void)
{
    // aun no se como resolver esto
}

void deten_cuenta(void)
{
    // aun no se como resolver esto
}
