#include"MaxHeap.h"

MaxHeap::MaxHeap() {
}

MaxHeap::MaxHeap(std::vector<int>& heap) {
	this->heap = &heap;
	this->BuildMaxHeap();
	this->heapSize = heap.size() - 1;
}

void MaxHeap::MaxHeapify(int i) {
	//递归版
	int l = Left(i);
	int r = Right(i);
	int largest = i;
	if (l < this->heapSize && (*heap)[l] >(*heap)[i]) {
		largest = l;
	}
	if (r < this->heapSize && (*heap)[r] >(*heap)[largest]) {
		largest = r;
	}
	if (largest != i) {
		auto temp = (*heap)[i];
		(*heap)[i] = (*heap)[largest];
		(*heap)[largest] = temp;
		MaxHeapify(largest);
	}
	//迭代版
	/*int l = Left(i);
	int r = Right(i);
	int largest = l;
	while (largest != i) {
		if (l < heap.size() && heap[l] > heap[i]) {
			largest = l;
		}
		if (r < heap.size() && heap[r] > heap[largest]) {
			largest = r;
		}
		if (largest != i) {
			auto temp = heap[i];
			heap[i] = heap[largest];
			heap[largest] = temp;
			l = Left(largest);
			r = Right(largest);
			i = largest;
			largest = l;
		}
		else break;
	}*/
}

void MaxHeap::BuildMaxHeap() {
	int n = heap->size() / 2;
	for (int i = n; i >= 0; --i) {
		MaxHeapify(i);
	}
}

void MaxHeap::HeapSort(std::vector<int>& heap) {
	//堆排序的两个步骤：
	// 1.建最大堆
	MaxHeap maxHeap(heap);
	// 2.排序
	int& heapSize = maxHeap.heapSize;
	while (heapSize) {
		int temp = heap[heapSize];
		heap[heapSize] = heap[0];
		heap[0] = temp;
		maxHeap.MaxHeapify(0);
		--heapSize;
	}
}