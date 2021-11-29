#include <stdio.h>
#include <string.h>

/*
  Iterar
   Meter arreglos
*/
struct info{
	char nombre[25];
	char apPaterno[25];
	char apMaterno[25];
	char direccion[25];
};

struct academico{
	char numeroEmpleado[13];
	struct info datos_profesor[10];
}profesor[10];

struct alumnado{
	char numeroCuenta[13];
	char promedio[5];
	struct info datos_estudiante; //
}estudiante;

int main(void){
	int incremento;
	int variable=1;
	int op;
	char c;
	printf("%c", &c);
	while (variable==1){
	
	puts("¿Qué deseas capturar?");
	puts("1.-Profesorado");
	puts("2.-Alumnado");
	
	scanf("%i", &op);
	
	for(int i=0;i<incremento;i++){
	if(op == 1){
		getchar();
		printf("Dame número empleado:");
		fflush(stdin);
		fgets(profesor[i].numeroEmpleado,13,stdin);
		printf("Dame nombre: ");
		fflush(stdin);
		fgets(profesor[i].datos_profesor[i].nombre, 25, stdin);
		printf("Dame apellido paterno: ");
		fflush(stdin);
		fgets(profesor[i].datos_profesor[i].apPaterno, 25, stdin);
		printf("Dame apellido materno: ");
		fflush(stdin);
		fgets(profesor[i].datos_profesor[i].apMaterno, 25, stdin);
		//printf("\n\tID: %s \n\tNombre:%s \t       %s \t       %s", profesor.numeroEmpleado, profesor.datos_profesor.nombre, profesor.datos_profesor.apPaterno, profesor.datos_profesor.apMaterno);   
	}else if(op == 2){
		getchar();
		printf("Dame número empleado: ");
		fflush(stdin);
		fgets(estudiante.numeroCuenta,13,stdin);
		printf("Dame nombre: ");
		fflush(stdin);
		fgets(estudiante.datos_estudiante.nombre, 25, stdin);
		printf("Dame apellido paterno: ");
		fflush(stdin);
		fgets(estudiante.datos_estudiante.apPaterno, 25, stdin);
		printf("Dame apellido materno: ");
		fflush(stdin);
		fgets(estudiante.datos_estudiante.apMaterno, 25, stdin);
		printf("\n\tID: %s \n\tNombre:%s \t       %s \t       %s", estudiante.numeroCuenta, estudiante.datos_estudiante.nombre, estudiante.datos_estudiante.apPaterno, estudiante.datos_estudiante.apMaterno);   
}
	else{
		printf("Dame una opción válida");
}	

printf("Si quieres continuar, escribe 1, Si deseas terminar escribe 2:\n");
	scanf("%i", &variable);


}}
	printf("\n--------------------------------------\n");
	printf("Imprimiendo Profesores\n");
	for (int i=0; i<incremento; i++){
		printf("\n\tID: %s \tNombre: %s \tApPaterno:  %s \tApMaterno:%s", profesor[i].numeroEmpleado, profesor[i].datos_profesor[i].nombre, profesor[i].datos_profesor[i].apPaterno, profesor[i].datos_profesor[i].apMaterno);   	
	}
	printf("\n--------------------------------------\n");

return 0;}
