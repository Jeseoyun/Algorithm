/*
 * stableSort.cpp
 * 백준 10814_나이순 정렬(stable sorting)
 *
 *  Created on: 2020. 1. 7.
 *      Author: 제서윤
 */


#include <iostream>
#include <algorithm>
using namespace std;

struct id{
	int age;
	string name;
	int k;	//가입한 순서
};

bool compare(const id &i1, const id &i2){
	if(i1.age == i2.age)
		return i1.k < i2.k;
	return i1.age < i2.age;
}
int main(){
	int n;
	cin >> n;

	id signIn[n];
	for(int i=0; i<n; i++){
		cin >> signIn[i].age >> signIn[i].name;
		signIn[i].k = i;
	}

	sort(signIn, signIn+n, compare);

	for(int i=0; i<n; i++)
		cout << signIn[i].age << " " << signIn[i].name << "\n";

	return 0;
}

