#include <iostream>
using namespace std;
/*int main()
{
	short var1 = 0x7fff;
	std::cout << "var1 = " << var1 << std::endl;
	var1++;
	std::cout << "var1 = " << var1 << std::endl;
} //Qué resultado arroja y por qué?*/

int main(){
	short var1 = 0xffff;
	cout << (int(var1)) << endl;
	short var2 = 0b1111'1110;
	cout << (int(var1)) <<endl;
	std::cout <<"var1 + var2: " << var1+var2 << std::endl;

} //Qué resultado y por qué? 

/*//Utilizzando sumas convierta las letras 'G', 'E', 'H' en minusculas.
int main(){
	char letra1 = 'E';
	char letra2 = 'G';
	char letra3 = 'H';
	char minus, desplazamiento;
	desplazamiento = ' ';
	minus = letra1 + desplazamiento;
	std::cout << minus << std::endl;
	minus = letra2 + desplazamiento;
	std::cout << minus << std::endl;
	minus = letra3 + desplazamiento;
	std::cout << minus << std::endl;
}*/
/*
int main(){
	int var3 = 0x8000'0001;
	cout << (uint(var3)) << endl;
	cout << (long(var3)) <<endl;
	unsigned short var4;
	var4 = var3;
	std::cout << "var4: " << var4 << std::endl;
}//Qué resultado y por qué? */
/*
int main (){
	char ch1,ch2,ch;
	ch1 = '7';
	ch2 = '5';
	ch = ch1 + ch2;
	std::cout << "ch: " << ch << std::endl;
}//Qué resultado y por qué?*/
