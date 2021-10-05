/*PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA Class_objects_no_constructor Y FORMA PARTE DE
LA SOLUCIÓN LLAMADA Project_study_cpp. EN ESTE SE MUESTRA CÓMO CREAR CLASES CON SUS 
RESPECTIVOS OBJETOS Y ATRIBUTOS. LOS MÉTODOS Y CONSTRUCTORES SE EXPLICARÁN EN UN
NUEVO PROYECTO*/

/*PARA EVITAR AMBIGUEDADES EN LOS COMANDOS LLAMADOS, SE HA DECIDIDO CREAR
UN CÓDIGO FUENTE PARA CADA PROYECTO DE LA SOLUCIÓN, PARA QUE LA MISMA SEA
MÁS FÁCIL DE COMPRENDER Y PERMITE ASIMISMO SEGUIR CORRECTAMENTE
LA SECUENCIA PROGRAMÁTICA DEL CURSO ONLINE EN EL CUAL SE HA BASADO*/

/*ASIMISMO, NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABARÁ COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

#include <iostream>
#include <string>
using namespace std;

// Se crea la clase Car con varios atributos (marca, modelo, año, máxima velocidad). La clase tendrá 3 objetos en total
class Car {
public:
    string brand;
    string model;
    int year{};         /*/Es importante inicializar variables miembro de orden numérico colocando corchetes después del nombre. 
                        En caso de no hacerlo, el programa compilará igual pero habrá una advertencia de parte de la aplicación*/
};

int main() {
    // Se crea el primer objeto de la clase Car
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    // Se crea el segundo objeto de la clase Car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    // Se crea el tercer objeto de la clase Car
    Car carObj3;
    carObj3.brand = "Renault";
    carObj3.model = "Clio";
    carObj3.year = 1990;

    // Print attribute values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year << "\n";
    system("pause");
    return 0;
}
