#include <iostream>
using namespace std;

int main(){
	string s;
	cin >> s;
	
	int count[26]={};	//알파벳 개수 카운트
	
	for(int i=0; i<s.length(); i++){
		s[i] = toupper(s[i]);
		int a = s[i];
		count[a-65]++;
	}

	int maxi = 0;
	int index = 0;
	int same = 0;
	for(int i=0; i<26; i++){
		if(count[i] > maxi){
		maxi = count[i];
		index = i;
		}
	}
	for(int i=0; i<26; i++){
		if(count[i] == maxi){
			same++;
			if(same >= 2){
				cout << "?" << endl;
				return 0;
			}
		}
	
	}
	cout << (char)(index+65) << endl;
	return 0;
}
