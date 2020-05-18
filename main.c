#include <stdio.h>
#include <stdlib.h>
#define TAM 5
 typedef struct{
 int id;
 float precio;
 char procesador[20];
 char marca[20];


 }eNotebook;


 //Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto y devuelva el valor del producto
 //con un descuento del 5%. Realizar la llamada desde el main. *

float aplicarDescuento(float producto);
int contarCaracteres(char cadena[], char buscado);
void ordenarEstructura(eNotebook x[], int tam);

int main()
{
    /*float numero = 156;
    float descuentoAplicado;
    descuentoAplicado = aplicarDescuento(numero);
    printf("%.2f", descuentoAplicado);*/


/*char nombre[20] = {"evalunaaaa"};
char letra = 'a';
int iteaciones;
iteaciones = contarCaracteres(nombre, letra);
printf("%d", iteaciones);*/

eNotebook tablets[5] = {{1000, 2500.5, "intel", "samsung"},{1001, 1500.75, "iox", "apple"},{1002, 3000, "dualcore", "samsung"},{1003, 6000, "premium", "samsung"},{1004, 4200, "max", "apple"}};
printf("id  precio  procesador marca");

ordenarEstructura(tablets, TAM);
for(int i = 0; i < TAM; i++){
        printf("\n%d %f %s %s\n\n", tablets[i].id, tablets[i].precio, tablets[i].procesador, tablets[i].marca);
}

    return 0;
}


float aplicarDescuento(float producto){
float descuento;
descuento = producto * 95/100;
return descuento;


}

//Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como primer parámetro y un carácter como
//segundo y devuelva la cantidad de veces que ese carácter aparece en la cadena *

int contarCaracteres(char cadena[20], char buscado){
 int contador;
for(int i = 0; i < 20; i++){
   if(buscado == cadena[i]){
    contador++;
   }


}
return contador;

}


 //Dada la estructura Notebook(id, procesador, marca, precio) generar una función que permita ordenar un array de dicha
 //estructura por marca. Ante igualdad de marca deberá ordenarse por precio. Hardcodear datos y mostrarlos desde el main. *

 void ordenarEstructura(eNotebook x[], int tam){
     eNotebook aux;
 for(int i = 0; i < tam -1; i++){
    for(int j = i + 1; j < tam; j++){

        if(x[i].marca < x[j].marca){
            aux = x[i];
            x[i] = x[j];
            x[j] = aux;
        }else if(x[i].marca == x[j].marca && x[i].precio < x[j].precio){
            aux = x[i];
            x[i] = x[j];
            x[j] = aux;
        }
    }
 }



 }
