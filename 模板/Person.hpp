#pragma once
#include<iostream>
using namespace std;
template<typename T1,typename T2>
class Person
{
public:
	T1 name;
	T2 age;
	Person(T1 name, T2 age) {
		this->name = name;
		this->age = age;
	}
	void fun();
	Person();
	~Person() {};
	
};
template<typename T1, typename T2>
void Person<T1, T2>::fun() {
	cout << name << endl << age << endl;
	cout << typeid(name).name() << endl;
	cout << typeid(age).name() << endl;
}
