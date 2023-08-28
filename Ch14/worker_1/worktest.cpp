#include <iostream>
#include "worker.h"
#include <cstring>

const int SIZE = 3;

int main(void)
{
	// SingingWaiter ed;
	// Worker* pw = &ed;
	// Worker* pw1 = (Waiter*) &ed;
	// Worker* pw2 = (Singer*) &ed;
	// SingingWaiter(const Worker& wk, int p = 0, int v = Singer::other)
	// 			: Waiter(wk, p), Singer(wk, v) {}
	// SingingWaiter(const Worker& wk, int p = 0, int v = Singer::other)
	// 			: Worker(wk), Waiter(wk, p), Singer(wk, v) {}
	Worker *lolas[SIZE];

	int i;
	for(i = 0; i < SIZE; i++)
	{
		char choice;
		cout << "Enter the employee category: " << endl
		     << "w: waiter   s: singer   t: singing waiter   q: quit" << endl;
		cin >> choice;

		while(strchr("wstq", choice) == NULL)
		{
			cout << "Please enter a w, s, t, q: ";
			cin >> choice;
		}
		if(choice == 'q')
			break;
		switch(choice)
		{
			case 'w':
				lolas[i] = new Waiter;
				break;
			case 's':
				lolas[i] = new Singer;
				break;
			case 't':
				lolas[i] = new SingingWaiter;
				break;
		}
		while(cin.get() != '\n');
		lolas[i]->Set();
	}

	cout << "\nHere is your staff: " << endl;
	for(i = 0; i < SIZE; i++)
	{
		lolas[i]->Show();
		cout << endl;
	}

	for(i = 0; i < SIZE; i++)
		delete lolas[i];
	return 0;
}
