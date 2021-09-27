/* PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https ://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA Loops Y FORMA PARTE DE
LA SOLUCIÓN LLAMADA Project_study_cpp. En este código se
buscar escoger un día de la semana tecleando un número del
1 al 5. Después de allí, con cualquier número que se escriba,
el programa asume que es fin de semana*/

/* PARA EVITAR AMBIGUEDADES EN LOS COMANDOS LLAMADOS, SE HA DECIDIDO CREAR
UN CÓDIGO FUENTE PARA CADA PROYECTO DE LA SOLUCIÓN, PARA QUE LA MISMA SEA
MÁS FÁCIL DE COMPRENDER Y PERMITE ASIMISMO SEGUIR CORRECTAMENTE
LA SECUENCIA PROGRAMÁTICA DEL CURSO ONLINE EN EL CUAL SE HA BASADO*/

/*ASIMISMO, NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABARÁ COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

#include <iostream>
#include <string>
#include <cmath>        //Librería para ejecutar funciones matemáticas por defecto
using namespace std;

int main() {

	/*Para operaciones matemáticas que incluyen cálculo de raíces enésimas, es mejor declarar las variables
	como float o double y no como enteras. Así se gana en precisión*/

	/*Todas las variables, las cuales pueden ser tipo inputs u operaciones matemáticas simples, deben ser
	declaradas antes de entrar al blucle if-elseif-else*/

	/*Nota: Este código no pretende tener demasiado sentido a nivel matemático, sino mas bien para ilustrar 
	cómo funcionan los condicionales. La eficacia matémática se corregirá más adelante*/

	float x;           
	cout << "Type a number: ";
	cin >> x;
	float y;
	cout << "Type another number: ";
	cin >> y;
	float product;

	/*Acá se comienza a ejecutar el condicional*/

	if (x > y) {
		//Si x es mayor a y, se calcula la base x elevada al exponente y
		cout << "x is greater than y. So, elevate x to the y and show the results\n";
		cout<< x<< " elevated to "<<y<< " is " << pow(x, y) << endl;
	}
	else if (x < y) {
		//Si x es menor a y, se calcula la raíz y de x
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