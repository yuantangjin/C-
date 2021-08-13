//#include<iostream>
//#include<string>
//#include"Person.hpp"
//using namespace std;
////template<typename T1,typename T2>
////class Person {
////public:
////	T1 name;
////	T2 age;
////	Person(T1 name, T2 age) {
////		this->name = name;
////		this->age = age;
////	}
////	void fun();
////};
////template<typename T1, typename T2>
////void Person<T1,T2>::fun() {
////	cout << "姓名：" << this->name << "\t年龄：" << this->age << endl;
////}
//template<typename T1>
//class Student {
//public:
//	Student():name("asd",1){
//	}
//	T1 name;
//	void fun() {
//		cout << "Student的fun函数" << endl;
//	}
//};
//
//
//void fun(Person<string, double>& p) {
//	p.fun();
//}
//template<typename T1,typename T2>
//void fun1(Person<T1, T2>& p) {
//	p.fun();
//}
//template<typename T1>
//void fun2(T1& p) {
//	p.fun();
//}
//int main() {
//	Student<Person<string, int>> p1;
//	fun2(p1);
//	//Student stu;
//	//fun2(stu);
//	//Person<string, double> p1("小鲸鱼", 1123);
//	//p1.fun();
//	////cout << p1.name << endl << p1.age << endl;
//	//fun2(p1);
//	system("pause");
//	return 0;
//}