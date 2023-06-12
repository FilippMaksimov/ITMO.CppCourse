#include <iostream>

using namespace std;

class Stack
{
private:
	int* stack;
	int length;
public:
	Stack()
	{
		length = 10;
		stack = new int[length];
	}
	void reset()
	{
		length = 0;
		delete[] stack;
		stack = new int[length];
	}
	bool push(const int& num)
	{
		if (length == 10)
		{
			return false;
		}
		else
		{
			int* temp;
			temp = stack;
			stack = new int[length + 1];
			for (int i = 0; i < length; i++)
			{
				stack[i] = temp[i];
			}
			stack[length] = num;
			delete[]temp;
			length++;
			return true;
		}
	}
	int pop()
	{
		int r_val;
		if (length == 0)
		{
			cout << "Stack is empty" << endl;
			return 0;
		}
		r_val = stack[length-1];
		int* temp = new int[length];
		temp = stack;
		length--;
		stack = new int[length];
		for (int i = 0; i < length; i++)
		{
			stack[i] = temp[i];
		}
		delete[]temp;
		return r_val;
	}
	void print()
	{
		cout << "( ";
		for (int i = 0; i < length; i++)
		{
			cout << stack[i] << " ";
		}
		cout << ")" << endl;
	}
};

int main()
{
	Stack stack;
	stack.reset();
	stack.print();
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();
	stack.pop();
	stack.print();
	stack.pop();
	stack.pop();
	stack.print();
	return 0;
}