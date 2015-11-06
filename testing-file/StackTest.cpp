#include <iostream>
#include "../header-file/Stack.h"

int main()
{
	Stack<int> stack(10);
	stack.push(10);
	stack.push(120);
	stack.push(121);
	stack.push(122);
	stack.push(123);
	stack.push(124);
	stack.push(125);
	stack.push(126);
	stack.push(127);
	stack.push(128);
	stack.push(129);
	stack.push(130);
	stack.push(131);
	stack.push(132);
	stack.push(133);
	int* returnContent = stack.returnAll();
	int length = stack.getLength();
	for(int i = 0;i < length;i++)
		std::cout<<returnContent[i]<<"  ";
	std::cout<<stack.pop()<<std::endl;
	std::cout<<stack.pop()<<std::endl;
	std::cout<<stack.pop()<<std::endl;
	std::cout<<stack.pop()<<std::endl;
	std::cout<<stack.pop()<<std::endl;
	std::cout<<stack.pop()<<std::endl;
	std::cout<<stack.pop()<<std::endl;
	std::cout<<stack.pop()<<std::endl;
	std::cout<<stack.pop()<<std::endl;
	std::cout<<stack.pop()<<std::endl;
	std::cout<<stack.pop()<<std::endl;
	std::cout<<stack.pop()<<std::endl;
	std::cout<<stack.pop()<<std::endl;
	return 0;
}	
