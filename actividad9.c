// RiosRodriguezDaniel 372800
// 2-oct-23
/*
ACTIVIDAD 9
MENÚ
1.- LLENAR VECTOR
2.- LLENAR MATRIZ
3.- IMPRIMIR VECTOR
4.- IMPRIMIR MATRIZ
5.- ORDENAR VECTOR
6.- BUSCAR VALOR EN VECTOR
0.- SALIR
NOTA: El programa deberá repetirse cuantas veces lo desee el usuario, Validado el menú con la función vali_num
I N S T R U C C I O N E S
1.- LLENAR VECTOR .-  Llenar vector con 15 números, los números generados aleatoriamente, los números entre el
 rango de 100 al 200 (no repetidos)
2.- LLENAR MATRIZ .- Llenar la matriz de 4x4 con con números generados aleatoriamente, números entre el rango
de 1 al 16  (no repetidos)
3.- IMPRIMIR VECTOR .- Imprime el vector que se envíe, donde la función recibe como parámetro el vector,tamaño,
 nombre del vector.
4.- IMPRIMIR MATRIZ.-  Imprime la matriz sin importar el tamaño de la matriz recibiendo como parámetros la
matriz, la cantidad de renglones y columnas, así como nombre que se le dará a la matriz.
5.- ORDENAR VECTOR.- Usar función que ordene el vector por el método de ordenación de la Burbuja mejorada.
6.- BUSCAR VALOR EN VECTOR.-  Buscar un valor en el vector usando el método de búsqueda secuencial.
0.- SALIR
*/
// R.R.D_act9_1_932
#include <stdio.h>
#include "RRD.h"
int vec[100];
int matriz[4][4];
int main()
{
    srand(time(NULL));
    int menu;
    int opc;
    do
    {
        menu = 0;
        opc = validarnumeros("MENU\n1.- LLENAR VECTOR\n2.- LLENAR MATRIZ\n3.- IMPRIMIR VECTOR\n4.- IMPRIMIR MATRIZ\n5.- ORDENAR VECTOR\n6.- BUSCAR VALOR EN VECTOR\n0.- SALIR\n", 0, 6);
        switch (opc)
        {
        case 0:
            system("cls");
            printf("FIN DEL PROGRAMA");
            break;
        case 1:
            generaraleatorios(vec, 15, 100, 200);
            menu = repetir();
            break;
        case 2:
            matriz4x4(matriz, 1, 16);
            menu = repetir();
            break;
        case 3:
            imprimirvector(vec, 15, "VECTOR 1");
            menu = repetir();
            break;
        case 4:
            imprimirmatriz(matriz, 4, 4, "MATRIZ 1");
            menu = repetir();
            break;
        case 5:
            ordenarvector(vec, 15);
            menu = repetir();
            break;
        case 6:
            busquedavector(vec, 15, 6);
            menu = repetir();
            break;
        }
    } while (menu == 1);
}