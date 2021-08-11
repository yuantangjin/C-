//#include<iostream>
//#include<list>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//class TestIndex {
//public:
//	int index;
//	TestIndex() {
//	}
//	TestIndex(int _index) :index(_index) {
//	}
//	bool operator()(const TestIndex* t1, const TestIndex* t2) {
//		printf("Operator():%d,%d/n", t1->index, t2->index);
//		return t1->index < t2->index;
//	}
//	bool operator < (const TestIndex& ti) const {
//		printf("Operator<:%d/n", ti.index);
//		return index < ti.index;
//	}
//};
//bool compare_index(const TestIndex* t1, const TestIndex* t2) {
//	printf("CompareIndex:%d,%d/n", t1->index, t2->index);
//	return t1->index < t2->index;
//}
//int main(int argc, char** argv) {
//	list<TestIndex*> tiList1;
//	list<TestIndex> tiList2;
//	vector<TestIndex*> tiVec1;
//	vector<TestIndex> tiVec2;
//	TestIndex* t1 = new TestIndex(2);
//	TestIndex* t2 = new TestIndex(1);
//	TestIndex* t3 = new TestIndex(3);
//	tiList1.push_back(t1);
//	tiList1.push_back(t2);
//	tiList1.push_back(t3);
//	tiList2.push_back(*t1);
//	tiList2.push_back(*t2);
//	tiList2.push_back(*t3);
//	tiVec1.push_back(t1);
//	tiVec1.push_back(t2);
//	tiVec1.push_back(t3);
//	tiVec2.push_back(*t1);
//	tiVec2.push_back(*t2);
//	tiVec2.push_back(*t3);
//	printf("tiList1.sort()/n");
//	tiList1.sort();//无法正确排序
//	printf("tiList2.sort()/n");
//	tiList2.sort();//用<比较
//	printf("tiList1.sort(TestIndex())/n");
//	tiList1.sort(TestIndex());//用()比较
//	printf("sort(tiVec1.begin(),tiVec1.end())/n");
//	sort(tiVec1.begin(), tiVec1.end());//无法正确排序
//	printf("sort(tiVec2.begin(),tiVec2.end())/n");
//	sort(tiVec2.begin(), tiVec2.end());//用<比较
//	printf("sort(tiVec1.begin(),tiVec1.end(),TestIndex())/n");
//	sort(tiVec1.begin(), tiVec1.end(), TestIndex());//用()比较
//	printf("sort(tiVec1.begin(),tiVec1.end(),compare_index)/n");
//	sort(tiVec1.begin(), tiVec1.end(), compare_index);//用compare_index比较
//	return 0;
//}