/*
 * howmanywords.cpp
 * 백준 1152번_단어의 개수
 *
 *  Created on: 2020. 2. 1.
 *      Author: Jeseoyun
 */


#include <iostream>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	int count=0;
	for(int i=0; i<(int)s.length(); i++)
		if(s[i]==' ')
			count++;
	if(isspace(s[0]))
		count--;
	if(isspace(s[s.length()-1]))
		count--;
	cout << count+1;
	return 0;
}
