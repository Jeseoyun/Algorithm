/*
 * lostBracket.cpp
 * 백준 1541_잃어버린 괄호
 *
 *  Created on: 2019. 12. 25.
 *      Author: 제서윤
 */


#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;

	int num[51] = {};
	char opr[51] = {};
	int current = 0;
	int index = 0;
	int j=1;

	for(int i=0; i<=(int)s.length(); i++){
		if(s[i]=='-' || s[i]=='+' || s[i]==NULL){
			//cout << "opr : " << s[i] << endl;
			opr[index] = s[i];
			num[index] = stoi(s.substr(current, j));
			//cout << "opr[" << index << "] : " << opr[index] << endl;
			//cout << "num[" << index << "] : " << num[index] << endl;
			j=1;
			index++;
			current = i+1;
		}
		j++;
	}

	bool minus = false;
	int result = num[0];
	int k=1;

	for(int i=0; i<index; i++){
		if(opr[i]=='-')
			minus = true;
		if(minus){
			result -= num[k];
			k++;
			//cout << "result : " << result << endl;
		}
		else{
			result += num[k];
			k++;
			//cout << "result : " << result << endl;
		}
	}
	cout << result;
	return 0;
}
