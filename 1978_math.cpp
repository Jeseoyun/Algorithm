/*
 * findSosu.cpp
 * 백준 1978번_소수찾기
 *
 *  Created on: 2020. 01. 28.
 *      Author: 제서윤
 */


#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int count = 0;
	while(n--){
		int num;
		bool sosu = true;
		cin >> num;
		if(num==1)
			sosu = false;
		for(int i=2; i<101; i++)
			if(num>i && num%i==0)
				sosu = false;
		if(sosu)
			count++;
	}
	cout << count;
	return 0;
}
