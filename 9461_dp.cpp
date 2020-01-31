/*
 * polyhedron.cpp
 * 백준 9461번_파도반 수열
 *
 *  Created on: 2020. 2. 1.
 *      Author: Jeseoyun
 */


#include <iostream>
using namespace std;
int main(){
	long long a[101]={};  //정수형범위 초과
	a[0] = 1;
	a[1] = 1;
	a[2] = 1;
	a[3] = 2;
	a[4] = 2;
	for(int i=5; i<101; i++)
		a[i] = a[i-1]+a[i-5];
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << a[n-1] << "\n";
	}
	return 0;
}
