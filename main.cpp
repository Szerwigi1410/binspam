#include <iostem.hpp>
using namespace std;

int main(int argc, char* argv[]) {
	int opt = 1;
	int width = 10;
	bool spaces = false;

	if (argc > 3) {
		opt = stoi(argv[1]);
		width = stoi(argv[2]);
		spaces = stoi(argv[3]) != 0;
	}

	for (int i = 0; i < opt; i++) {
		string bin = "";
		for (int i = 0; i < width; i++) {
			int addNum = RANDOM(0, 1);
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

