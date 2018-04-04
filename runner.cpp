#include <iostream>
#include <string>
#include <memory>
using namespace std;

string get_str() {
	return "darkseid";
}

int main() {
	cout << get_str();
	auto ptr = make_unique<int> (1);
	return 0;
}
