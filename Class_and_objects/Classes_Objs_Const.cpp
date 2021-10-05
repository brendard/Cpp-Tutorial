/*PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA Classes_Objs_Const Y FORMA PARTE DE
LA SOLUCIÓN LLAMADA Project_study_cpp. EN ESTE SE MUESTRA CÓMO CREAR CLASES CON SUS
RESPECTIVOS OBJETOS Y ATRIBUTOS, AÑADIENDO ADEMÁS LOS MÉTODOS Y CONSTRUCTORES*/

/*PARA EVITAR AMBIGUEDADES EN LOS COMANDOS LLAMADOS, SE HA DECIDIDO CREAR
UN CÓDIGO FUENTE PARA CADA PROYECTO DE LA SOLUCIÓN, PARA QUE LA MISMA SEA
MÁS FÁCIL DE COMPRENDER Y PERMITE ASIMISMO SEGUIR CORRECTAMENTE
LA SECUENCIA PROGRAMÁTICA DEL CURSO ONLINE EN EL CUAL SE HA BASADO*/

/*ASIMISMO, NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABARÁ COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

/*Nota: este proyecto contiene dos archivos .txt que ejemplican cómo crear arrays con o sin vectores, 
lo cual será de utilidad más adelante*/

#include <iostream>
using namespace std;

class Car {                     // Creación de la clase Cars
public:
    string brand;               // Atributo: marca
    string model;               // Atributo: modelo
    int year{};                 // Atributo: año de lanzamiento
    float maxSpeed{};           // Atributo: velocidad máxima
    bool  available{};          /*Atributo: disponibilidad del coche. Verdadera por defecto para todos los vehículos. Al igual
                                que con las variables numéricas, se usa doble corchete para inicalizar variables booleanas, o en su 
                                defecto se les asigna de valor true o false. Pero en este caso, eso ya se hace en la función principal*/ 

    /* Acá se crea el constructor, el cual tiene el mismo nombre que la clase, siempre es público y no tiene ningún valor de retorno.
    Sin embargo, debe inicilizarse primero en blanco para que se puedan añadir los objetos y atributos como una matriz de varios arrays*/

    /*Inicialización del constructor dentro de la clase, aunque también puede inicializarse fuera. Para ello, se debe primero especificar
    la clase, seguida del operador de resolción (::) y finalmente el constructor, el cual se llama igual que la clase.
    
    Ej.: Car::Car*/ 

    Car() {}                    

    Car(string w, string x, int y, float z) {                /*Llenado del constructor objetos usados como variables a las cuales se les
                                                             asigna un valor*/
        brand = w;
        model = x;
        year = y;
        maxSpeed = z;

    }

    /*Creación del método printDetails para mostrar los distintos atributos de los vehículos, ya que como se ha mencionado, 
    el constructor no tiene ningún valor de retorno. En este caso en particular, se añade un parámetro adicional que no
    necesariamente debe estar contenido en el constructor, y este parámetro denota la disponibilidad por defecto del vehículo*/  

    void printDetails(bool available) {
        cout << brand << " - " << model << " - " << " - " << year << " - " << maxSpeed << " - " << available << endl;
    }
};

int main() {                      // Se define la función principal
    /*Se declara un array con un tamaño específico. En este caso en particular, la clase contendrá 5 objetos con 4 atributos*/ 
    Car cars[5];

    // Se asignan los objetos dentro del array
    cars[0] = Car("BMW", "X5", 1999, 240.0);
    cars[1] = Car("Ford", "Mustang", 1969, 128.0);
    cars[2] = Car("Honda", "Logo", 1999, 152.0);
    cars[3] = Car("Volvo", "440", 1988, 175.0);
    cars[4] = Car("Peugeut", "505", 1979, 168.0);

    /*Esta operación de bucle for-if permite elegir del array los coches cuyo año de lanzamiento sea mayor a 1998. Además, como 
    el parámetro *available puede ser verdadero o falso a elección, si ponemos true, los coches lanzados después de 1998 estarán 
    disponibles, arrojando valor de 1. En caso contrario, si se indica false no habrá ningún coche disponible posterior a ese año, 
    por lo cual ese dato arrojará valor 0*/

    for (int i = 0; i < 5; i++) {
        if (cars[i].year > 1998) {

            cars[i].printDetails(true);
        }
    }

    system("pause");
    return 0;
}

