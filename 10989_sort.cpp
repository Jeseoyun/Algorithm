/*
 * countingSort.cpp
 * 백준 10989번_수 정렬하기3(counting sort)_미완성(time out)
 *
 *  Created on: 2020. 1. 5.
 *      Author: 제서윤
 */


#include <iostream>
#define MAX 10000
using namespace std;

int main(){
	int n;
	cin >> n;

	int num[n];
	for(int i=0; i<n; i++)
		cin >> num[i];

	int count[MAX];
	for(int i=0; i<n; i++)
		count[num[i]-1]++;

	for(int i=0; i<MAX; i++){
		if(count[i] != 0)
			for(int j=0; j<count[i]; j++)
				cout << i+1;
	}

	return 0;
}
