/*PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https://www.w3schools.com/ */

/*ESTE PROYECTO MUESTRA EL PROGRAMA Functions_all Y FORMA PARTE DE LA SOLUCI�N LLAMADA Project_study_cpp*/

/*NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABAR� COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

/*EN ESTE PROYECTO SE PRESENTAN LAS FUNCIONES EN GENERAL Y COMO A TRAV�S DE LA SOBRECARGA DE FUNCIONES
(FUNCTION OVERLOADING), SE PUEDEN ESCRIBIR VARIAS FUNCIONES EN UN MISMO ARCHIVO DE ORIGEN ASOCIADO A UN 
PROYECTO USANDO UNA �NICA FUNCI�N MAIN. HAY QUE RECORDAR QUE NO SE PUEDE USAR LA FUNCI�N MAIN EN VARIOS
ARCHIVOS DE ORIGEN A LA VEZ, PORQUE EL SISTEMA DAR� ERROR*/

//Nota importante:

/*Hay dos maneras de presentar una funci�n, siendo la opci�n b la preferida por ser m�s f�cil de leer
(ambas opciones de escritura de c�digo est�n en el archivo function_opt.txt)*/

#include <iostream>         //Librer�a est�ndar para operaciones de entrada y salida
#include <string>           //Librer�a est�ndar para operar con cadenas de caracteres de un solo byte
#include <stdlib.h>         //Librer�a para borrar la pantalla y mostrar un c�digo nuevo
using namespace std;        //Est�ndar para crear un bloque que contenga todas las funciones a utilizar
    
	/*Se crea la funci�n con la modalidad b, como se ha indicado antes. Es importante destacar que pueden haber
	varias funciones con el mismo nombre, siempre y cuando sean diferentes el n�mero y tipo de par�metros*/ 

		// En este segmento se declaran todas las funciones a ser llamadas

		void myFunction();                                            // Declaraci�n de funci�n sin par�metros
		void myFunction(string fname);                                // Declaraci�n de funci�n sin par�metros
		void newFunction(string country = "Norway");                  // Declaraci�n de una funci�n con par�metro por defecto
		void multParam(string fname, int age);                        // Declaraci�n de una funci�n con varios tipos de par�metro

		/*La palabra clave void, utilizada en los ejemplos anteriores, indica que la funci�n no debe devolver un valor. 
		Si desea que la funci�n devuelva un valor, puede usar un tipo de datos (como int, string, etc.) en lugar de void, 
		y usar la palabra clave return dentro de la funci�n*/

		int intFunction(int x);                                       // Declaraci�n de una funci�n de enteros sin la clave void
		double sum_xy(double x, double y);                            // Declararaci�n de una funci�n de la suma de n�meros dobles

		/*Esta �ltima funci�n se crear� y llamar� en modalidad a, lo cual quiere decir que la misma se ha de definir
		dentro de la misma declaraci�n, adem�s de que se usar�n referencias a variables como se ha hecho en un proyecto anterior*/

		void swapNums(int& x, int& y) {                              // Creaci�n de una funci�n con variables referenciadas
			int z = x;
			x = y;
			y = z;
		}

		// En este otro segmento se llaman todas las funciones que han sido previamente declaradas

		int main() {        
			// Llamada de la funci�n sin par�metros 
			myFunction();                                             
			system("PAUSE");                                          //Frena la ejecuci�n del programa
			system("CLS");                                            // Borra la pantalla y pasa a la siguiente llamada

			// Llamada de la funci�n con par�metros 
			myFunction("Liam");                            
			myFunction("Jenny");
			myFunction("Anja");
			system("PAUSE");                                          
			system("CLS");                                           

			// Llamada de la funci�n con par�metros por defecto
			newFunction("Sweden");
			newFunction("India");
			newFunction();
			newFunction("USA");
			system("PAUSE");                                          
			system("CLS");             

			// Llamada de una funci�n con varios tipos de par�metro
			multParam("Liam", 3);
			multParam("Jenny", 14);
			multParam("Anja", 30);
			system("PAUSE");
			system("CLS");

			// Llamada de una funci�n de enteros sin la clave void
			cout << intFunction(3) << endl;
			system("PAUSE");
			system("CLS");

			// Llamada de una funci�n de la suma de n�meros dobles con almacenamiento de resultado en una nueva variable
			double z = sum_xy(8.3, 4.8);
			cout << z<< endl;
			system("PAUSE");
			system("CLS");

			// Llamada de una funci�n con variables referenciadas

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

		// En este �ltimo segmento se definen todas las funciones que han sido previamente declaradas y llamadas

		void myFunction() {                                           // Definici�n de la funci�n sin par�metros
			cout << "I just got executed!\n"<< "Let's go to the next function " << endl;
		}
		void myFunction(string fname) {                               // Definici�n de la funci�n con par�metros
			cout << fname << " Refsnes\n";
			/*Habr�n funciones dentro de este archivo que hagan pr�cticamente lo mismo, pero se ha optado por
			separarlas para un mejor entendimiento del tipo de funciones posibles dentro del entorno C++.*/
		}
		void newFunction(string country) {                           /*Definici�n de la funci�n con par�metros por defecto
																	 OJO: Los par�metros por defecto se declaran m�s no se definen,
																	 y por ello, en este tipo de funci�n no se pueden escribir
																	 par�metros por defecto dos veces (error C2572)*/ 
			cout << country << "\n";
		}
		void multParam(string fname, int age) {
			cout << fname << " Refsnes. " << age << " years old. \n";
			/*Tenga en cuenta que cuando trabaja con varios par�metros, la llamada a la funci�n debe tener el mismo n�mero de 
			argumentos que par�metros y los argumentos deben pasarse en el mismo orden.*/
		}
		int intFunction(int x) {                                     // Definici�n de una funci�n de enteros sin la clave void
			return 5 + x;
		}
		double sum_xy(double x, double y) {                          /*Definci�n de una funci�n de la suma de n�meros dobles con 
																     almacenamiento de resultado en una nueva variable*/ 
			return x + y;
		}                                         