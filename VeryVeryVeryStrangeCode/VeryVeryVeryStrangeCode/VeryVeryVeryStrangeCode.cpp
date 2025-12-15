#include <__msvc_all_public_headers.hpp>
#include <ctime>
using namespace std;


















































































































































































































































































































































































































































































int main() {
	int balance = 1000;
	int first, second, third;
	long long dep;
	int q;
	vector<int>s = { 1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,3,3,3,3,3,4,4,4,4,5,5,5,6,6,7 };
	while (1) {
		cout << R"( ___________         __        ______________   ______     __       __     _______)" << endl;
		cout << R"(/  _________|       /  \      /  ____________| |__  __|   |  \     |  |   /  ___  \    )" << endl;
		cout << R"(| |                / /\ \     |  |               |  |     |   \    |  |   | |   | |   )" << endl;
		cout << R"(| |               / /  \ \    |  |__________     |  |     |    \   |  |   | |   | |        )" << endl;
		cout << R"(| |              / /____\ \   \__________   \    |  |     |     \  |  |   | |   | |  )" << endl;
		cout << R"(| |             /  ______  \             |  |    |  |     |  |\  \ |  |   | |   | |  )" << endl;
		cout << R"(| |_________   /  /      \  \   _________|  |   _|  |_    |  | \  \|  |   | |___| |    )" << endl;
		cout << R"(\___________| /__/        \__\ |____________/  |______|   |__|  \_____|   \_______/      )" << endl;
		cout << "Your balance: " << balance << endl;
		cout << "enter the dep amount:" << endl;
		cin >> dep;
		cout << endl;
		first = s[rand() % s.size()];
		second = s[rand() % s.size()];
		third = s[rand() % s.size()];
		cout << first << second << third << endl;
		if (first == second && first == third && first == 7) {
			balance += dep * 10;
		}
		else if (first == second && first == third && first == 6) {
			balance += dep * 5;
		}
		else if (first == second && first == third && first == 5) {
			balance += dep * 25 / 10;
		}
		else if (first == second && first == third && first == 4) {
			balance += dep * 15 / 10;
		}
		else if (first == second && first == third && first == 3) {
			balance += dep * 125 / 100;
		}
		else if (first == second && first == third && first == 2) {
			balance += dep * 115 / 100;
		}
		else if (first == second && first == third && first == 1) {
			balance += dep * 110 / 100;
		}
		else if (first == second || second == third || first == third) {

		}
		else {
			balance -= dep;
		}
		cout << "enter '1' for continue..." << endl;
		cin >> q;
		system("cls");
	}
}