/*PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https://www.w3schools.com/ */

/*ESTE PROYECTO MUESTRA EL PROGRAMA Functions_all Y FORMA PARTE DE LA SOLUCIÓN LLAMADA Project_study_cpp*/

/*NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABARÁ COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

/*EN ESTE PROYECTO SE PRESENTAN LAS FUNCIONES EN GENERAL Y COMO A TRAVÉS DE LA SOBRECARGA DE FUNCIONES
(FUNCTION OVERLOADING), SE PUEDEN ESCRIBIR VARIAS FUNCIONES EN UN MISMO ARCHIVO DE ORIGEN ASOCIADO A UN 
PROYECTO USANDO UNA ÚNICA FUNCIÓN MAIN. HAY QUE RECORDAR QUE NO SE PUEDE USAR LA FUNCIÓN MAIN EN VARIOS
ARCHIVOS DE ORIGEN A LA VEZ, PORQUE EL SISTEMA DARÁ ERROR*/

//Nota importante:

/*Hay dos maneras de presentar una función, siendo la opción b la preferida por ser más fácil de leer
(ambas opciones de escritura de código están en el archivo function_opt.txt)*/

#include <iostream>         //Librería estándar para operaciones de entrada y salida
#include <string>           //Librería estándar para operar con cadenas de caracteres de un solo byte
#include <stdlib.h>         //Librería para borrar la pantalla y mostrar un código nuevo
using namespace std;        //Estándar para crear un bloque que contenga todas las funciones a utilizar
    
	/*Se crea la función con la modalidad b, como se ha indicado antes. Es importante destacar que pueden haber
	varias funciones con el mismo nombre, siempre y cuando sean diferentes el número y tipo de parámetros*/ 

		// En este segmento se declaran todas las funciones a ser llamadas

		void myFunction();                                            // Declaración de función sin parámetros
		void myFunction(string fname);                                // Declaración de función sin parámetros
		void newFunction(string country = "Norway");                  // Declaración de una función con parámetro por defecto
		void multParam(string fname, int age);                        // Declaración de una función con varios tipos de parámetro

		/*La palabra clave void, utilizada en los ejemplos anteriores, indica que la función no debe devolver un valor. 
		Si desea que la función devuelva un valor, puede usar un tipo de datos (como int, string, etc.) en lugar de void, 
		y usar la palabra clave return dentro de la función*/

		int intFunction(int x);                                       // Declaración de una función de enteros sin la clave void
		double sum_xy(double x, double y);                            // Declararación de una función de la suma de números dobles

		/*Esta última función se creará y llamará en modalidad a, lo cual quiere decir que la misma se ha de definir
		dentro de la misma declaración, además de que se usarán referencias a variables como se ha hecho en un proyecto anterior*/

		void swapNums(int& x, int& y) {                              // Creación de una función con variables referenciadas
			int z = x;
			x = y;
			y = z;
		}

		// En este otro segmento se llaman todas las funciones que han sido previamente declaradas

		int main() {        
			// Llamada de la función sin parámetros 
			myFunction();                                             
			system("PAUSE");                                          //Frena la ejecución del programa
			system("CLS");                                            // Borra la pantalla y pasa a la siguiente llamada

			// Llamada de la función con parámetros 
			myFunction("Liam");                            
			myFunction("Jenny");
			myFunction("Anja");
			system("PAUSE");                                          
			system("CLS");                                           

			// Llamada de la función con parámetros por defecto
			newFunction("Sweden");
			newFunction("India");
			newFunction();
			newFunction("USA");
			system("PAUSE");                                          
			system("CLS");             

			// Llamada de una función con varios tipos de parámetro
			multParam("Liam", 3);
			multParam("Jenny", 14);
			multParam("Anja", 30);
			system("PAUSE");
			system("CLS");

			// Llamada de una función de enteros sin la clave void
			cout << intFunction(3) << endl;
			system("PAUSE");
			system("CLS");

			// Llamada de una función de la suma de números dobles con almacenamiento de resultado en una nueva variable
			double z = sum_xy(8.3, 4.8);
			cout << z<< endl;
			system("PAUSE");
			system("CLS");

			// Llamada de una función con variables referenciadas

			int firstNum = 10;
			int secondNum = 20;

			cout << "Before swap: " << "\n";
			cout << firstNum << secondNum << "\n";

			// Call the function, which will change the values of firstNum and secondNum
			swapNums(firstNum, secondNum);

			cout << "After swap: " << "\n";
			cout << firstNum << secondNum << "\n";

			system("PAUSE");
			system("CLS");

			return 0;                                                 //Finaliza el programa
		}

		// En este último segmento se definen todas las funciones que han sido previamente declaradas y llamadas

		void myFunction() {                                           // Definición de la función sin parámetros
			cout << "I just got executed!\n"<< "Let's go to the next function " << endl;
		}
		void myFunction(string fname) {                               // Definición de la función con parámetros
			cout << fname << " Refsnes\n";
			/*Habrán funciones dentro de este archivo que hagan prácticamente lo mismo, pero se ha optado por
			separarlas para un mejor entendimiento del tipo de funciones posibles dentro del entorno C++.*/
		}
		void newFunction(string country) {                           /*Definición de la función con parámetros por defecto
																	 OJO: Los parámetros por defecto se declaran más no se definen,
																	 y por ello, en este tipo de función no se pueden escribir
																	 parámetros por defecto dos veces (error C2572)*/ 
			cout << country << "\n";
		}
		void multParam(string fname, int age) {
			cout << fname << " Refsnes. " << age << " years old. \n";
			/*Tenga en cuenta que cuando trabaja con varios parámetros, la llamada a la función debe tener el mismo número de 
			argumentos que parámetros y los argumentos deben pasarse en el mismo orden.*/
		}
		int intFunction(int x) {                                     // Definición de una función de enteros sin la clave void
			return 5 + x;
		}
		double sum_xy(double x, double y) {                          /*Definción de una función de la suma de números dobles con 
																     almacenamiento de resultado en una nueva variable*/ 
			return x + y;
		}                                         