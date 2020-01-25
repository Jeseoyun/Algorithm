#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;

	while(t--){
		int h, w, n;	//전체 h층, 각 층 w개의 방, n번째손님
		cin >> h >> w >> n;
		int room;
		if(n%h == 0)
			room = h*100 + n/h;
		else
			room = (n/h)+1 + (n%h)*100;
		cout << room << "\n";
	}
	return 0;
}
