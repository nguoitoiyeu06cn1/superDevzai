#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
	string s ;
    cin >> s;
	//Khai báo stringstream ss và gán cho nó nội dung của s
	stringstream ss(s);
	string word;
	int dem = 0;
	while(ss >> word){
		++dem;
		cout << "Tu thu " << dem << " tach duoc : " << word << endl;
	}
	return 0;
}