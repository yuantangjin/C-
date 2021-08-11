#include<iostream>
#include<string>
#include<exception>
#include<vector>
using namespace std;
int fun(int a, int b) {
	if (b == 0) {
		//throw"除数为0，这是个问题";
		throw 1.1;
	}
	return a / b;
}
void test() {
	try {
		int a = fun(1, 0);
		cout << a << endl;
	}
	catch (const char* p) {
		cout << p << endl;
	}

	catch (float a)
	{
		cout << "float接住了异常" << endl;
	}
	/*catch (string& str) {
		cout << str << endl;
	}*/
	/*catch ( char str[1024]) {
		cout << str << endl;
	}*/
}
int main() {
	//try{
	///*int* p = NULL;*/
	////const char* strytj = "cogofdjgnofdgjo";
	////cout << "指针的地址：" << &strytj << endl;
	////cout << "指针的内容：" << strytj << endl;
	////cout << "指针解引用：" << *strytj << endl;
	//test();
	//}
	//catch (int a) {
	//	cout << "主函数的catch接住了异常" << endl;
	//}
	//catch (double a) {
	//	cout << "double接住了异常" << endl;
	//}
	//catch (...) {
	//	cout << "被我三个点接住了异常" << endl;
	//}
	//out_of_range
	int a = 1;
	auto b = 1;
	cout << typeid(b).name() << endl;
	vector<int> v1;
	v1.at(25);
	system("pause");
	return 0;
}