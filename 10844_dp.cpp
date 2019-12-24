/*
 * easyStair.cpp
 * 백준 10844번_쉬운 계단 수
 *
 *  Created on: 2019. 12. 24.
 *      Author: 제서윤
 */


#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int num[n+1][10] = {};

	for(int k=1; k<=9; k++)
		num[1][k] = 1;

	for(int i=2; i<=n; i++)
		for(int j=0; j<=9; j++){
			if(j==0)
				num[i][j] = num[i-1][j+1];
			else if(j==9)
				num[i][j] = num[i-1][j-1];
			else
				num[i][j] = num[i-1][j-1] + num[i-1][j+1];
			num[i][j] %= 1000000000;
		}

	long long result = 0;

	for(int j=0; j<=9; j++)
		result = (result + num[n][j]) % 1000000000;

	cout << result;
	return 0;
}
