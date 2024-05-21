#include <iostream>
#include <string>
#include <vector>
#include <regex>
using namespace std;

template<typename T>
void printVector(vector<T>& v) {
	for (const auto& e : v) {
		cout << e << '\t';
	}
	cout << endl;
}

int main() {
    regex rgx("[0-9]+");
    vector<int> v1;
    smatch m;
    string str("Cat1 apple26 and Dog3");
    while (regex_search(str, m, rgx)) {
        v1.push_back(stoi(m.str()));
        str = m.suffix().str();
    }
    printVector(v1);
    return 0;
}
