#include <iostream>
using namespace std;
int main(){
	int x, y, w, h;	//(x,y):현재위치, (w,h):오른쪽위, (0,0):왼쪽아래
	cin >> x >> y >> w >> h;
	cout << min(w*0.5>x?x:w-x, h*0.5>y?y:h-y);
	return 0;
}
