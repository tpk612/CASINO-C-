#include <__msvc_all_public_headers.hpp>
#include <ctime>
using namespace std;


















































































































































































































































































































































































































































int casic() {
	cout << R"( ___________         __        ______________   ______     __       __     _______)" << endl;
	cout << R"(/  _________|       /  \      /  ____________| |__  __|   |  \     |  |   /  ___  \    )" << endl;
	cout << R"(| |                / /\ \     |  |               |  |     |   \    |  |   | |   | |   )" << endl;
	cout << R"(| |               / /  \ \    |  |__________     |  |     |    \   |  |   | |   | |        )" << endl;
	cout << R"(| |              / /____\ \   \__________   \    |  |     |     \  |  |   | |   | |  )" << endl;
	cout << R"(| |             /  ______  \             |  |    |  |     |  |\  \ |  |   | |   | |  )" << endl;
	cout << R"(| |_________   /  /      \  \   _________|  |   _|  |_    |  | \  \|  |   | |___| |    )" << endl;
	cout << R"(\___________| /__/        \__\ |____________/  |______|   |__|  \_____|   \_______/      )" << endl;
	return 0;
}

int achivs(vector <int> a) {
	system("cls");
	casic();
	if (a[0] == 1) {
		cout << "           GOD OF LUCK              " << endl << endl;
		cout << "77777777777777777777777777777777777!" << endl << endl << endl;
	}
	if (a[1] == 1) {
		cout << "         BEGINNER LUDOMAN           " << endl << endl;
		cout << "scroll through the casino 10 times" << endl << endl << endl;
	}
	if (a[2] == 1) {
		cout << "        A MID-LEVEL LUDOMAN         " << endl << endl;
		cout << "scroll through the casino 50 times" << endl << endl << endl;
	}
	if (a[3] == 1) {
		cout << "        LUDOMAN THE ORDINARY        " << endl << endl;
		cout << "scroll through the casino 100 times" << endl << endl << endl;
	}
	if (a[4] == 1) {
		cout << "         THE LUDOMAN MASTER         " << endl << endl;
		cout << "scroll through the casino 200 times" << endl << endl << endl;
	}
	if (a[5] == 1) {
		cout << "       THE IMPOSSIBLE LUDOMAN       " << endl << endl;
		cout << "scroll through the casino 500 times" << endl << endl << endl;
	}
	if (a[6] == 1) {
		cout << "        THE GOD OF LUDOMANIA        " << endl << "Higher setpoint" << endl << endl;
		cout << "scroll through the casino 1000 times" << endl << endl << endl;
	}
	if (a[7] == 1) {
		cout << "               LUCKY                " << endl << endl;
		cout << "get 2000 money" << endl;
	}
	if (a[8] == 1) {
		cout << "           VERY LUCKY               " << endl << endl;
		cout << "get 2000 money" << endl << endl << endl;
	}
	if (a[9] == 1) {
		cout << "          DEP EVERYTHING            " << endl << endl;
		cout << "Lose all the money" << endl << endl << endl;
	}
	if (a[10] == 1) {
		cout << " YOU'RE GOING TO GET BEATEN UP SOON " << endl << endl;
		cout << "Lose all the money" << endl << endl << endl;
	}
	cout << "enter '1' for continue" << endl;
	int n;
	cin >> n;
	return 0;
}





























int main() {
	int balance = 1000;
	int first, second, third;
	long long dep;
	int q;
	vector<int>s = { 1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,3,3,3,3,3,4,4,4,4,5,5,5,6,6,7 };
	int count = 0;
	int casinomoney = 0;
	vector <int> achivement(11);
	while (1) {
		casic();
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
			casinomoney += dep;
		}
		count++;
		if (first == 7 && second == 7 && third == 7 && achivement[0] == 0) {
			achivement[0] = 1;
			system("cls");
			casic();
			cout << "A new achievement has been achieved!" << endl;
			cout << "           GOD OF LUCK              " << endl << endl;
			cout << "77777777777777777777777777777777777!" << endl;
			cout << "enter '1' for continue" << endl;
			cout << "enter '2' to view achievements" << endl;
			cin >> q;
			if (q == 2) achivs(achivement);
		}
		if (count == 10) {
			achivement[1] = 1;
			system("cls");
			casic();
			cout << "A new achievement has been achieved!" << endl;
			cout << "         BEGINNER LUDOMAN           " << endl << endl;
			cout << "scroll through the casino 10 times" << endl;
			cout << "enter '1' for continue" << endl;
			cout << "enter '2' to view achievements" << endl;
			cin >> q;
			if (q == 2) achivs(achivement);
		}
		if (count == 50) {
			achivement[2] = 1;
			system("cls");
			casic();
			cout << "A new achievement has been achieved!" << endl;
			cout << "        A MID-LEVEL LUDOMAN         " << endl << endl;
			cout << "scroll through the casino 50 times" << endl;
			cout << "enter '1' for continue" << endl;
			cout << "enter '2' to view achievements" << endl;
			cin >> q;
			if (q == 2) achivs(achivement);
		}
		if (count == 100) {
			achivement[3] = 1;
			system("cls");
			casic();
			cout << "A new achievement has been achieved!" << endl;
			cout << "        LUDOMAN THE ORDINARY        " << endl << endl;
			cout << "scroll through the casino 100 times" << endl;
			cout << "enter '1' for continue" << endl;
			cout << "enter '2' to view achievements" << endl;
			cin >> q;
			if (q == 2) achivs(achivement);
		}
		if (count == 200) {
			achivement[4] = 1;
			system("cls");
			casic();
			cout << "A new achievement has been achieved!" << endl;
			cout << "         THE LUDOMAN MASTER         " << endl << endl;
			cout << "scroll through the casino 200 times" << endl;
			cout << "enter '1' for continue" << endl;
			cout << "enter '2' to view achievements" << endl;
			cin >> q;
			if (q == 2) achivs(achivement);
		}
		if (count == 500) {
			achivement[5] = 1;
			system("cls");
			casic();
			cout << "A new achievement has been achieved!" << endl;
			cout << "       THE IMPOSSIBLE LUDOMAN       " << endl << endl;
			cout << "scroll through the casino 500 times" << endl;
			cout << "enter '1' for continue" << endl;
			cout << "enter '2' to view achievements" << endl;
			cin >> q;
			if (q == 2) achivs(achivement);
		}
		if (count == 1000) {
			achivement[6] = 1;
			system("cls");
			casic();
			cout << "A new achievement has been achieved!" << endl;
			cout << "        THE GOD OF LUDOMANIA        " << endl << "Higher setpoint" << endl << endl;
			cout << "scroll through the casino 1000 times" << endl;
			cout << "enter '1' for continue" << endl;
			cout << "enter '2' to view achievements" << endl;
			cin >> q;
			if (q == 2) achivs(achivement);
		}
		if (balance >= 2000) {
			achivement[7] = 1;
			system("cls");
			casic();
			cout << "A new achievement has been achieved!" << endl;
			cout << "               LUCKY                " << endl << endl;
			cout << "get 2000 money" << endl;
			cout << "enter '1' for continue" << endl;
			cout << "enter '2' to view achievements" << endl;
			cin >> q;
			if (q == 2) achivs(achivement);
		}
		if (balance >= 5000) {
			achivement[8] = 1;
			system("cls");
			casic();
			cout << "A new achievement has been achieved!" << endl;
			cout << "           VERY LUCKY               " << endl << endl;
			cout << "get 2000 money" << endl;
			cout << "enter '1' for continue" << endl;
			cout << "enter '2' to view achievements" << endl;
			cin >> q;
			if (q == 2) achivs(achivement);
		}
		if (balance <= 0) {
			achivement[9] = 1;
			system("cls");
			casic();
			cout << "A new achievement has been achieved!" << endl;
			cout << "          DEP EVERYTHING            " << endl << endl;
			cout << "Lose all the money" << endl;
			cout << "enter '1' for continue" << endl;
			cout << "enter '2' to view achievements" << endl;
			cin >> q;
			if (q == 2) achivs(achivement);
		}
		if (balance <= -500) {
			achivement[10] = 1;
			system("cls");
			casic();
			cout << "A new achievement has been achieved!" << endl;
			cout << " YOU'RE GOING TO GET BEATEN UP SOON " << endl << endl;
			cout << "Lose all the money" << endl;
			cout << "enter '1' for continue" << endl;
			cout << "enter '2' to view achievements" << endl;
			cin >> q;
			if (q == 2) achivs(achivement);
		}
		cout << "enter '1' for continue..." << endl;
		cout << "enter '2' to view achievements" << endl;
		cin >> q;
		if (q == 2) achivs(achivement);
		system("cls");
	}
}