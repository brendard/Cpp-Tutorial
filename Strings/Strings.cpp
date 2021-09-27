/* PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https ://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA Strings Y FORMA PARTE DE
LA SOLUCIÓN LLAMADA Project_study_cpp*/

/* PARA EVITAR AMBIGUEDADES EN LOS COMANDOS LLAMADOS, SE HA DECIDIDO CREAR
UN CÓDIGO FUENTE PARA CADA PROYECTO DE LA SOLUCIÓN, PARA QUE LA MISMA SEA
MÁS FÁCIL DE COMPRENDER Y PERMITE ASIMISMO SEGUIR CORRECTAMENTE
LA SECUENCIA PROGRAMÁTICA DEL CURSO ONLINE EN EL CUAL SE HA BASADO*/

/*ASIMISMO, NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABARÁ COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

/*EN ESTE PROYECTO SE PRESENTAN VARIAS OPCIONES DE CONCATENACIÓN DE STRINGS*/

#include <iostream>         //Librería estándar para operaciones de entrada y salida
#include <string>           //Librería estándar para operar con cadenas de caracteres de un solo byte
#include <stdlib.h>         //Librería para borrar la pantalla y mostrar un código nuevo
using namespace std;        //Estándar para crear un bloque que contenga todas las funciones a utilizar

int main() {                //Variable global o Inicio de programa
	
	// Declaración de strings a utilizar

	string greeting = "Hello";
	string mynameis = ", my name is ";
	string firstName = "Brenda ";
	string lastName = "Rojas";
	string fullName = firstName.append(lastName);               //Con la función append() se pueden concatenar strings sin sumarlas
	
	//Se procede a mostrar las salidas correspondientes a las variables string declaradas
	
	cout << greeting <<  mynameis << fullName << endl;          /*Acá se presenta otra forma de concatenar strings, lo cual se hace
																mediante la agrupación de varias strings en el comando de salida. Se
																pueden añadir tantas strings como sea necesario*/
	cout << "My full name is: "<< fullName << endl;             /*Ejemplo de concatenación de strings declaradas contra no declaradas
																previamente*/
	cout << "The length of the greeting string is: " << greeting.size() << endl; 
	cout << "The length of the fullName string is: " << fullName.length() << endl;
	cout << "The first letter/character of the fullName string is: " << fullName[0] << endl;
	cout << "The last letter/character of the fullName string is: " << fullName[11] << endl;
	
	//En este paso, se procede a cambiar la primera letra de la palabra Hello por J

	greeting[0] = 'J';
	cout << "The first letter of the string greeting was changed and we get intead the word " << greeting << endl;

	/*Se declara la pausa de esta primera parte del código para borrar la pantalla,
	ya que se necesita hacer este paso para el procedimiento que sigue*/
	
	system("PAUSE");
	system("CLS");

	// Una vez borrada la pantalla, se harán declaraciones de variables string en modo input con getline()

	/*Nota: se prefiere getline() antes que cin << , ya que así se pueden introducir varios caracteres en uno.
	Además, cin<< y getline() no son compatibles en el mismo código*/ 

	string YourFirstName;
	string YourLastName;
		
	cout << "Type your first name: ";                         // Salida que se concatena con la entrada de usuario por medio del teclado
	getline(cin, YourFirstName);                              // Obtiene la entrada de usuario por medio del teclado

	cout << "Type your last name: ";
	getline(cin, YourLastName);

	string YourFullName = YourFirstName + " " + YourLastName; //Ejemplo de concatenación de strings mediante su suma
	cout << "Your full name is: " << YourFullName << endl;    //Entrega la salida concatenada de las dos entradas introducidas por teclado

	// Ya es momento de dar por terminado el código fuente

	system("pause");          //Frena la ejecución del programa
	return 0;                 //Finaliza el programa
}