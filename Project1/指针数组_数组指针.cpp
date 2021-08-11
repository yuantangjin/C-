//#include<iostream>
//typedef double real;
//using namespace std;
//void swap(real* a, real* b);
//int main() {
//	//int c[2][4] = { 1,32,3,4,
//	//	            5,56,7,8 };
//	//int* a[4];
//	//int(*b)[4];
//	//b = c;
//	//for (int i = 0;i < 4;i++) {
//	//	a[i] = c[i];
//	//}
//	//cout << *(a[0] + 1) << endl;
//	//cout << *(a[1] + 1) << endl;
//	//cout << (*b)[2] << endl;
//	//cout << (*(b + 1))[2] << endl;
//	///*****************第二个案例***********************/
//	//const char* g[] = { "I am gel","I like China" };
//	//cout << g[0] << endl;
//	//cout << g[0] + 1 << endl;
//	//cout << g[1] + 7 << endl;
//	double a[10] = 
//	{ 
//		1,5,10,15,20,
//	    1,5,10,15,20
//	};
//	real b[10] =
//	{
//		2,4,6,8,10,
//		2,4,6,8,10
//	};
//	for (int i = 0;i < 10;i++) {
//		swap(a[i], b[i]);
//	}
//	printf("a数组中的值为：" );
//	for (int i = 0;i < 10;i++) {
//		
//		if (i % 5 == 0)
//			printf("\n");
//		printf("%f\t", a[i]);
//	}
//	printf("\n");
//	printf("b数组中的值为：");
//	for (int i = 0;i < 10;i++) {
//		
//		if (i % 5 == 0)
//			printf("\n");
//		printf("%f\t", b[i]);
//	}
//
//	
//	return 0;
//}
//void swap(real* a, real* b)
//{//交换两个数据，这个函数可以交换两个数组中的每一个值
//	real tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}