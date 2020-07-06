#include <iostream>
#include<string>

#include"Queue.h"
#include"Queue.cpp"

#include<stack>
#include<queue>


using namespace std;

int main()
{      
	// mesh 3ayez y run  ??   Queue class :

	Queue<string> aa;
	aa.push("Cycle");
    aa.push("Eight");
	aa.push("Route");
    aa.push("Academy");


	cout << aa.getsize() << endl << aa.front() << endl;
	
	aa.pop();      aa.pop();
	cout << aa.front() << ' ' << aa.back() << endl;


	

	//cout << aa.tail();
	



	/*
	// queue by c++ library :

	queue<char> ch;
	ch.push('M'); 
	ch.push('E');
	ch.push('A');
	ch.push('B');

	cout << ch.back() << ' ' << ch.front() << endl;      ch.pop();    cout << ch.front() << endl;
	*/


	/*
	// stack by c++ library :

	stack<float> sa;
	sa.push(10.5);
	sa.push(15.5);
	sa.push(20.5);
	 
	cout << sa.top() << endl;     sa.pop();     cout << sa.top() << endl;
	*/

	/*
	// Test template :

	Stack <string>  sts;
	sts.push("Abdalalh");
	sts.push("Emad");
	sts.push("Mohamed");

	cout << sts.top() << endl << endl;

	sts.pop();   sts.pop();

	cout << sts.top() << endl;
		
	<<<<<------------------------------------------->>>>>

	Stack<int> stt;
	stt.push(100);
	stt.push(150);
	stt.push(200);

	cout << " Stack Size is : " <<  stt.getSize() <<  endl <<" Stack top is  : " << stt.top() << endl;

	stt.pop();

	cout << " Stack top is  : " << stt.top() << endl;
	*/


    /*
     // Another way to test Stack :
	Stack sst;
	sst.push(2);
	sst.push(4);
	sst.push(6);
	 
	while (sst.empty() == false)
	{
		cout << sst.top() << endl;
		sst.pop();
	}
	*/

	
	/*
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
	*/
	
	return 0;
}
