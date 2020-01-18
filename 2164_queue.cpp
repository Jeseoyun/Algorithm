/*
 * card2.cpp
 * 백준 2164_카드2
 *
 *  Created on: 2020. 1. 18.
 *      Author: 제서윤
 */


#include <iostream>
#include <queue>
using namespace std;

int main(){
	int n;
	cin >> n;

	queue<int> q;

	for(int i=1; i<=n; i++)
		q.push(i);

	while(q.size() != 1){
		q.pop();
		int temp = q.front();
		q.pop();
		q.push(temp);
	}

	cout << q.front();

	return 0;
}

