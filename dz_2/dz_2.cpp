#include <iostream>
using namespace std;
void tt(int a[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int u = 0; u < 4; u++) {
			a[i][u] = rand() % 10;
		}
	}
}
void vv(int a[4][4]) {
	for (int i = 0; i < 4; i++) {
		cout << endl;
		for (int u = 0; u < 4; u++) {
			cout << a[i][u] << " ";
		}
	}
}
int main() {
	int a[4][4];
	tt(a);
	vv(a);
}