/*
 * makeOne.cpp
 * 백준 1463번_1로 만들기
 *
 *  Created on: 2019. 12. 24.
 *      Author: 제서윤
 */


#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int calculated[n+1] = {};
	calculated[1] = 0;
	calculated[2] = 1;
	calculated[3] = 1;

	for(int i=4; i<=n; i++){
		if(i%3==0)
			calculated[i] = min(calculated[i/3]+1, calculated[i-1]+1);
		else if(i%2==0)
			calculated[i] = min(calculated[i/2]+1, calculated[i-1]+1);
		else
			calculated[i] = calculated[i-1]+1;
	}

	cout << calculated[n];
	return 0;
}
