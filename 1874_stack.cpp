/*
 * stackSequence.cpp
 * 백준 1874번_스택 수열
 *
 *  Created on: 2020. 1. 15.
 *      Author: 제서윤
 */


#include <iostream>
#include <stack>
using namespace std;
int main(){
	int n;
	cin >> n;

	int seq[n];
	for(int i=n-1; i>=0; i--)
		cin >> seq[i];

	stack<int> s;

	for(int i=0; i<n-1; i++){
		if(seq[i] < seq[i+1]){

		}
	}


	return 0;
}

