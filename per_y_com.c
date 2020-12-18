/* Programa en C para uso de funcion factorial, permutacion y combinacion
 * alumno: Giron PEregrina Ramon Alonso
 * Correo: ramonalonso_giron@ucol.mx
 * Repositorio: 
 * Materia: Matematicas Discretas
 * Profesor: Navarro Alvarez Ernesto
 * Fecha: 15 de Diciembre del 2020 
 */

/* librerias del lenjuage C usadas para el program*/
#include <stdio.h> //Libreria de entrads y salidas estandar de C
#include <stdlib.h> //Libreria que usamos àra convertir un char a int usando la funcion [atoi())]

/*EL llamado a las funciones de factorial, permutacion y combinacion*/
int factorial(int);
int permutacion(int, int);
int combinacion(int, int);

/*Inicio de la funcion main*/
int main (int argc, char *argv[]){
	/*IMprimimos los argumentos ingresado por el usuario, con el formato [n=arg[2] y n=arg[3]]*/ 
	printf("n=%s y k=%s\n",argv[1],argv[2]);
	 
	/*Condicional para revisar que los argumentos ingresados cumplan con los criterios prestablecidos*/
	if(atoi(argv[1]) < 0 || atoi(argv[2]) < 0){
		printf("Solo enteros positivos"); //En caso de argumetos negativos imprime una respuesta o advertencia al ususario
	}else{ //Si los argumentos ingresados son positivos pasamos a realizar los siguientess pasos
		if(atoi(argv[1])>atoi(argv[2])){ //Revisamos si n es menor que k y si se cumple pasamos los arguemtos  a las funciones
			printf("Permutacion es: %d\n", permutacion( atoi(argv[1]), atoi(argv[2]) ));
			printf("Combinacion es: %d\n", combinacion( atoi(argv[1]), atoi(argv[2]) ));
		}else if(atoi(argv[1])<atoi(argv[2])){ //Si n es mayor que k, indicamos un mensaje de error al usuario
			printf("K debe ser menor que N");
			printf("\nn=%s y k=%s\n",argv[1],argv[2]);
		}else{ //Caso contrario si ingresa 0 o valores nulos al programa
			printf("Resultado es: 0"); 
		}
	}
	
	/*Imprimimos el factorial de arg[1]*/ 
	printf("\nEl factorial de [%s] es igual a : %d\n",argv[1],factorial(atoi(argv[1])));
	
	/*Imprimimos total de argumentos ingresados*/
	printf("\ncmdline args count=%d", argc);

	/*pNombre del primer argumento osea nombre del programa o ejecutable*/
	printf("\nexe name=%s", argv[0]);

	/*Ciclo para imprimir los argumentos ingresados*/
	for(int i=1; i< argc; i++) {
		printf("\narg%d=%s", i, argv[i]);
	}
	
	/*Salto de linea para estetica de la consola*/
	printf("\n");
	return 0;
} //cierre de la funcion main

/*Se define la funcion factorial*/
/*Realiza la operacion de encontrar el factorial del numero ingresado en la funcion principal*/
int factorial(int n)
{
	if (n == 0){ /*Comprueba que un número sea igual a 0*/
    	return 1;
    }else if(n<0){
		return printf("No factorial negativo"); //retorna una respuestas en caso de cumplir la condicion
	}
	else{
    	return (n*factorial(n-1)); /*Regresa el valor ingresado multiplicado por el factorial de su predecesor*/
	}
}

/*Se define la funcion permutacion*/
/*Realiza la operacion de encontrar el factorial del numero ingresado en la funcion principal*/
int permutacion(int n, int k){
	if(k>n){ //condicional de control de la funcion
		return printf("K debe ser menor que n"); //retorna una respuestas en caso de cumplir la condicion
	}else{
		return factorial(n)/factorial(n-k); /*Regresa el valor ingresado y resultante de la formula de la permutacion*/
	}
}

int combinacion(int n, int k){
	if(k>n){ //condicional de control de la funcion
		return printf("K debe ser menor que n"); //retorna una respuestas en caso de cumplir la condicion
	}else{
		return factorial(n)/(factorial(n-k)*factorial(k)); /*Regresa el valor ingresado  y resultante de la formula de la combinacion*/
	}
}
