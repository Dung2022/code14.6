#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int count;
    int min,max;
	printf("nhap vao gia tri min\n");
	scanf("%d,&min");
	printf("nhap vao gia tri max \n");
	scanf("%d",&max);
	for (count=max;count>=min;count--){
		if(count%2==0){
			printf("\n\t\t%d so chan \n",count);
		}
	}

	
	
	
	return 0;
}
