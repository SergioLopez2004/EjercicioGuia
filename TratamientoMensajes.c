#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char peticiones[100];
	
	strcpy (peticion, "3/Miguel/47/1.78");
	
	int codigo;
	char nombre[20];
	int edad;
	float altura;
	
	char *p = strtok (peticion, "/");
	codigo = atoi(p);
	P = strtok (NULL, "/");
	strcpy (nombre, p);
	p = strtok(NULL, "/");
	edad = atoi (p);
	p = strtok(NULL, "/");
	altura = atof (p);
	
	printf ("Codigo: %d, nombre: %s, edad: %d, altura: %f", codigo, nombre, edad, altura);
	
	char respuesta[100];
	if (edad>18)
		sprintf (respuesta, "%s es mayor de edad porque tiene mas de %d a�os", nombre, edad);
	else
		sprintf (respuesta, "%s no es mayor de edad", nombre);
	printf ("Respuesta: %s\n", respuesta);
}
