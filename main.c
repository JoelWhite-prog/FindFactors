#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
	if(argc == 2){
		if(atoi(argv[1]) > 0){
			int n = atoi(argv[1]);
			for(int i = 1; i<=n/2; i++){
				if(n%i == 0){
					if(n/i > i){
						printf("%d\n",i);
						printf("%d\n",n/i);
					}
				}
			}
		}else{
			printf("Argument must be a positive integer.\n");
		}
	}else{
		printf("One argument required.\n");
	}
}
