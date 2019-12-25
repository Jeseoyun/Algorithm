/*
 * ATM.cpp
 * 백준 11399번_ATM
 *
 *  Created on: 2019. 12. 25.
 *      Author: 제서윤
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;

	int waiting[n];
	for(int i=0; i<n; i++)
		cin >> waiting[i];

	sort(waiting, waiting+n); //기다린 시간이 최소가 되기 위해서는 시간이 가장 적게 걸리는 사람이 먼저 돈을 인출해야함

	int sum = 0;
	int result = 0;

	for(int i=0; i<n; i++){
		sum += waiting[i];
		result += sum;
	}

	cout << result;
	return 0;
}
