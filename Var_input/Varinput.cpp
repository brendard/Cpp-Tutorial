/* PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https ://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA Varinput Y FORMA PARTE DE
LA SOLUCIÓN LLAMADA Project_study_cpp*/

/* PARA EVITAR AMBIGUEDADES EN LOS COMANDOS LLAMADOS, SE HA DECIDIDO CREAR
UN CÓDIGO FUENTE PARA CADA PROYECTO DE LA SOLUCIÓN, PARA QUE LA MISMA SEA
MÁS FÁCIL DE COMPRENDER Y PERMITE ASIMISMO SEGUIR CORRECTAMENTE
LA SECUENCIA PROGRAMÁTICA DEL CURSO ONLINE EN EL CUAL SE HA BASADO*/

/* NOTA: ESTE CÓDIGO FUENTE ESTABA INICIALMENTE DISEÑADO PARA OPERAR SIN 
REQUERIR EL USO DE ESPACIO DE NOMBRES. SIN EMBARGO, POR RECURRENTES PROBLEMAS
DE COMPILACIÓN (EL CÓDIGO COMPILA PERO SIEMPRE DA ERROR EN LOS std:: CUANDO 
HAY CAMBIOS), SE OPTÓ POR USAR NAMESPACES. SIN EMBARGO, LOS ERRORES MENCIONADOS 
DESAPARECEN AL CERRAR Y ABRIR EL CÓDIGO DE NUEVO, PERO HACE EL TRABAJO MÁS 
ENGORROSO*/

/*ASIMISMO, NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABARÁ COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

#include <iostream>         //Librería estándar para operaciones de entrada y salida
#include <string>           //Librería estándar para operar con cadenas de caracteres de un solo byte
#include <stdlib.h>         //Librería para borrar la pantalla y mostrar un código nuevo
using namespace std;        //Estándar para crear un bloque que contenga todas las funciones a utilizar

int main() {                //Variable global o Inicio de programa

	// Declaración de variables y constantes a utilizar
	int x, y, myNum;
	float T_shirt_price, T_shirt_discount;
	float Total_tshirt_price;
	int sum;
	const double phi = 3.14515;
	bool human = true;
	float f1 = 35e3;
	double d1 = 12E4;
	char myGrade = 'B';
	string high = "A+", ave = "C", low = "F";           //Al igual que con las variables enteras, se pueden declarar chars en lista
	string greeting = "Hello, World!";

	/*Se muestran las salidas con sus respectivos datos de entrada obtenidos por teclado. En este caso, con usar el comando
	cin<< es más que suficiente. Asimismo, las variables a utilizar se pueden declarar todas antes de ejectutar cualquier 
	línea de comandos o después de ellas. Se recomienda declararlas todas en un mismo sitio*/

	cout << "Type a number x: ";
	cin >> x;
	cout << "Type another number y: ";
	cin >> y;
	sum = x + y;
	cout << "The sum of x and y is " << sum << ". However, my favorite number is ", cin >> myNum;           //cout y cin combinados
	
	/*Conviene a veces borrar parte del código de la pantalla antes de ejecutar una nueva línea de comando
	que no guarda ninguna relación con los comandos que se ejecutaron anteriormente*/

	system("PAUSE");
	system("CLS");

	cout << "Type the price of the T-shirt: ";
	cin >> T_shirt_price;
	cout << "Type the discount applicable for the T-shirt from 1 to 100: ";
	cin >> T_shirt_discount;
	Total_tshirt_price = T_shirt_price *(1- (T_shirt_discount / 100));
	cout << "The T-shirts with discount costs " << Total_tshirt_price <<"$" << endl;

	system("PAUSE");
	system("CLS");

	/*Después de borrar estos comandos, se muestran otras variables declaradas sin usar el comando cin<<, 
	para que se note la diferencia*/

	cout << "The Phi number is: " << phi << endl;
	cout << "You are 100% human: " << human << endl;
	cout << "Float number is: " << f1 << endl;
	cout << "Double number is: " << d1 << endl;
	cout << "Maximum grade is "<< high <<", average grade is "<< ave <<", and minimum grade is "<< low <<". My grade in Algebra exam was : " << myGrade << endl;
	cout << "The first and most important string in programming is: " << greeting << endl;
	
	// Ya es momento de dar por terminado el código fuente

	system("pause");          //Frena la ejecución del programa
	return 0;                 //Finaliza el programa
}