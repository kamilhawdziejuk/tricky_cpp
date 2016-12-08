#include <memory>
#include <iostream>

using namespace std;

class VirtualPrivateOverride
{
	class A {

	public :

		void f2()
		{
			f();
		}

	private:

		virtual void f()
		{
			cout << "A" << endl;
		}
	};

	class B : public A {
	private:
		virtual void f()
		{
			cout << "B" << endl;
		}
	};

public:
	void Test()
	{
		shared_ptr<A> a(new B);
		a->f2(); //will fire B::f(), we can override the private virtual function in derived class
	}

};