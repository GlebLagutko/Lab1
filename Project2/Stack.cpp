#include <iostream>
#include "Stack.h"

void Stack::resize() {
	int newSize = size * 2;
	int * newStack = new int[newSize];


	for (int i = 0; i < size; ++i) {
		newStack[i] = stack[i];
	}
	delete[] stack;
	stack = newStack;
	size = newSize;
}

void Stack::Push(int element) {
	if (number + 1 == size) {
		resize();
	}
	stack[number++] = element;
}

int Stack::Top() {
	if (number <= 0) {
		throw std::out_of_range("stack is empty");
	}
	else {
		return stack[number - 1];
	}
}

void Stack::Pop() {
	if (number <= 0) {
		throw std::out_of_range("stack is empty");
	}
	else {
		--number;
	}
}

bool Stack::IsEmpty() {
	if (number <= 0)
		return true;
	else
		return false;

}

int Stack::Size() {
	return number;
}

void Stack::Clear() {
	int new_size = 20;
	int * new_stack = new int[new_size];
	delete[] stack;
	stack = new_stack;
	size = new_size;
	number = 0;
}

void Stack::Swap(Stack& secondStack) {
	//int* newStack = new int[secondStack

	
}
