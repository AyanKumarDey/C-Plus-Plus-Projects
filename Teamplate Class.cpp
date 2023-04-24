#include <iostream>
using namespace std;

template <class R> //template is used to use a class by multiple data types withour creating multiple class for particular datatypes
class Circle
{
private:
	R radius;
public:
	Circle (R radius);
	R area();
	R perimeter();
};

template <class R>
Circle<R>::Circle(R radius)
{
	this->radius = radius;
}

template<class R>
R Circle<R>::area()
{
	float pi = 3.14;
	return pi * (radius * radius);
}

template<class R>
R Circle<R>::perimeter()
{
	float pi = 3.14;
	return 2 * pi * radius;
}

int main()
{
	int n;
	cout << "Enter the radius of circle:" << endl;
	cin >> n;
	//Class with floating datatype.
	Circle<float> r(n);
	cout << "The area of circle is:" << r.area() << endl;
	cout << "The perimeter of circle is:" << r.perimeter() << endl;
	//Class with integer datatype.
	Circle<int> r1(n);
	cout << "The area of circle is:" << r1.area() << endl;
	cout << "The perimeter of circle is:" << r1.perimeter() << endl;
	return 0;
}
