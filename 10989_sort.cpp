/*
 * countingSort.cpp
 * 백준 10989번_수 정렬하기3(counting sort)
 *
 *  Created on: 2020. 1. 5.
 *      Author: 제서윤
 */


#include <iostream>
#define MAX 10001
using namespace std;

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int count[MAX]={};
	for(int i=0; i<n; i++){
		int input;
		cin >> input;
		count[input]++;
	}

	for(int i=0; i<MAX; i++){
		if(count[i])
			for(int j=0; j<count[i]; j++)
				cout << i << "\n";
	}
	return 0;
}
