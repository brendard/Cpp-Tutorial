/* PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https ://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA Loops Y FORMA PARTE DE
LA SOLUCI�N LLAMADA Project_study_cpp. En este c�digo se
buscar escoger un d�a de la semana tecleando un n�mero del
1 al 5. Despu�s de all�, con cualquier n�mero que se escriba,
el programa asume que es fin de semana*/

/* PARA EVITAR AMBIGUEDADES EN LOS COMANDOS LLAMADOS, SE HA DECIDIDO CREAR
UN C�DIGO FUENTE PARA CADA PROYECTO DE LA SOLUCI�N, PARA QUE LA MISMA SEA
M�S F�CIL DE COMPRENDER Y PERMITE ASIMISMO SEGUIR CORRECTAMENTE
LA SECUENCIA PROGRAM�TICA DEL CURSO ONLINE EN EL CUAL SE HA BASADO*/

/*ASIMISMO, NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABAR� COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

#include <iostream>
#include <string>
#include <cmath>        //Librer�a para ejecutar funciones matem�ticas por defecto
using namespace std;

int main() {

	/*Para operaciones matem�ticas que incluyen c�lculo de ra�ces en�simas, es mejor declarar las variables
	como float o double y no como enteras. As� se gana en precisi�n*/

	/*Todas las variables, las cuales pueden ser tipo inputs u operaciones matem�ticas simples, deben ser
	declaradas antes de entrar al blucle if-elseif-else*/

	/*Nota: Este c�digo no pretende tener demasiado sentido a nivel matem�tico, sino mas bien para ilustrar 
	c�mo funcionan los condicionales. La eficacia mat�m�tica se corregir� m�s adelante*/

	float x;           
	cout << "Type a number: ";
	cin >> x;
	float y;
	cout << "Type another number: ";
	cin >> y;
	float product;

	/*Ac� se comienza a ejecutar el condicional*/

	if (x > y) {
		//Si x es mayor a y, se calcula la base x elevada al exponente y
		cout << "x is greater than y. So, elevate x to the y and show the results\n";
		cout<< x<< " elevated to "<<y<< " is " << pow(x, y) << endl;
	}
	else if (x < y) {
		//Si x es menor a y, se calcula la ra�z y de x
		cout << "x is lower than y. So, elevate x to the 1/y (y-th root of x) and show the results\n"; 
		cout << "the "<<x<<"-th root of "<<y<<" is "<< pow(y,1.0/x) << endl;
	}
	else 
	{
		//Si x es igual a y, se calcula x por y o x al cuadrado
		cout << "x is equal to y. So, multiply both variables and show the results\n";
		product = x * y;
		cout << "The product of "<<x<<" and "<< y<<" is "<<product << endl;
	}
		system("pause");
		return 0;
}