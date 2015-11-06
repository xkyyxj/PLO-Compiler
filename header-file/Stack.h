#ifndef STACK_H_
#define STACK_H_

template <class T>
class Stack
{
private:
	int realLength;
	int storageLength;
	T* content;
private:
	void extendStorage();
public:
	Stack(int mLength = 10);
	~Stack();
	void push(T element);
	T pop();
	T* returnAll();
	int getLength();
};
#endif

