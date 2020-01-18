/*
 * queue2.cpp
 * 백준 18258번_큐 2
 *
 *  Created on: 2020. 1. 17.
 *      Author: 제서윤
 */


#include <iostream>
#include <queue>
#define MAX 2000000
using namespace std;


int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	queue<int> q;
	while(n--){
		string command;
		cin >> command;

		if(command == "push"){
			int item;
			cin >> item;
			q.push(item);
			continue;
		}
		else if(command == "pop"){
			if(q.empty())
				cout << -1;
			else{
				cout << q.front();
				q.pop();
			}
		}
		else if(command == "size"){
			cout << q.size();
		}
		else if(command == "empty"){
			cout << q.empty();
		}
		else if(command == "front"){
			if(q.empty())
				cout << -1;
			else
				cout << q.front();
		}
		else if(command == "back"){
			if(q.empty())
				cout << -1;
			else
				cout << q.back();
		}
		cout << "\n";
	}
	return 0;
}
