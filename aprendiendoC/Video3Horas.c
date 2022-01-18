#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*Calcular el sueldo mensual de un operario
conociendo la cantidad de horas trabajadas y el pago por hora.*/

int main(){
    int horasTrabajadas;
    float costoHora, sueldo;

    printf("Ingresar las horas trabajadas por el operario: ");
    scanf("%i", &horasTrabajadas);

    printf("\nIngrese el pago por hora: ");
    scanf("%f", &costoHora);

    sueldo = horasTrabajadas * costoHora;

    printf("\nEl sueldo total del operario es: ");
    printf("%f", sueldo);

    getch();
    return 0;
}
