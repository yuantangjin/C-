#include<iostream>
using namespace std;
class BankWorker {

public:
	virtual void worker() = 0;
	
};
class SaveWorker:public BankWorker {
public:
	virtual void worker() {
		cout << "�����Ǯҵ��..." << endl;
	}
};
class PayWorker:public BankWorker {
public:
	virtual void worker() {
		cout << "����֧��ҵ��..." << endl;
	}
};
void doWorker(BankWorker* worker) {
	worker->worker();
}
int main() {
	//BankWorker* worker = new BankWorker;
	//doSave(worker);
	//doPay(worker);
	BankWorker* worker = new SaveWorker;
	worker->worker();
	system("pause");
	return 0;
}