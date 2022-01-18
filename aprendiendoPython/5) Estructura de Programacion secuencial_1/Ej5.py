#5) Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio.

num1 = int(input("Ingresar el primer valor: "))
num2 = int(input("Ingresar el segundo valor: "))
num3 = int(input("Ingresar el tercer valor: "))
num4 = int(input("Ingresar el cuarto valor: "))

suma = num1 + num2 + num3 + num4
promedio = suma / 4

print("La suma de los cuatro valores es: ", suma)
print("El promedio es: ", promedio)