/*
 * zero.cpp
 * 백준 10773_제로
 *
 *  Created on: 2020. 1. 11.
 *      Author: 제서윤
 */


#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<int> s;
	int n;
	cin >> n;

	int loop = 0;
	int sum = 0;

	while(loop != n){
		int num;
		cin >> num;
		if(num == 0){
			sum -= s.top();
			s.pop();
		}
		else{
			sum += num;
			s.push(num);
		}
		loop++;
	}

	cout << sum;
	return 0;
}

