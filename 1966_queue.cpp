/*
 * printerQ.cpp
 * 백준 1966번_프린터 큐
 *
 *  Created on: 2020. 1. 18.
 *      Author: 제서윤
 */

//..미완성..
#include <iostream>
#include <queue>
using namespace std;

int main(){
	int T;
	cin >> T;

	while(T--){
		int n, m;
		cin >> n >> m;

		queue<pair<int, int>> q;
		priority_queue<int> pq;
		for(int i=0; i<n; i++){
			int input;
			cin >> input;
			q.push({i, input});	//i: 인덱스, input: 우선순위
			pq.push(input);
		}
		while(1){
			if(pq.top()>q.front()){
				pair<int, int> temp = q.front();
				q.pop();
				q.push(temp);
			}
			else{
				
			}
		}

	}

	return 0;
}
