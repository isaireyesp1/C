#include<stdio.h>
#include<conio.h>
main(){
	int w = 5;
	int a = 0,b,c;
	int np = 0, pt = 0, pta = 0;
	int nph=0, pth=0,ptn=0,pts = 0,ptah = 0,ptan=0,ptas=0;
	float ptasum1=0.0,ptasum2=0.0,ptasum3=0.0,ptsum1=0.0,ptsum2=0.0,ptsum3=0.0; 
	float respta=0.0, respt=0.0, resnp=0.0;
	for(int x = 1; x<=w; x++ ){
		printf("Obrero %i",x);
		printf("\n 0 si no se presento a trabajar ");
		printf("\n Ingresa la hora de entrada  ");
		printf("\n");
		scanf("%i",&a);
		if(a==0){
			printf("\n El trabajador %i",x);
			printf("  no se presento \n \n ");
			np = np + 1;
			
		}
		 if(a>=5 && a<=15){
			printf("Ingresa los minutos \n ");
			scanf("%i",&b);
			
			printf("\n Ingresa los segundos \n ");
			scanf("%i",&c);
			
			if(b<=59 && c<=59){
				if( b>=1 && b<=10 ){
					pta = pta + 1;
					ptah = ptah + a;
					ptan = ptan + b;
					ptas = ptas + c;
				}
				
			}
			 if(b<=59 && c<=59){
				if((a>=5 && a<=8 && b==0 && c ==0) || (a>=5 && a<=7 && b<=59 )){
					pt = pt +1;
					pth = pth + a;
					ptn = ptn + b;
					pts = pts + c;
				}
			}
		 if((b>59 && c>59 )|| b>59 || c>59){
				printf("Los minutos y los segundos no pueden pasar el numero 59 \n\n");
				printf("Ingresa los minutos \n ");
			scanf("%i",&b);
			printf("\n Ingresa los segundos \n ");
			scanf("%i",&c);
				if(b<=59 && c<=59){
				if( b>=1 && b<=10 ){
					pta = pta + 1;
				
					ptan = ptan + b;
					ptas = ptas + c;
				}
			}
			 if(b<=59 && c<=59){
				if((a>=4 && a<=8 && b==0) || (a>=4 && a<=7 && b<=59 )){
					pt = pt +1;
			
					ptn = ptn + b;
					pts = pts + c;
				}
			}
			}
		else if(( a == 8 && b>10) || (a>=8 && b>0 )){
				printf("\n El trabajador %i",x);
				printf(" llego muy tarde y por eso se le va a poner ausencia y se le regresara a su casa \n ");
				np = np + 1 ;
			}
				
		}
	}
	
	
	
	
	
	if(pta>0){
		ptasum1 = ptah / pta;
	ptasum2 = ptan / pta;
	ptasum3 = ptas / pta;
		respta = (pta * 100) / w;
	}
 if(pt>0){
		ptsum1 = pth / pt;
	ptsum2 = ptn / pt;
	ptsum3 = pts / pt;
		respt = (pt * 100) / w;
	}
 if(np>0){
	resnp = (np * 100) /w;	
	}
	
	
	
	
	
	
	printf("\n\n Obreros que llegaron tarde %i",pta);
	printf("\n promedio del tiempo de los obreros que llegaron tarde  \n %.1f",ptasum1);
	printf(" : %.1f",ptasum2);
	printf(" : %.1f",ptasum3);
	printf("\n el porcentaje de los trabajadores que llegaron 10 minutos tarde al trabajo es : %.2f",respta);
	printf("%c ",37);
	
	printf("\n\n Obreros que llegaron temprano %i",pt);
	printf("\n promedio del tiempo de los obreros que llegaron temprano \n %.1f",ptsum1);
	printf(" : %.1f",ptsum2);
	printf(" : %.1f",ptsum3);
	printf("\n el porcentaje de los trabajadores que llegaron temprano al trabajo es : %.2f",respt);
	printf("%c ",37);
	printf("\n\n Obreros que estan ausentes %i",np);
	printf("\n Estos obreros no tien promedio de tiempo porque no se presentaron a trabajar \n");
	printf("\n El porcentaje de los trabajadores que no se presentaron a trabar es : %.2f",resnp);
	printf("%c ",37);
}
