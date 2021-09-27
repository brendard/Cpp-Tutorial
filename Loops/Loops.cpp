/* PROGRAMA DESARROLLADO PPR BRENDA ROJAS PARA APRENDER C++
BASADO EN EL CURSO OFRECIDO POR EL PORTAL WEB
https ://www.w3schools.com/ */

/* ESTE PROYECTO MUESTRA EL PROGRAMA Loops Y FORMA PARTE DE
LA SOLUCIÓN LLAMADA Project_study_cpp. En este código se
buscar escoger un día de la semana tecleando un número del
1 al 5. Después de allí, con cualquier número que se escriba,
el programa asume que es fin de semana*/

/* PARA EVITAR AMBIGUEDADES EN LOS COMANDOS LLAMADOS, SE HA DECIDIDO CREAR
UN CÓDIGO FUENTE PARA CADA PROYECTO DE LA SOLUCIÓN, PARA QUE LA MISMA SEA
MÁS FÁCIL DE COMPRENDER Y PERMITE ASIMISMO SEGUIR CORRECTAMENTE
LA SECUENCIA PROGRAMÁTICA DEL CURSO ONLINE EN EL CUAL SE HA BASADO*/

/*ASIMISMO, NO OLVIDEN HACER CLICK DERECHO SOBRE EL PROYECTO QUE DESEAN SIMULAR
PARA ESTABLECERLO COMO PROYECTO DE INICIO. SI NO LA HACEN, SE ACABARÁ COMPILANDO
EL PROYECTO DE INICIO POR DEFECTO O ANTERIORMENTE ESCOGIDO*/

/*Nota importante: una vez que el loop while se rompe cuando i=4, el bucle for coge 
el número siguiente (i=5), lo vuelve a introducir en el bucle while y luego le suma 
dos dígitos al número, por lo cual se obtiene la siguiente secuencia: {0,2,5,7,9}.
Aunque el código compila, no es recomendable, ya que en teoria el bucle for también
tendría que detenerse una vez que i=5*/

/*Nota importante 2: Si en lugar de break, se usa la palabra clave continue, la 
secuencia numérica mostrada es {0,2,4,6,8}.*/

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