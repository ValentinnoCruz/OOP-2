 #include <iostream>

using namespace std;

//Forward declaration of Number and Coord3D
class Object;
class Coord3D;
class Number;

//The Object ADT
class Object {
public:
	virtual Object* multiply ( const Object* obj ) const = 0;
	virtual void print() = 0;
	virtual ~Object() {}
};

class Number : public Object{
public:
	int num;

	Number();

	Number(int);

	~Number();

	/* 
	 * if other is a Number, then this should return a Number
	 * if other is a Coord3D, then this should return a Coord3D
	 * Hint: typeid(var) might be a helpful operator to know the type of an object at runtime
	 */ 
	Object* multiply(const Object* other) const;

	void print();
};


class Coord3D : public Object {
public:
	int x, y, z;

	Coord3D();

	Coord3D(int x1, int y1, int z1);

	~Coord3D();

	// This should return a Coord3D
	Object* multiply(const Object* other) const;

	void print();
};

