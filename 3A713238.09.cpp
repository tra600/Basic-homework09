#include <stdio.h> 

#include <stdlib.h>

int main(void){

	int x,y;

	for (x=1;x<=9;x++){ 

		for(y=1;y<=9;y++)  

		printf("%d*%d=%2d  ",x,y,x*y); 

		printf("\n"); 

     }

	system("pause");  

	return 0;

}
