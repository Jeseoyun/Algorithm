/*
 * pointSort.cpp
 * 백준 11650_좌표 정렬하기
 *
 *  Created on: 2020. 1. 7.
 *      Author: 제서윤
 */


#include <iostream>
#include <algorithm>
using namespace std;

struct Point{
	int x;
	int y;
};

bool compare(const Point &p1, const Point &p2){
	if(p1.x == p2.x)
		return p1.y < p2.y;
	return p1.x < p2.x;
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;

	Point p[n];
	for(int i=0; i<n; i++)
		cin >> p[i].x >> p[i].y;

	sort(p, p+n, compare);

	for(int i=0; i<n; i++)
		cout << p[i].x << " " << p[i].y << "\n";

	return 0;
}

