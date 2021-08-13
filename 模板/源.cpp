#include<iostream>
using namespace std;
//½»»»º¯Êý
template<class T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
template<class T>
void mySort(T arr[], int len) {
	for (int i = 0;i < len;i++) {
		int min = i;
		for (int j = i + 1;j < len;j++) {
			if (arr[j] < arr[min])
			{
				min = j;
			}

		}
		if (min!=i)
		{
			mySwap(arr[i], arr[min]);
		}
	}
}
template<class T>
void print(T arr[], int len) {
	for (int i = 0;i < len;i++) {
		cout << arr[i] << "\t" /*<< endl*/;
	}
	cout << endl;
}
int main() {
	//char str[] = "qwertyuiopasdfghjklzxcvbnm";
	int str[]={10,9,8,7,6,5,4,3,2,1,0};
	int len = 11/*strlen(str)*/;
	mySort(str, len);
	print(str, len);
	system("pause");
	return 0;
}