#include <memory>
#include <iostream>

using namespace std;

class PrivateInheritance
{
	class A {
	public:
		virtual void f(const A& a)
		{
			cout << "A" << endl;
		}
	};

	class B : private A {
	public:
		virtual void f(const A& a)
		{
			cout << "B" << endl;
		}
	};

public:
	void Test()
	{
		B a1;
		B a2;

		//a1.f(a2); compile error: private inheritance means is-implemented-int-terms-of NOT is-a
	}

};