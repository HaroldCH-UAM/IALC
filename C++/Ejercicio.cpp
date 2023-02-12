#include <iostream>
#include <string>

void respuesta(int letras);
int main(){
    std::string nombre;
    std::cout<<"Ingresa tu nombre: ";
    std::cin>>nombre;
    int letras = nombre.length();
    respuesta(letras);

}

void respuesta(int letras){
    if(letras <= 10){
        std::cout<<"Parece que tu nombre tiene "<<letras<<" letras, no parece muy largo.\n";
    }else{
        std::cout<<"Vaya nombre tan largo, es raro ver un nombre de "<<letras<<" letras.\n";
    }
}

