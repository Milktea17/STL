//list의 remove_if()

#include <iostream>
#include <list>
using namespace std;

bool Predicate(int n)
{
	return (10 <= n && n <= 30);
}

int main(){
	list<int> lt;

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);
	lt.push_back(10);

	list<int>::iterator iter = lt.begin();
	for(iter=lt.begin();iter!=lt.end();iter++)
		cout<< *iter << ' ';
	cout << endl;

	lt.remove_if(Predicate);
	for(iter=lt.begin();iter!=lt.end();iter++)
		cout<< *iter << ' ';
	cout << endl;


	return 0;
}
