#include<stdio.h>
#include<conio.h>
/*Realizar un programa que solicite al usuario la carga por teclado
de dos numeros, SI el primero es mayor al segundo informar su suma
y diferencia, en caso CONTRARIO informar el producto y division del
primero rescpecto al segundo.*/
int main(){
    float num1,num2,producto,suma,diferencia,division;

    printf("Ingresar el primer numero: ");
    scanf("%f", &num1);
    printf("Ingresar el segundo numero: ");
    scanf("%f", &num2);

    if (num1>num2){
        suma=num1+num2;
        diferencia=num1-num2;
        printf("La suma de los dos numeros es: %.2f", suma);
        printf("\n");
        printf("La diferencia de dos numeros es: %.2f", diferencia);

    } else{
        producto=num1*num2;
        division=num1/num2;
        printf("El producto de los dos numeros es: %.2f", producto);
        printf("\n");
        printf("La division de dos numeros es: %.2f", division);
    }
    getch();
    return 0;
}
