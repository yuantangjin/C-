#include<iostream>
#include<string>
#include<exception>
#include<vector>
using namespace std;
int fun(int a, int b) {
	if (b == 0) {
		//throw"����Ϊ0�����Ǹ�����";
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
		cout << "float��ס���쳣" << endl;
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
	////cout << "ָ��ĵ�ַ��" << &strytj << endl;
	////cout << "ָ������ݣ�" << strytj << endl;
	////cout << "ָ������ã�" << *strytj << endl;
	//test();
	//}
	//catch (int a) {
	//	cout << "��������catch��ס���쳣" << endl;
	//}
	//catch (double a) {
	//	cout << "double��ס���쳣" << endl;
	//}
	//catch (...) {
	//	cout << "�����������ס���쳣" << endl;
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