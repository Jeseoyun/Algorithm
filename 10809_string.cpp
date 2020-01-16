#include <iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	int alphabet[26];
	for(int i=0; i<26; i++)
		alphabet[i] = -1;
	for(int i=0; i<(int)s.length(); i++)
		if(alphabet[s[i]-97]==-1)
			alphabet[s[i]-97] = i;
	for(int i=0; i<26; i++)
		cout << alphabet[i] << " ";
	return 0;
}
