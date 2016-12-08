#include <memory>
#include <iostream>

using namespace std;

class VirtualMethodInConstr
{
	class A {
	public:

		A()
		{
			f();
		}

		virtual void f()
		{
			cout << "A" << endl;
		}
	};

	class B : public A {
	public:
		virtual void f()
		{
			cout << "B" << endl;
		}
	};

public:
	void Test()
	{
		shared_ptr<A> a(new B);
		a->f(); //will print "A" only
	}

};