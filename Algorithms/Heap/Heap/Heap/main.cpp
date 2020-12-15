#include<iostream>
#include"MaxHeap.h"
using namespace std;

int main() {
	vector<int> list = { 9,8,7,6,5,4,3,2,1 };
	MaxHeap::HeapSort(list);
	for (auto it = list.begin(); it != list.end(); ++it) {
		cout << *it << endl;
	}
	return 0;
}