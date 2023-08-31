#ifndef __STAKC_H__
#define __STACK_H__

template <class T>
class Stack
{
	private:
		enum {MAX = 10};
		T items[MAX];
		int top;
	public:
		Stack();
		bool isempty() const;
		bool isfull() const;
		bool push(T &item);
		bool pop(T &item);
};

template <class T>
Stack<T>::Stack()
{
	top = 0;
}

template <class T>
bool Stack<T>::isempty() const
{
	return top == 0;
}

template <class T>
bool Stack<T>::isfull() const
{
	return top == MAX;
}

template <class T>
bool Stack<T>::push(T &item)
{
	if(top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

template <class T>
bool Stack<T>::pop(T &item)
{
	if(top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}


#endif
