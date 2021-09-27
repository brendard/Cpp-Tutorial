/*PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA Var_declare Y FORMA PARTE DE
LA SOLUCIÓN LLAMADA Project_study_cpp*/

/* PARA EVITAR AMBIGUEDADES EN LOS COMANDOS LLAMADOS, SE HA DECIDIDO CREAR
UN CÓDIGO FUENTE PARA CADA PROYECTO DE LA SOLUCIÓN, PARA QUE LA MISMA SEA 
MÁS FÁCIL DE COMPRENDER Y PERMITE ASIMISMO SEGUIR CORRECTAMENTE 
LA SECUENCIA PROGRAMÁTICA DEL CURSO ONLINE EN EL CUAL SE HA BASADO*/

/*ASIMISMO, NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABARÁ COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

/*NO SE RECOMIENDA CORRER ESTE CÓDIGO SIN INCLUIR LOS NAMESPACES YA QUE SE CORRE EL RIESGO 
DE ENCONTRAR FRECUENTES PROBLEMAS DE COMPILACIÓN. A TALES EFECTOS, SE JA DEJADO UNA VERSIÓN 
ALTERNATIVA DEL CÓDIGO EN EL ARCHIVO DE TEXTO "Código alternativo.txt, QUE COMILA TANTO EN 
SHELLS ONLINE COMO EN JUPYTER NOTEBOOK*/

#include <iostream>   //Librería estándar para operaciones de entrada y salida
#include <string>     //Librería estándar para operar con cadenas de caracteres de un solo byte
using namespace std;  /*Usar espacio de nombre para evitar problemas de compilación de variables en lista (línea 32)*/ 

int main() {
	
	/*A partir de acá se declaran las variables que se van a utilizar*/
	
	int myluckNum = 7;              // El comando int permite declarar variables enteras individualmente
	int myAge = 35;
	char myLetter = 'D';            // El comando char permite declarar un sólo caracter, número o letra
	float floatNum = 8.35;          // El comando float permite declarar fracciones de hasta 4 bytes
	double doubleNum = 5.99897659;  // El comando double permite declarar fracciones de hasta 8 bytes
	string myText = "Hello";        // El comando string permite declarar más de un sólo caracter, número o letra
	bool myBoolean = true;          // Declaración de variable booleana. La salida es 1 si es verdadero, 0 si es falso
	
	/*Colocando la palabra clave const delante de cualquier variable numérica, su valor se vuelve constante*/
	
	const int _minutesPerHour = 60; // El comando const int permite declarar constantes enteras
	const float floatPi = 3.14;    // El comando const float permite declarar fracciones constantes (4 bytes)
	const double doublePi = 3.14159265359;       // El comando const float permite declarar fracciones constantes (8 bytes)

	/*Declarar varias variables enteras a la vez también se puede hacer con otro tipo de variables, y las mismas
	deben ir siempre separadas por comas*/ 

	int x = 5, y = 6, z = 50;       
	char letA = 'A', letB = 'B', letC = 'C';
	string strName = "Brenda", FirstLastName = "Rojas", SecondLastName = "Delgado";

	// El comando int también permite declarar operaciones matemáticas con variables enteras constituyendo una única variable final

	int sum = x + y;               
	
	/*Una vez se han declarado todas las variables, se procede a mostrar la salida de cada variable declarada individualmente*/
	
	cout << "int: " << myluckNum << "\n";
	cout << "float: " << floatNum << "\n";
	cout << "float: " << doubleNum << "\n";
	cout << "char: " << myLetter << "\n";
	cout << "str: " << myText << "\n";
	cout << "bool: " << myBoolean << "\n"; 
	cout << "x plus y is: " << sum << "\n\n";

	/*Se deja deliberadamente un espacio en blanco para separar variables individuales de aquellas combinadas entre sí*/

	/*A partir de acá se muestra la salida de variables declaradas colectivamente*/

	/*Ahora usaremos una sola secuencia de comandos para ilustrar la diferencia de mostrar el número Pi como float o double*/

	cout << "When Pi number is float type, its value is " << floatPi << ", whereas when it is declared as double, its value is "
		<< doublePi << ".\nThe variable hour has not that problem, due to it is normally accepted that an hour contains always "
		<< _minutesPerHour<< " minutes." << "\n";

	cout << "I am " << myAge << " years old." << "\n";       /*En este comando se unen variabes enteras con strings sin tener
															 que convertir previamente el entero en string, ya que no se están
															 concatenando (ver Código "Operators" para notar la diferencia)*/
	
	/*Finalmente, se van a declarar las variables colectivas arriba declaradas*/

	cout << "The sum of x, y and z is " << x + y + z <<"."<< "\n";     /*Como la operación es directa en la salida, no hace falta declarar
																   la suma entera, porque de igual modo, el resultado se va a mostrar*/
	
	cout << "The first three leters of the alphabet are " << letA << ", " << letB << ", and " << letC <<"." << "\n";
	cout << "This source code was written by " << strName << " " << FirstLastName << " " << SecondLastName << "." << "\n";

	system("pause");          //Frena la ejecución del programa
	return 0;                 //Finaliza el programa
}


