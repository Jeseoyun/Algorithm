#include <stdio.h>
int main(){
	int population[15][15]={};
	for(int i=1; i<=14; i++){
		population[0][i] = i;
		population[i][1] = 1;
	}
	for(int i=1; i<=14; i++)
		for(int j=2; j<=14; j++)
			population[i][j] = population[i-1][j]+population[i][j-1];

	int t;
	scanf("%d", &t);
	while(t--){
		int k, n;	//k층, n호
		scanf("%d %d", &k, &n);
		printf("%d\n", population[k][n]);
	}
	return 0;
}
