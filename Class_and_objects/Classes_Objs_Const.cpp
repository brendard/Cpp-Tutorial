/*PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA Classes_Objs_Const Y FORMA PARTE DE
LA SOLUCI�N LLAMADA Project_study_cpp. EN ESTE SE MUESTRA C�MO CREAR CLASES CON SUS
RESPECTIVOS OBJETOS Y ATRIBUTOS, A�ADIENDO ADEM�S LOS M�TODOS Y CONSTRUCTORES*/

/*PARA EVITAR AMBIGUEDADES EN LOS COMANDOS LLAMADOS, SE HA DECIDIDO CREAR
UN C�DIGO FUENTE PARA CADA PROYECTO DE LA SOLUCI�N, PARA QUE LA MISMA SEA
M�S F�CIL DE COMPRENDER Y PERMITE ASIMISMO SEGUIR CORRECTAMENTE
LA SECUENCIA PROGRAM�TICA DEL CURSO ONLINE EN EL CUAL SE HA BASADO*/

/*ASIMISMO, NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABAR� COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

/*Nota: este proyecto contiene dos archivos .txt que ejemplican c�mo crear arrays con o sin vectores, 
lo cual ser� de utilidad m�s adelante*/

#include <iostream>
using namespace std;

class Car {                     // Creaci�n de la clase Cars
public:
    string brand;               // Atributo: marca
    string model;               // Atributo: modelo
    int year{};                 // Atributo: a�o de lanzamiento
    float maxSpeed{};           // Atributo: velocidad m�xima
    bool  available{};          /*Atributo: disponibilidad del coche. Verdadera por defecto para todos los veh�culos. Al igual
                                que con las variables num�ricas, se usa doble corchete para inicalizar variables booleanas, o en su 
                                defecto se les asigna de valor true o false. Pero en este caso, eso ya se hace en la funci�n principal*/ 

    /* Ac� se crea el constructor, el cual tiene el mismo nombre que la clase, siempre es p�blico y no tiene ning�n valor de retorno.
    Sin embargo, debe inicilizarse primero en blanco para que se puedan a�adir los objetos y atributos como una matriz de varios arrays*/

    /*Inicializaci�n del constructor dentro de la clase, aunque tambi�n puede inicializarse fuera. Para ello, se debe primero especificar
    la clase, seguida del operador de resolci�n (::) y finalmente el constructor, el cual se llama igual que la clase.
    
    Ej.: Car::Car*/ 

    Car() {}                    

    Car(string w, string x, int y, float z) {                /*Llenado del constructor objetos usados como variables a las cuales se les
                                                             asigna un valor*/
        brand = w;
        model = x;
        year = y;
        maxSpeed = z;

    }

    /*Creaci�n del m�todo printDetails para mostrar los distintos atributos de los veh�culos, ya que como se ha mencionado, 
    el constructor no tiene ning�n valor de retorno. En este caso en particular, se a�ade un par�metro adicional que no
    necesariamente debe estar contenido en el constructor, y este par�metro denota la disponibilidad por defecto del veh�culo*/  

    void printDetails(bool available) {
        cout << brand << " - " << model << " - " << " - " << year << " - " << maxSpeed << " - " << available << endl;
    }
};

int main() {                      // Se define la funci�n principal
    /*Se declara un array con un tama�o espec�fico. En este caso en particular, la clase contendr� 5 objetos con 4 atributos*/ 
    Car cars[5];

    // Se asignan los objetos dentro del array
    cars[0] = Car("BMW", "X5", 1999, 240.0);
    cars[1] = Car("Ford", "Mustang", 1969, 128.0);
    cars[2] = Car("Honda", "Logo", 1999, 152.0);
    cars[3] = Car("Volvo", "440", 1988, 175.0);
    cars[4] = Car("Peugeut", "505", 1979, 168.0);

    /*Esta operaci�n de bucle for-if permite elegir del array los coches cuyo a�o de lanzamiento sea mayor a 1998. Adem�s, como 
    el par�metro *available puede ser verdadero o falso a elecci�n, si ponemos true, los coches lanzados despu�s de 1998 estar�n 
    disponibles, arrojando valor de 1. En caso contrario, si se indica false no habr� ning�n coche disponible posterior a ese a�o, 
    por lo cual ese dato arrojar� valor 0*/

    for (int i = 0; i < 5; i++) {
        if (cars[i].year > 1998) {

            cars[i].printDetails(true);
        }
    }

    system("pause");
    return 0;
}

