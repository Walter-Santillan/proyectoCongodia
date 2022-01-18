#include<stdio.h>
#include<conio.h>
/*
realizar un programa que solicite al operador ingresar dos numeros y muestre
por pantalla el mayor de ellos*/

int main(){
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    if (num1 > num2){
        printf("\nEl primer numero es el mayor");
    }else{
        printf("\nEl segundo numero es el mayor");
    }
    getch();
    return 0;
}
