/*
 * add123.cpp
 * 백준 9095번_1,2,3 더하기
 *
 *  Created on: 2020. 1. 20.
 *      Author: 제서윤
 */


#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;

	int sum[11]={};
	sum[1] = 1;
	sum[2] = 2;
	sum[3] = 4;
	for(int i=4; i<11; i++)
		sum[i] = sum[i-1]+sum[i-2]+sum[i-3];

	for(int i=0; i<T; i++){
		int n;
		cin >> n;
		cout << sum[n] << endl;
	}
	return 0;
}
