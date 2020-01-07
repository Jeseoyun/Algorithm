/*
 * wordSorting.cpp
 * 백준 1181_단어 정렬
 *
 *  Created on: 2020. 1. 7.
 *      Author: 제서윤
 */


#include <iostream>
#include <algorithm>
using namespace std;

bool compare(const string &s1, const string &s2){
	if(s1.length() == s2.length())
		return s1 < s2;
	return s1.length() < s2.length();
}

int main(){
	int n;
	cin >> n;

	string words[n];
	for(int i=0; i<n; i++)
		cin >> words[i];
	
	sort(words, words+n, compare);

	for(int i=0; i<n; i++)
		if(i!=n)
			if(words[i]!=words[i+1])
				cout << words[i] << "\n";
	return 0;
}
