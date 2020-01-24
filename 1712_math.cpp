#include <iostream>
using namespace std;
int main(){
	int a, b, c;	//a:고정비 b:가변비 c:노트북가격
	cin >> a >> b >> c;
	if(c-b<=0)
		cout << -1;
	else
		cout << a/(c-b)+1;
	return 0;
}
