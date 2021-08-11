////#include<stdio.h>
//////namespace AA { int a; }
//////namespace AA { int b; }
//////namespace AA { int c; }
//////bool flag = false;
//////int d_fix[2] = { 1, 2 };
//////
//////void setFix(size_t i, const unsigned int& dof,
//////    const bool& flag) {
//////    // to set i^th bit as true of integer a,
//////    // a |= 1UL << (i % 8)
//////
//////    // to set i^th bit as false of integer a,
//////    // a &= ~(1UL << (i % 8))
//////
//////    flag ? (d_fix[i] |= 1UL << dof) : (d_fix[i] &= ~(1UL << dof));
//////};
//////int main() {
//////    setFix(1,0,flag);
//////	printf("AA命名空间中的成员有：(a,%d),(b,%d),(c,%d)",AA::a,AA::b,AA::c);
//////	return 0;
//////}
//#include <iostream>
//#include <memory>
//
//struct C { int* data; };
//
//int main() {
//    auto deleter = [](int* p) {
//        std::cout << "[deleter called]\n";
//        delete p;
//    };//Labmbda表达式
//
//    std::shared_ptr<int> p1;//默认构造，没有获取任何指针的所有权，引用计数为0
//    std::shared_ptr<int> p2(nullptr);//同1
//    std::shared_ptr<int> p3(new int);//拥有指向int的指针所有权，引用计数为1
//    std::shared_ptr<int> p4(new int, deleter);//作用同3，但是拥有自己的析构方法，如果指针所指向对象为复杂结构C
//                                      //结构C里有指针，默认析构函数不会将结构C里的指针data所指向的内存释放,这时需要自己使用自己的析构函数（删除器）
//    std::shared_ptr<int> p5(new int, [](int* p) {delete p;}, std::allocator<int>());//同4,但拥有自己的分配器（构造函数），如成员中有指针，可以为指针分配内存，原理跟浅拷贝和深拷贝类似
//    std::shared_ptr<int> p6(p5);//如果p5引用计数为0，则引用计数加1，否则同样为0
//    std::shared_ptr<int> p7(std::move(p6));//获取p6的引用计数，p6引用计数为0
//    std::shared_ptr<int> p8(std::unique_ptr<int>(new int));//p8获取所有权，引用计数设置为1
//    std::shared_ptr<C> obj(new C);
//    std::shared_ptr<int> p9(obj, obj->data);//同6一样，只不过拥有自己的删除器与4一样
//
//    std::cout << "use_count:\n";
//    std::cout << "p1: " << p1.use_count() << '\n';
//    std::cout << "p2: " << p2.use_count() << '\n';
//    std::cout << "p3: " << p3.use_count() << '\n';
//    std::cout << "p4: " << p4.use_count() << '\n';
//    std::cout << "p5: " << p5.use_count() << '\n';
//    std::cout << "p6: " << p6.use_count() << '\n';
//    std::cout << "p7: " << p7.use_count() << '\n';
//    std::cout << "p8: " << p8.use_count() << '\n';
//    std::cout << "p9: " << p9.use_count() << '\n';
//    return 0;
//}
/////*
////Output:
////use_count:
////p1: 0
////p2: 0
////p3: 1
////p4: 1
////p5: 2
////p6: 0
////p7: 2
////p8: 1
////p9: 2
////*/
////#include<iostream>
////using namespace std;
////
////int main()
////{
////    int a = 1;
////    int b = 2;
////
////    auto func = [=, &b](int c)->int {return b += a + c;};
////    return 0;
////}
//
////#include<iostream>
////using namespace std;
////
////typedef enum
////{
////    add = 0,
////    sub,
////    mul,
////    divi
////}type;
////
////class Calc
////{
////public:
////    Calc(int x, int y) :m_x(x), m_y(y) {}
////
////    int operator()(type i)
////    {
////        switch (i)
////        {
////        case add:
////            return m_x + m_y;
////        case sub:
////            return m_x - m_y;
////        case mul:
////            return m_x * m_y;
////        case divi:
////            return m_x / m_y;
////        }
////    }
////
////private:
////    int m_x;
////    int m_y;
////};
////
////int main()
////{
////    Calc addObj(10, 20);
////    cout << addObj(add) << endl; // 发现C++11中，enum类型的使用也变了，更“强”了                                                                                                                                              
////    return 0;
////}
//
//
////
////#include<iostream>
////using namespace std;
////
////typedef enum
////{
////    add = 0,
////    sub,
////    mul,
////    divi
////}type;
////
////int main()
////{
////    int a = 10;
////    int b = 20;
////
////    auto func = [=](type i)->int {
////        switch (i)
////        {
////        case add:
////            return a + b;
////        case sub:
////            return a - b;
////        case mul:
////            return a * b;
////        case divi:
////            return a / b;
////        }
////    };
////
////    cout << func(add) << endl;
////    return 0;
////}
////
////#include<iostream>         
////using namespace std;
////
////int main()
////{
////    int j = 10;
////    auto by_val_lambda = [=] { return j + 1; };
////    auto by_ref_lambda = [&] { return j + 1; };
////    cout << "by_val_lambda: " << by_val_lambda() << endl;
////    cout << "by_ref_lambda: " << by_ref_lambda() << endl;
////
////    ++j;
////    cout << "by_val_lambda: " << by_val_lambda() << endl;
////    cout << "by_ref_lambda: " << by_ref_lambda() << endl;
////
////    return 0;
////}

#include <memory>
#include <iostream>
using namespace std;
void process(shared_ptr<int> ptr)
{
	cout << "in process use_count:" << ptr.use_count() << endl;
}


int main() {
	/*cout << "don't mix shared_ptr and normal pointer:" << endl;
	shared_ptr<int> p5(new int(1024));
	process(p5);
	int v5 = *p5;
	cout << "v5: " << v5 << endl;

	int* p6 = new int(1024);
	process(shared_ptr<int>(p6));
	int v6 = *p6;
	cout << "v6: " << v6 << endl;*/
	//cout << "test shared_ptr deleter:" << endl;
	//int* p7 = new int(1024);
	//shared_ptr<int> p8(p7, print_at_delete);
	//p8 = make_shared<int>(1025);
	//cout << *p8 << endl;


	//cout << "test shared_ptr and new:" << endl;
	//shared_ptr<int> p4(new int(1024));
	////shared_ptr<int> p5 =new int(1024); // wrong, no implicit constructor
	//cout << *p4 << endl;

	//shared_ptr<string> p1 = make_shared<string>("ytj");
	//if (p1 && p1->empty())
	//	*p1 = "hello";
	//cout << *p1 << " " << endl;

	//shared_ptr<int> p2 = make_shared<int>(42);
	//cout << *p2 << " " << endl;

	//shared_ptr<string> p3 = make_shared<string>(10, '9');
	//cout << *p3 << " " << endl;

	////shared_ptr<int> p4 = make_shared<int>();
	////cout << *p4 << " " << endl;

	//cout << "test shared_ptr use_count:" << endl;
	//cout << "p1 cnt:" << p1.use_count() << "\tp2 cnt:" << p2.use_count() << endl;

	////auto p5 = p2;
	////cout << "p1 cnt:" << p1.use_count() << "\tp2 cnt:" << p2.use_count() << "\tp5 cnt:" << p5.use_count() << endl;
	int i = 1;
	int a = 0;

	auto c = 1UL;
	printf("c的值是：%d", c);

	auto b = c << (i % 8);
	printf("b的值是：%d", b);

	a |= b;
	printf("a的值是：%d",a);
 
		printf("值：%d",true>>(4 % 8) );
	return 0;
}
