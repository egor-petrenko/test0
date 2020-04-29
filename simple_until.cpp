#include<iostream>
using namespace std;
int main() {
	int a, b;
	bool l = true;
	cin >> a >> b;
	bool simple [b-1];
	for (int i = 0; i<b-1; i++) {
		simple[i] = false;
	}
	for (int i = 0; (i+2)*(i+2)<=b; i++) {
		if (simple[i]) {
			continue;
		}
		for (int j = (i+2)*(i+2); j-2<=b; j=j+i+2){
			simple[j-2]=true;
		}
	}
	for (int i = a-2; i<b-1; i++) {
		if (simple[i]==false) {
			cout << i+2 << endl;
			l = false;
		}
	}
	if (l) {
		cout << "Absent" << endl;
	}
}
