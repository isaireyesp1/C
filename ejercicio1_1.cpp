#include <stdio.h>
#include <conio.h> 
main(){
//	char a[5];
int con1,con11,con2,con12,con3,con13;
float pt,pta,pa;
float port, porta, pora;
	float a;
	int i = 30;
	while(i>=1){
		//printf("\n %i",i);
		printf("Ingresa la hora de entrada el trabajador  %i",i);
		printf("\n");
		printf("Si no asistio digita el numero 0 \n");
		
		//gets(a);
		scanf("%f",&a);
    
     	printf("\n");
     	
     	if(a>=8.01 && a<=8.10 ){
     		con1=con1+1;
     		con11 = con11 + a;
		 }
		 else if(a==0){
		 	con2=con2+1;
		 	con12 = con12 + a;
		 }
		 else if(a<=8.00){
		 	con3=con3+1;
		 	con13 = con13 + a;
		 }
		 i--;
     	
	}

	pt = con3 / 5;
	pta = con1 /5;
	pa = con2 /5;
	
port = (con3 / 5)*100 ;
	porta = (con1 / 5)*100;
	pora = (con2 / 5)*100;
	printf("Personas que asistieron temprano(puntualmente) ----> %i ",con3);
	printf("\n promedio %.2f",pt);
	printf("\n porcentaje %.1f",port);
	printf("%c ",37);
	
	printf(" \n Personas que asistieron entre los 10 minutos tarde ----> %i ",con1);
	printf("\n promedio %.2f",pta);
	printf("\n porcentaje %.1f",porta);
	printf("%c ",37);
	
	
	printf("\n Trabajadores que no asistieron a laborar ----> %i ",con2);
	printf("\n promedio %.2f",pa);
	printf("\n porcentaje %.1f",pora);
	printf("%c ",37);
}
