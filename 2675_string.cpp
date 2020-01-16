#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	
	for(int i=0; i<T; i++){
		int n;
		string str;

		cin >> n >> str;
		
		for(int j=0; j<str.length(); j++){
			for(int k=0; k<n; k++)
				cout << str[j];
		}
		cout << endl;			
	}
	return 0;
}
