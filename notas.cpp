#include<stdio.h>
main()
{
	int TN;
	float N1,N2,N3,N4,NG,NE,Ne,P,PN;
	printf("Ingrese la Nota 1: ");
	scanf("%f",&N1);
	printf("\n Ingrese la Nota 2: ");
	scanf("%f",&N2);
	printf("\n Ingrese la Nota 3: ");
	scanf("%f",&N3);
	printf("\n Ingrese la Nota 4: ");
	scanf("%f",&N4);
	printf("\n Ingrese la Nota grupal: ");
	scanf("%f",&NG);
	printf("\n Ingrese la Nota exposicion: ");
	scanf("%f",&NE);
	printf("\n Ingrese la Nota del Examen: ");
	scanf("%f",&Ne);
	TN=4;
	PN=(N1+N2+N3+N4)/TN;
	P=(PN+NG+NE+Ne)/TN;
	printf("\n El promedio es: ");
	printf("%f",P);
	printf("\n Trabajo realizado por: Deliany Quimbita");
	
}
