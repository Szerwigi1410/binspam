#include <iostem.hpp>
using namespace std;

int main(int argc, char* argv[]) {
	long long opt = 1;
	long long width = 10;
	bool spaces = false;

	if (argc > 3) {
		opt = stoll(argv[1]);
		width = stoll(argv[2]);
		spaces = stoll(argv[3]) != 0;
	}

	for (long long i = 0; i < opt; i++) {
		string bin = "";
		for (long long i = 0; i < width; i++) {
			long long addNum = RANDOM(0, 1);
			if (spaces == true) {
				bin += to_string(addNum) + " ";
			}
			else {
				bin += to_string(addNum);
			}
		}
		cout << GREEN << bin;
		WAIT(10);
		cout << endl << RESET_COLOR;
	}
		
	return 0;
}

