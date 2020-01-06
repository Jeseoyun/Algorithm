/*
 * statistics.cpp
 * 백준 2108번_통계학_미완성
 *
 *  Created on: 2020. 1. 6.
 *      Author: 제서윤
 */


#include <iostream>
#include <sort>
using namespace std;

int main(){
	int n;	//홀수
	cin >> n;
	
	int num[n];
	for(int i=0; i<n; i++)
		cin >> num[i];
	
	sort(num, num+n);
	
	int mean;	//산술평균
	for(int i=0; i<n; i++)
		mean += num[i];
	cout << mean*(10.0)/n/10 << endl;
	
	int mid;	//중앙값
	mid = num[(n-1/2)];
	cout << mid << endl;
	
	int mode=num[0];	//최빈값
	int count=1;
	for(int i=0; i<n-1; i++){
		if(num[i]==num[i+1])
			count++;
		if(count>mode){
			mode = i;
			count = 1;
		}
	}
	
	int range;	//범위
	

	return 0;
	
}

