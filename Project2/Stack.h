
#pragma once
#include <iostream>

using namespace std;

class Stack
{
private:
	int* stack;
	int size;
	int number;
public:
	Stack(int _size = 20) {
		size = _size;
		number = 0;
		stack = new int[size];
	}

	Stack(const Stack& other)
		: stack(other.stack),
		size(other.size),
		number(other.number)
	{
	}

	Stack(Stack&& other)
		: stack(other.stack),
		size(other.size),
		number(other.number) {
		other.stack = nullptr;
		other.size = 0;
		other.number = 0;
	}

	~Stack() {
		delete[] stack;
	}

	void Swap(Stack& secondStack);

	void resize();

	void Push(int element);

	int Top();

	bool IsEmpty();

	void Pop();

	int Size();

	void Clear();


	Stack& operator=(const Stack& other){
		if (this == &other)
			return *this;
		stack = other.stack;
		size = other.size;
		number = other.number;
		return *this;
	}

	Stack& operator=(Stack&& other) {
		if (this == &other)
			return *this;
		stack = other.stack;
		size = other.size;
		number = other.number;
		other.stack = nullptr;
		other.size = 0;
		other.number = 0;
		return *this;
	}

	friend bool operator==(const Stack& lhs, const Stack& rhs) {
		return lhs.stack == rhs.stack
			&& lhs.size == rhs.size
			&& lhs.number == rhs.number;
	}

	friend bool operator!=(const Stack& lhs, const Stack& rhs) {
		return !(lhs == rhs);
	}
};
