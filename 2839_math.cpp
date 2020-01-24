#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int minimum = 2*n+1;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			if((5*i)+(3*j) == n)
				if(i+j<minimum)
					minimum = i+j;
	if(minimum == 2*n+1)
		cout << -1;
	else
		cout << minimum;
	return 0;
}
