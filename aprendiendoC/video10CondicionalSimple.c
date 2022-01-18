#include<stdio.h>
#include<conio.h>

/*Ingresar el sueldo de un operario, si supera los 3000 mostrar un mensaje
indicando que debe abonar impuestos.
*/

int main(){
    float sueldo;

    printf("\nIngresar el sueldo del operario: ");
    scanf("%f", &sueldo);

    if (sueldo > 3000){
        printf("\nEl opearario debe abonar impuestos");
    } else{
        printf("\nEl operario no de abonar impuestos");
    }
    getch();
    return 0;
}
