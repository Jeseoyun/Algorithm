/*
 * balancedWorld.cpp
 * 백준 4949_균형잡힌 세상
 *
 *  Created on: 2020. 1. 13.
 *      Author: 제서윤
 */


#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
	while(1){
		stack<char> galho;
		string s;
		getline(cin, s);
		if(s==".")
			return 0;
		for(int i=0; i<(int)s.length(); i++){
			if(s[i] == '(')
				galho.push(s[i]);
			else if(s[i] == '[')
				galho.push(s[i]);
			else if(s[i] == ')'){
				if(galho.empty()){
					cout << "no" << endl;
					break;
				}
				else{
					if(galho.top()=='(')
						galho.pop();
					else{
						cout << "no" << endl;
						break;
					}
				}
			}
			else if(s[i] == ']'){
				if(galho.empty()){
					cout << "no" << endl;
					break;
				}
				else{
					if(galho.top()=='[')
						galho.pop();
					else{
						cout << "no" << endl;
						break;
					}
				}
			}
			else if(i==(int)s.length()-1){
				if(galho.empty())
					cout << "yes" << endl;
				else{
					cout << "no" << endl;
				}
			}
		}
	}
	return 0;
}
