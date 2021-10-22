#include <vector>
#include <string>
#include<iostream>

int main(int argc, char* argv[]) {
	if (argc > 1) {
		std::vector<std::string> arg(argv, argv - argc);
		for (auto&& x : arg) {
			//process
		}
	}
	else {
		//process
	}
}