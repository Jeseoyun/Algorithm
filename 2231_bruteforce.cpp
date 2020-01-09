/*
 * decomposition.cpp
 * 백준 2231_분해합
 *
 *  Created on: 2020. 1. 9.
 *      Author: 제서윤
 */


#include <iostream>
#include <string>
#define MAX 1000000
using namespace std;
int main(){
	int n;
	cin >> n;
	int c=1;	//생성자
	while(c<=MAX){
		int temp = c;
		int sum = c;
		while(temp){
			sum += temp%10;
			temp /= 10;
		}
		if(sum==n){
			cout << c;
			return 0;
		}
		c++;
	}
	cout << 0;
	return 0;
}

