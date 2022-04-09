#include <iostream>

using namespace std;

// Forward declaration of Number and Coord3D
class Object;
class Coord3D;
class Number;

// The Object ADT
class Object {
  public:
    virtual Object *multiply(const Object *obj) const = 0;
    virtual void print() = 0;
    virtual ~Object() {}
};

class Number : public Object {
  public:
		int num;

		// default constructor
		Number()
		: num{0}
		{
		}

		// parameterised constructor
		Number(int num)
		: num{num}
		{
		}

		// destructor
		~Number() {
		}

		/**
		* if other is a Number, then this should return a Number
		* if other is a Coord3D, then this should return a Coord3D
		* Hint: typeid(var) might be helpful operator to know the type of an object at runtime
		*/

		Object *multiply(const Object *other) const;

		// prints the object to stdout
		void print() 
		{
		std::cout << "num = " << num << std::endl;
		}
	};

	class Coord3D : public Object {
	public:
		int x, y, z;

		// default constructor
		Coord3D()
		: x{0}, y{0}, z{0}
		{
		}

		// parameterised constructor
		Coord3D(int x1, int y1, int z1)
		: x{x1}, y{y1}, z{z1}
		{
		}

		// destructor
		~Coord3D() {
		}

		// This should return a Coord3D
		Object *multiply(const Object *other) const;

		// prints the object to stdout
		void print() {
			std::cout <<
			"x = " << x << ", " <<
			"y = " << y << ", " <<
			"z = " << z << std::endl;
		}
	};

	// •• mutliplies this 'Number' with whatever *other is
	Object *Number::multiply(const Object *other) const {
	if(typeid(*other) == typeid(Number)) {
		const Number *number = (Number *) other;
		//••• dynamically create a new object 'Number' to hold results of computation •••
		// ◘◘◘ If its (num * num) we will return a num ◘◘◘
		return new Number(num * number->num);

	} else if(typeid(*other) == typeid(Coord3D)) {
		const Coord3D *coord3D = (Coord3D *) other;
		//••• dynamically create a new object 'Coord3d' to hold results of computation •••
		// ◘◘◘ If we have a (num * Coord3D) than we multiply each component to 'Coord3D'
		return new Coord3D(
			num * coord3D->x,
			num * coord3D->y,
			num * coord3D->z
		);
	}
	}

	// •• mutliplies this 'Coord3D' with whatever *other is
	Object *Coord3D::multiply(const Object *other) const 
	{
		if(typeid(*other) == typeid(Number)) {
			const Number *number = (Number *) other;

			//••• dynamically create a new object 'Coord3d' to hold results of computation •••
			// ◘◘◘ If we have a (num * Coord3D) than we multiply each component to 'Coord3D'
			return new Coord3D(
				number->num * x,
				number->num * y,
				number->num * z
			);
		} else if(typeid(*other) == typeid(Coord3D)) 
		{
			const Coord3D *coord3D = (Coord3D *) other;

			//••• dynamically create a new object 'Coord3d' to hold results of computation •••
			// ◘◘◘ If its (Coord3D * Coord3D) we will return a Component-wise multiplication ◘◘◘
			return new Coord3D(
				x * coord3D->x,
				y * coord3D->y,
				z * coord3D->z
			);
		}
	}	