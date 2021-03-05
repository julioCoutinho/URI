#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vet;
	int a,b,c;
	cin >> a >> b >> c;
	vet.push_back(a);
	vet.push_back(b);
	vet.push_back(c);
	vector<int> clone;
	clone = vet;

	sort(vet.begin(),vet.end());

	for (vector<int>::iterator it=vet.begin(); it!=vet.end(); ++it)
    	cout << *it << endl;

	cout << endl;
	
	for (vector<int>::iterator it=clone.begin(); it!=clone.end(); ++it)
    	cout << *it << endl;	


	
	return 0;
}