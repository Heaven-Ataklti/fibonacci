#include <stdio.h>
int main(){

	int x=0;
	int y=1;
	int i,n;
	int z=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
			printf("%d\n",i);
		}
		else if(i==1){
			printf("%d\n",i);
		}
		else{
			z=x+y;
			x=y;
			y=z;
			printf("%d\n",z);
		}
	}
}
