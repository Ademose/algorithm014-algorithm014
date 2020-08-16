#include <iostream>
#include <deque>

using namespace std;

void showdq(deque <int> g) {
	for (auto i = g.begin(); i != g.end(); i++) {
		cout << *i;
	}
	cout << '\n';
}

int main() {
	deque<int> TestDeque;
	TestDeque.push_front(1);	/*从最前面压一个1和一个2*/
	TestDeque.push_front(2);	
	TestDeque.push_back(9);		/*之后压一个9和8从后面*/
	TestDeque.push_back(8);
	showdq(TestDeque);
	 
	cout << TestDeque.front() << endl;  /* Element access */
	cout << TestDeque.at(0) << endl;   
	cout << TestDeque.back() << endl;
	cout << TestDeque.operator[];

}