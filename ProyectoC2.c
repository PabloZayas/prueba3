#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef struct articulo
{
	float costo;
	float precioVenta;
	char * NombreArt;
	int cantidadInventario;
}Articulo;


typedef struct empleado
{
	char * nombre[100];
	int edad;
	float sueldo;
	int area;
	char * usuario[100];
	int puesto;
}Empleado;

Empleado* registrarEmpleado();
void login (Empleado * art);

int main (void)
{
	registrarEmpleado();
	return 0;
}

void login(Empleado * art)
{
	printf("Bienvenido al sistema\n\n");
	printf("Usuario: ");
	printf("Contraseña: ");
}

Empleado* registrarEmpleado()
{
	Empleado * ApEmp = (Empleado*) malloc(sizeof(Empleado));
	printf("\nnombre del empleado: ");
	scanf("[%^\n]", ApEmp->nombre);
	printf("\nnombre de usuario:");
	scanf("[%^\n]", ApEmp->usuario);
	printf("\nÁrea de empleado: \n\t1)Administrador\n\t2)Área de ventas\n\t3)Área de compras\n\nÁrea: ");
	return ApEmp;
}








