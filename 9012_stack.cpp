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

	stack<char> galho;
	for(int i=0; i<T; i++){
		string s;
		cin >> s;
		for(int j=0; j<s.length(); j++){
			if(s[j]=='(')
				galho.push(s[j]);
			else if(s[j]==')'){
				if(galho.empty()){
					cout << "NO" << endl;
					break;
				}
				galho.pop();
			}
			else
				continue;
		}
	}

}

