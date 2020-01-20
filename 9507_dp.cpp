/*
 * koong.cpp
 * 백준 9507번_Generations of Tribbles
 *
 *  Created on: 2020. 1. 20.
 *      Author: 제서윤
 */


#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long koong[68]={};
	koong[0] = 1;
	koong[1] = 1;
	koong[2] = 2;
	koong[3] = 4;
	for(int i=4; i<68; i++)
		koong[i] = koong[i-1]+koong[i-2]+koong[i-3]+koong[i-4];
	for(int i=0; i<t; i++){
		int n;
		cin >> n;
		cout << koong[n] << endl;
	}
	return 0;
}
