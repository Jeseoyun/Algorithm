/*
 * sortInside.cpp
 * 백준 1427_소트인사이드
 *
 *  Created on: 2020. 1. 7.
 *      Author: 제서윤
 */


#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string s;
	cin >> s;

	int num[s.length()];
	for(int i=0; i<(int)s.length(); i++)
		num[i] = s[i]-48;
    
	sort(num, num+s.length());
  
	for(int i=(int)s.length()-1; i>=0; i--)
		cout << num[i];
    
	return 0;
}
