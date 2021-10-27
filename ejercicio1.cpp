#include <stdio.h>
#include <conio.h> 
main(){
//	char a[5];
int con1,con2,con3;
float pt,pta,pa;
float port, porta, pora, con11, con12, con13;
	float a;
	for(int i = 30; i> 0; i--){
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
     	
	}

	pt = con13 / con3;
	pta = con11 /con1;
	pa = con12 /con2;
	
    port = (con3 / 30)*100 ;
	porta = (con1 / 30)*100;
	pora = (con2 / 30)*100;
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
