/*PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA Operators Y FORMA PARTE DE
LA SOLUCIÓN LLAMADA Project_study_cpp*/

/* PARA EVITAR AMBIGUEDADES EN LOS COMANDOS LLAMADOS, SE HA DECIDIDO CREAR
UN CÓDIGO FUENTE PARA CADA PROYECTO DE LA SOLUCIÓN, PARA QUE LA MISMA SEA
MÁS FÁCIL DE COMPRENDER Y PERMITE ASIMISMO SEGUIR CORRECTAMENTE
LA SECUENCIA PROGRAMÁTICA DEL CURSO ONLINE EN EL CUAL SE HA BASADO*/

/*ASIMISMO, NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABARÁ COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

#include <iostream>         //Librería estándar para operaciones de entrada y salida
#include <string>           //Librería estándar para operar con cadenas de caracteres de un solo byte
using namespace std;        //Estándar para crear un bloque que contenga todas las funciones a utilizar


int main() {                 //Variable global o Inicio de programa

// En esta parte se declaran variables enteras

	int num1 = 20;
	int num2 = 30;
	int num3 = 400;

// En este segmento se hacen las operaciones matemáticas de variables del mismo tipo tipo

	int sum1 = num1+num2;
	int sum2 = sum1 + num3;
	int sum3 = sum1 + sum2;

/*En esta parte, se declaran las conversiones de int a string. Este paso es importante ya
que no se pueden concatenar directamente strings con otro tipo de variables*/ 
	string str1;
	string str2;
	string str3;
	string str4;
	string str5;
	string str_sum1;
	string str_sum2;
	string str_sum3;
	string str_sum4;
	str1 = to_string(num1);
	str2 = to_string(num2);
	str3 = to_string(num3);
	str4 = to_string(sum1);
	str5 = to_string(sum2);

// Acá se llevan a cabo las concatenaciones correspondientes junto con sus respectivas salidas

	str_sum1 += str1 + " plus " + str2 + " is: ";
	str_sum2 += str3 + " plus " + str4 + " is: ";
	str_sum3 += str4 + " plus " + str5 + " is: ";
	str_sum4 += str1 + " is greater than " + str2 + ": ";
	cout << str_sum1<< sum1 << endl;
	cout << str_sum2 << sum2 << endl;
	cout << str_sum3 << sum3 << endl;
	cout <<str_sum4 << (num1>num2) << endl;

// Ya es momento de dar por terminado el código fuente

	system("pause");          //Frena la ejecución del programa
	return 0;                 //Finaliza el programa
}
