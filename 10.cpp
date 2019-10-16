#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector<int> v(5);

	v[0]=10;
	v[1]=20;
	v[2]=30;
	v[3]=40;
	v[4]=50;

	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	vector<int>().swap(v);

	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	

	return 0;

}
