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
//////	printf("AA�����ռ��еĳ�Ա�У�(a,%d),(b,%d),(c,%d)",AA::a,AA::b,AA::c);
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
//    };//Labmbda���ʽ
//
//    std::shared_ptr<int> p1;//Ĭ�Ϲ��죬û�л�ȡ�κ�ָ�������Ȩ�����ü���Ϊ0
//    std::shared_ptr<int> p2(nullptr);//ͬ1
//    std::shared_ptr<int> p3(new int);//ӵ��ָ��int��ָ������Ȩ�����ü���Ϊ1
//    std::shared_ptr<int> p4(new int, deleter);//����ͬ3������ӵ���Լ����������������ָ����ָ�����Ϊ���ӽṹC
//                                      //�ṹC����ָ�룬Ĭ�������������Ὣ�ṹC���ָ��data��ָ����ڴ��ͷ�,��ʱ��Ҫ�Լ�ʹ���Լ�������������ɾ������
//    std::shared_ptr<int> p5(new int, [](int* p) {delete p;}, std::allocator<int>());//ͬ4,��ӵ���Լ��ķ����������캯���������Ա����ָ�룬����Ϊָ������ڴ棬ԭ���ǳ�������������
//    std::shared_ptr<int> p6(p5);//���p5���ü���Ϊ0�������ü�����1������ͬ��Ϊ0
//    std::shared_ptr<int> p7(std::move(p6));//��ȡp6�����ü�����p6���ü���Ϊ0
//    std::shared_ptr<int> p8(std::unique_ptr<int>(new int));//p8��ȡ����Ȩ�����ü�������Ϊ1
//    std::shared_ptr<C> obj(new C);
//    std::shared_ptr<int> p9(obj, obj->data);//ͬ6һ����ֻ����ӵ���Լ���ɾ������4һ��
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
////    cout << addObj(add) << endl; // ����C++11�У�enum���͵�ʹ��Ҳ���ˣ�����ǿ����                                                                                                                                              
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
	printf("c��ֵ�ǣ�%d", c);

	auto b = c << (i % 8);
	printf("b��ֵ�ǣ�%d", b);

	a |= b;
	printf("a��ֵ�ǣ�%d",a);
 
		printf("ֵ��%d",true>>(4 % 8) );
	return 0;
}
