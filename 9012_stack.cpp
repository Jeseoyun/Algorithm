/*
 * galho.cpp
 * 백준 9012_괄호
 *
 *  Created on: 2020. 1. 12.
 *      Author: 제서윤
 */


#include <iostream>
#include <stack>
using namespace std;

int main(){
	int T;
	cin >> T;

	for(int i=0; i<T; i++){
		string s;
		cin >> s;
		stack<char> galho;
		for(int j=0; j<(int)s.length(); j++){
			if(s[j]=='('){
				galho.push(s[j]);
				//cout << "push " << endl;
				//cout << "stack size : " << galho.size() << endl;
			}
			else if(s[j]==')'){
				if(galho.empty()){
					galho.push('x');
					//여는괄호가 남아있지 않은 상황에서 닫는괄호가 나온 경우
					//임의로 x라는 문자를 스택에 추가한 후 반복문을 탈출하도록 하여 반복문 밖의 if문에서 스택이 비어있지 않은 경우로 들어가 NO를 출력
					break;
				}
				galho.pop();
				//cout << "pop" << endl;
				//cout << "stack size : " << galho.size() << endl;
			}
			else
				continue;
		}
		if(galho.empty())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		//cout << "---------------" << endl;
	}
	return 0;
}

