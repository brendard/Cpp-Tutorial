/*PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB 
https://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA Hola_mundo Y FORMA PARTE DE 
LA SOLUCI�N LLAMADA Project_study_cpp*/

// RECUERDA:
// Coloca dos barras para a�adir un comentario simple
/*Coloca una barra y un asterisco de cada lado del 
comentario para a�adir comentarios tipo p�rrafo*/


#include <iostream>         //Librer�a est�ndar para operaciones de entrada y salida
#include <string>           //Librer�a est�ndar para operar con cadenas de caracteres de un solo byte
using namespace std;        //Est�ndar para crear un bloque que contenga todas las funciones a utilizar


int main()                  //Variable global o Inicio de programa
{
	cout << "\t\t\t\t\t\t-------------" << endl; /*\t te permite a�adir espacios dentro de una l�nea
												 mientras que endl indica la a�adidura de una l�nea 
												 para que no se solapen los comandos de salida (cout<<)*/ 
	cout << "\t\t\t\t\t\tHOLA MUNDO!!"<< endl;
	cout << "\t\t\t\t\t\t-------------";
	cout << endl<< endl;

/* Otra forma de declarar Hola Mundo sin tener usar la l�nea de comando "using namespace std". 
Para ello, se coloca delante de cada comando de salida los caracteres std::, aunque hay que a�adirlo
por cada salida y nueva l�nea que se quiera a�adir con el comando endl*/

	/*Recuerda que para hacer esto tienes dos opciones: dejar el c�digo fuente tal cual est�, 
	o simplemente comentar la librer�a namespace junto con sus comandos relacionados (los de arriba)*/

		std::cout << "\t\t\t\t\t\t-------------" << std::endl;
		std::cout << "\t\t\t\t\t\tHOLA MUNDO!!\n\n\n\n\n"; // \n permite agregar varias l�neas en blanco
		std::cout << "\t\t\t\t\t\t-------------";
		std::cout << std::endl << std::endl;
		
	
	system("pause");          //Frena la ejecuci�n del programa
	return 0;                 //Finaliza el programa
}



