#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int h, w, n;	//전체 h층, 각 층 w개의 방, n번째손님
		scanf("%d %d %d", &h, &w, &n);
		int room = n%h==0? h*100+n/h:(n%h)*100+(n/h)+1;
		printf("%d \n", room);
	}
	return 0;
}
