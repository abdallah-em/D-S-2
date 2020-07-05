#include <iostream>
#include"Stack.h"
using namespace std;

int main()
{
	Stack st;
	st.push(10);
	st.push(15);
	st.push(20);
	st.push(25);
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();

	if (st.empty() == true)
	{
		cout << "5lawees" << endl;
	}
	else
	{
		st.pop();
		cout << st.top();
	}
	
	return 0;
}
