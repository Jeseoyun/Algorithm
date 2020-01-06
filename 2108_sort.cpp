/*
 * statistics.cpp
 * 백준 2108번_통계학
 *
 *  Created on: 2020. 1. 6.
 *      Author: 제서윤
 */


#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
	int n;	//홀수
	cin >> n;

	int num[n];
	for(int i=0; i<n; i++)
		cin >> num[i];

	sort(num, num+n);

	int mean=0;	//산술평균
	for(int i=0; i<n; i++)
		mean += num[i];
	cout << floor(mean*(1.0)/n+0.5) << endl;

	int mid;	//중앙값
	mid = num[(n-1)/2];
	cout << mid << endl;

	int mode;	//최빈값
	int count[n] = {};
	for(int i=0; i<n; i++)
		count[i] = 1;
	for(int i=1; i<n; i++){
		if(num[i-1]==num[i])
			count[i] = count[i-1]+1;
	}
	int maxi = 0;
	for(int i=0; i<n; i++){
		if(count[i]>=maxi)
			maxi = count[i];
	}
	int loop = 0;
	for(int i=0; i<n; i++)
		if(count[i]==maxi){
			mode = num[i];
			loop++;
			if(loop == 2)
				break;
		}

	cout << mode << endl;

	int range;	//범위
	range = num[n-1]-num[0];
	cout << range;

	return 0;

}

