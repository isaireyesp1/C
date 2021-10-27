#include <stdio.h>

main(){
	int num ,ra = 0 ,r= 1,re = 0;
	printf("SERIE FIBONACI \n");
	printf("Digite el numero de elemento que quiera que aparezcan \n");
	scanf("%i",&num);
	for(int i = 1;i<=num; i++){
		re = ra + r;
		ra = r;
		r = re;
		printf("%i",re);
		printf("\n");
	}
}
