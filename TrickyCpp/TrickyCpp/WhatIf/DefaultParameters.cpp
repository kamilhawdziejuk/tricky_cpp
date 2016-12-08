#include <memory>
#include <iostream>

using namespace std;

class DefaultParameters
{
	class A {
	public:

		virtual void f(int nr = 1)
		{
			cout << nr << endl;
		}
	};

	class B : public A {
	public:
		virtual void f(int nr = 2)
		{
			cout << nr << endl;
		}
	};

public:
	void Test()
	{
		shared_ptr<A> a(new B);		
		a->f(); //will fire B::f() but with nr==1
	}

};