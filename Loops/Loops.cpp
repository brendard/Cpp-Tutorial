/* PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https ://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA Loops Y FORMA PARTE DE
LA SOLUCI�N LLAMADA Project_study_cpp. En este c�digo se
buscar escoger un d�a de la semana tecleando un n�mero del
1 al 5. Despu�s de all�, con cualquier n�mero que se escriba,
el programa asume que es fin de semana*/

/* PARA EVITAR AMBIGUEDADES EN LOS COMANDOS LLAMADOS, SE HA DECIDIDO CREAR
UN C�DIGO FUENTE PARA CADA PROYECTO DE LA SOLUCI�N, PARA QUE LA MISMA SEA
M�S F�CIL DE COMPRENDER Y PERMITE ASIMISMO SEGUIR CORRECTAMENTE
LA SECUENCIA PROGRAM�TICA DEL CURSO ONLINE EN EL CUAL SE HA BASADO*/

/*ASIMISMO, NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABAR� COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

/*Nota importante: una vez que el loop while se rompe cuando i=4, el bucle for coge 
el n�mero siguiente (i=5), lo vuelve a introducir en el bucle while y luego le suma 
dos d�gitos al n�mero, por lo cual se obtiene la siguiente secuencia: {0,2,5,7,9}.
Aunque el c�digo compila, no es recomendable, ya que en teoria el bucle for tambi�n
tendr�a que detenerse una vez que i=5*/

/*Nota importante 2: Si en lugar de break, se usa la palabra clave continue, la 
secuencia num�rica mostrada es {0,2,4,6,8}.*/

# include <iostream>


int main() {
    for (int i = 0; i <= 5; i++) {                
        while (i <10) {
            std::cout << i << "\n";
            i=i+2;
            if (i == 4) {
                break;
            }
        }
    }
    system("pause");
    return 0;
}