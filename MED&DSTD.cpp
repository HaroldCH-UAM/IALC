#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int toma(float x[]);
float media(float x[], int n);
float dstand(float med, float xi[], int n);
void presenta(float x[], int n);
void presenta(float med, float dstd);
void linea();

int main()
{
    float xi[200];
    int n = toma(xi);

    float med = media(xi, n);
    float dstd = dstand(med, xi, n);
    presenta(xi, n);
    presenta(med, dstd);
}

int toma(float x[])
{
    int i = 0;

    while (1)
    {
        cin >> x[i];
        if (feof(stdin) != 0)
        {
            break;
        }
        i++;
    }
    return i;
}

float media(float x[], int n)
{
    float total = 0;
    for (int i = 0; i < n; i++)
    {
        total += x[i];
    }
    return total / n;
}

float dstand(float med, float xi[], int n)
{
    float aux = 0;
    for (int i = 0; i < n; i++)
    {
        aux += pow(xi[i] - med, 2);
    }

    return sqrt(aux /= n);
}

void presenta(float x[], int n)
{
    int i = 0;
    linea();
    cout << "DATOS A PRESENTAR : " << n << endl;
    linea();
    while (i < n)
    {
        cout << x[i] << ",";
        i++;
    }
    cout << "\n";
    linea();
}
void presenta(float med, float dstd)
{
    cout << "LA MEDIA ES : " << med << endl;
    linea();
    cout << "LA DESVIACION ESTANDAR ES : " << dstd << endl;
    linea();
}

void linea()
{
    cout << "--------------------------------------\n";
}
