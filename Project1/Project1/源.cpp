#include<iostream>
using namespace std;
class BankWorker {

public:
	virtual void worker() = 0;
	
};
class SaveWorker:public BankWorker {
public:
	virtual void worker() {
		cout << "办理存钱业务..." << endl;
	}
};
class PayWorker:public BankWorker {
public:
	virtual void worker() {
		cout << "办理支付业务..." << endl;
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