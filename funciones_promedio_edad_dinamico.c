//Escribir un programa en C que calcule la edad promedio de un grupo de alumnos. 
//El programa debe solicitar al usuario el tamaño del grupo y las edades de cada uno de los alumnos.
// El programa debe implementar una función que reciba como parámetro el arreglo de edades y regrese el 
// promedio de sus elementos. 
#include <stdio.h>

float arreglo(float edades,float promedio);

int main (void){
	float edades,promedio;
	
	printf("La edad promedio de grupo es: %.2f",arreglo(edades,promedio));
	
	return 0;
}
float arreglo(float edades, float promedio){
	int i,n;
	float suma=0;
		printf("De cuanto es tu grupo: ");
			scanf("%d",&n);

			if(n>0){
				float edades[n];
				for(i=0;i<n;i++){

					printf("Edad del [%d]: ",i+1);
					scanf("%f",&edades[i]);
						
				}
				for(i=0;i<n;i++){
					suma = suma + edades[i];
					promedio = suma / n;
				}	
			}

	return (promedio);
}





