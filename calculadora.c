#include <stdio.h>
 
int main() {
 
    int t;
	scanf("%d", &t);
	int i; //soma;
	int v[t*2];
	for(i=0; i<t*2; i+2){
		scanf("%d %d", &v[i], &v[i+1]);
	
	}
//	for(i=0; i<t*2; i+2){
//	soma= v[i]+v[i+1];
//	printf("%d\n", soma);
//	}
    return 0;
}
//criar um vetor de tamanho t*2
//somar v[i]+v[i+1] e printf
