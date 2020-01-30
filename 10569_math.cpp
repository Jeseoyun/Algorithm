/*
 * polyhedron.cpp
 * 백준 10569번_다면체
 *
 *  Created on: 2020. 1. 31.
 *      Author: Jeseoyun
 */


#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int v, e;
		cin >> v >> e;  //꼭지점, 모서리
		cout << 2-v+e << endl;  // 꼭지점-모서리+면 = 2, 면 = 2-꼭지점+모서리
	}
	return 0;
}
