/*PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA REF_PTR Y FORMA PARTE DE
LA SOLUCIÓN LLAMADA Project_study_cpp*/

/*PARA EVITAR AMBIGUEDADES EN LOS COMANDOS LLAMADOS, SE HA DECIDIDO CREAR
UN CÓDIGO FUENTE PARA CADA PROYECTO DE LA SOLUCIÓN, PARA QUE LA MISMA SEA
MÁS FÁCIL DE COMPRENDER Y PERMITE ASIMISMO SEGUIR CORRECTAMENTE
LA SECUENCIA PROGRAMÁTICA DEL CURSO ONLINE EN EL CUAL SE HA BASADO*/

/*ASIMISMO, NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABARÁ COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

/*EN ESTE PROYECTO SE PRESENTAN LAS REFERENCIAS Y LOS APUNTADORES (POINTERS)*/

/*Nota: Las referencias y los punteros son importantes en C ++, porque brindan la 
capacidad de manipular los datos en la memoria de la computadora, lo que permite 
reducir el código y mejorar el rendimiento. Estas dos características son una de
las cosas que hacen que C ++ se destaque de otros lenguajes de programación, 
como Python y Java.*/


#include <iostream>         //Librería estándar para operaciones de entrada y salida
#include <string>           //Librería estándar para operar con cadenas de caracteres de un solo byte
using namespace std;        //Estándar para crear un bloque que contenga todas las funciones a utilizar

int main(){                 //Variable global o Inicio de programa

	// Se declaran las variables con sus respectivas referencias y pointers

	string food = "Pizza";  // Variable declarada
	string &meal = food;    // Referencia a la variable declarada food
	string* ptr1 = &food;    /* El apuntador es una variable que permite asignar la dirección de memoria que ocupa 
							como su valor de salida. Es importante destacar que hay tres maneras de declarar el apuntador:
							
							a) variable* myvar; (preferente) 
							b) variable *myvar;
							c) variable * myvar;
							
							Siendo preferente la opción a*/

	/* Ahora, podemos usar el nombre de variable food o el nombre de referencia meal para referirnos a la variable de comida*/

	cout << "First, values of the variable and pointers of the string  variable 'food=Pizza' are shown" << "\n\n";
	cout << "Print the declared variable: "<< food << "\n";
	cout << "Print the reference of that variable: " << meal << "\n";
	
	/* También se puede emplear e operador & para obtener la dirección de una variable en la memoria en forma hexadecimal*/

	cout << "Print hexadecimal direction of the variable in the memory: " << &food << "\n";

	// Con esta línea de código se puede ver el apuntador de la variable food

	cout << "Print the pointer of that variable food: " << ptr1 << "\n";

	// Es importante resaltar que el apuntador debe ser del mismo tipo que la variable con la cual se está trabajando

	int x = 4;
	int* ptr2 = &x;

	cout<<endl;              //Línea espaciadora puesta adrede

	cout << "Second, values of the variable and pointers of the integer variable 'x=4' are shown" << "\n\n";
	cout << "Print the variable x: " << x << "\n";
	cout << "Print the pointer of the x: " << ptr2 << "\n";

	/*Nota importante: hay que declarar un apuntador por cada variable; de otro modo el código arrojará error, ya que ptr
	NO ES UNA BUILT-IN FUNCTION DE C++*/

	/*También se puede obtener el valor de una variable con apuntador, lo cual se conoce como operador de desreferencia.
	Para ello, se coloca el asterisco delante del apumtador, en lugar de luego de la variable declarada*/ 

	cout << "Print the value of the variable x subjected to a pointer: " << *ptr2 << "\n";

	/*Por último, se puede modificar el valor de un apuntador. Sin embargo, esta acción modifica tanto su valor más no su 
	dirección en la memoria*/

	// Asigne el nuevo valor del apuntador ptr2

	cout << endl;              //Línea espaciadora puesta adrede
	cout << "Finally, values of the variable and pointers of the new integer variable 'x=6' are shown" << "\n\n";
	*ptr2 = 6;   
	// Asigne el nuevo valor del apuntador ptr2
	cout << "Print the new value of the pointer ptr2: " << *ptr2 << "\n";      
	// Imprimir el nuevo valor de la variable x
	cout << "Print the new value of the variable x: " << x << "\n";
	// Imprimir la dirección en la memoria de la variable x una vez modificada
	cout<< "Print the memory address variable x: " << ptr2 << "\n";

	cout << endl;              //Línea espaciadora puesta adrede

	// Ya es momento de dar por terminado el código fuente

	system("pause");            //Frena la ejecución del programa
	return 0;                   //Finaliza el programa
}
