#pragma once
#ifndef MAX_HEAP
#include<vector>
class MaxHeap {
public:
	MaxHeap();
	MaxHeap(std::vector<int>& heap1);
	int Parent(int i) { return (i - 1) / 2; }
	int Left(int i) { return 2 * (i + 1) - 1; }
	int Right(int i) { return 2 * (i + 1); }

	void MaxHeapify(int i);
	void BuildMaxHeap();
	static void HeapSort(std::vector<int>& heap);
private:
	std::vector<int>* heap;
	int heapSize;
};

#endif // !MAX_HEAP
