//일반 반복자와 상수 반복자의 차이

#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter = v.begin();
	vector<int>::const_iterator citer = v.begin();

	cout << *iter << endl;
	cout << *citer << endl;

	cout << *++iter << endl;
	cout << *++citer << endl;

	*iter = 100;
	//*citer = 100; //상수반복자는 가리키는 원소 변경 불가능
	
	return 0;
}
