/*
 * meetingRoom.cpp
 * 백준 1931번_회의실배정
 *
 *  Created on: 2019. 12. 23.
 *      Author: 제서윤
 */

#include <iostream>
#include <algorithm>
using namespace std;

struct Time{
	unsigned int start;
	unsigned int finish;
};

bool s_compare(Time t1, Time t2){
	return t1.start < t2.start;
}

bool f_compare(Time t1, Time t2){
	return t1.finish < t2.finish;
}

int main(){
	int n;
	cin >> n;

	Time meeting[n];
	for(int i=0; i<n; i++)
		cin >> meeting[i].start >> meeting[i].finish;

	sort(meeting, meeting+n, f_compare);

	unsigned int current = 0;
	int count = 0;

	for(int i=0; i<n; i++){
		if(current <= meeting[i].start){
			int j = i+1;
			while((j<n) && (meeting[i].finish == meeting[j].finish)){
				j++;
			}
			sort(meeting+i, meeting+j, s_compare);
			current = meeting[i].finish;
			count++;
		}
	}

	cout << count;

	return 0;
}
