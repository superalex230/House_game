#include <iostream>
#include <map>
using namespace std;

int main() {
	map <int,int> mp;
	int a;
	cout << "Number of houses on the street : "; cin >> a;
	cout << "House number and quantity of people in it : " << endl;
	for (int b = 0;b < a;b++) {
		int c, d;
		cout << b << " House number: ";
		cin >> c;cin >> d;
		mp.insert(make_pair(c, d));
	}
	int e;
	cout << "Number of operations: ";
	cin >> e;
	for (int b = 0;b < e;b++){
		cout << b <<" ";
			int f;
			cin >> f;
			if (f == 0) {
				int g;
				cout << "Enter house number: ";
				cin >> f;
				if (mp.count(f)) {
					cout << "Number of people: " << mp[f] << endl;
				}
				else { 
					cout << "Non-existing house" << endl; 
				}
			}
			if (f == 1) {
				int h;
				cout << "House number to delete: " << endl; cin >> h;
				if ((mp.find(h)) == mp.end()) {
					cout << "Non-existing house" << endl;
				}
				else {
					mp.erase(mp.find(h));
					cout << "House deleted" << endl;
				}
			}
			if (a == 2) {
				int i, j;
				cout << "House number to add: ";cin >> i;
				cout << "Number of people in it: ";cin >> j;
				mp[i] = j;
			}
	}
}
