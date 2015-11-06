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
template <class T>
Stack<T>::Stack(int length)
{
	content = new T[length];
	storageLength = length;
	realLength = 0;
}

template <class T>
Stack<T>::~Stack()
{
	delete[] content;
}

template <class T>
void Stack<T>::extendStorage()
{
	T* temp = new T[storageLength * 2];
	for(int i = 0;i < storageLength;i++)
		temp[i] = content[i];
	delete[] content;
	content = temp;
	storageLength *= 2;
}

template <class T>
void Stack<T>::push(T element)
{
	if(realLength >= storageLength)
		extendStorage();
	content[realLength++] = element;	
}

template <class T>
T Stack<T>::pop()
{
	if(realLength >= 0)
		return content[--realLength];
}

template <class T>
T* Stack<T>::returnAll()
{
	T* returnContent = new T[realLength];
	for(int i = 0;i < realLength;i++)
		returnContent[i] = content[i];
	return returnContent;
}

template <class T>
int Stack<T>::getLength()
{
	if(realLength < 0)
		realLength = 0;
	return realLength;
}

#endif

