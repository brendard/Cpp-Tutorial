/*PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB 
https://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA Hola_mundo Y FORMA PARTE DE 
LA SOLUCIÓN LLAMADA Project_study_cpp*/

// RECUERDA:
// Coloca dos barras para añadir un comentario simple
/*Coloca una barra y un asterisco de cada lado del 
comentario para añadir comentarios tipo párrafo*/


#include <iostream>         //Librería estándar para operaciones de entrada y salida
#include <string>           //Librería estándar para operar con cadenas de caracteres de un solo byte
using namespace std;        //Estándar para crear un bloque que contenga todas las funciones a utilizar


int main()                  //Variable global o Inicio de programa
{
	cout << "\t\t\t\t\t\t-------------" << endl; /*\t te permite añadir espacios dentro de una línea
												 mientras que endl indica la añadidura de una línea 
												 para que no se solapen los comandos de salida (cout<<)*/ 
	cout << "\t\t\t\t\t\tHOLA MUNDO!!"<< endl;
	cout << "\t\t\t\t\t\t-------------";
	cout << endl<< endl;

/* Otra forma de declarar Hola Mundo sin tener usar la línea de comando "using namespace std". 
Para ello, se coloca delante de cada comando de salida los caracteres std::, aunque hay que añadirlo
por cada salida y nueva línea que se quiera añadir con el comando endl*/

	/*Recuerda que para hacer esto tienes dos opciones: dejar el código fuente tal cual está, 
	o simplemente comentar la librería namespace junto con sus comandos relacionados (los de arriba)*/

		std::cout << "\t\t\t\t\t\t-------------" << std::endl;
		std::cout << "\t\t\t\t\t\tHOLA MUNDO!!\n\n\n\n\n"; // \n permite agregar varias líneas en blanco
		std::cout << "\t\t\t\t\t\t-------------";
		std::cout << std::endl << std::endl;
		
	
	system("pause");          //Frena la ejecución del programa
	return 0;                 //Finaliza el programa
}



