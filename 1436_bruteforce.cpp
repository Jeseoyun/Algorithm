/*
 * moviedirector.cpp
 * 백준 1436_영화감독 숌
 *
 *  Created on: 2020. 01. 10.
 *      Author: 제서윤
 */


#include <iostream>
#include <string>
using namespace std;

bool find666(string num){
    for(int i=(int)num.length()-1; i>=2; i--)
        if(num[i]=='6' && num[i-1]=='6' && num[i-2]=='6')
            return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i=666; ; i++)
        if(find666(to_string(i))){
            count++;
            if(count == n){
                cout << i;
                break;
            }
        }
    return 0;
}
