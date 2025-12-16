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
	if (a[11] == 1) {
		cout << "SIXSEVNSIXSEVENSIXSEVENSIXSEVENSIX..." << endl << endl;
		cout << "676767676767676767676767676767676767" << endl << endl << endl;
	}
	if (a[12] == 1) {
		cout << "                THIEF               " << endl << endl;
		cout << "withdraw all casino money" << endl << endl << endl;

	}
	cout << "enter '1' for continue" << endl;
	int n;
	cin >> n;
	return 0;
}





























int main() {
	srand(time(NULL));
	int balance = 1000;
	int first, second, third;
	long long dep;
	int q;
	vector<int>s = { 7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,2,2,2,2,2,2 };
	int count = 0;
	int casinomoney = 0;
	vector <int> achivement(13);
	while (1) {
		system("cls");
		casic();
		cout << "Your balance: " << balance << endl;
		cout << "The money that the casino earned from you: " << casinomoney << endl;
		cout << "One coin is worth: 25" << endl;
		cout << "enter the dep amount(1-3):" << endl;
		cin >> dep;
		balance -= dep * 25;
		system("cls");
		casic();
		cout << "Your balance: " << balance << endl;
		cout << "The money that the casino earned from you: " << casinomoney << endl;
		cout << endl;
		first = s[rand() % s.size()];
		second = s[rand() % s.size()];
		third = s[rand() % s.size()];
		cout << first << second << third << endl;
		if ((first == 2 && second != 2 && third != 2) || (first != 2 && second == 2 && third != 2) || (first != 2 && second != 2 && third == 2)) {
			cout << "You've won!" << endl;
			balance += dep * 2;
			casinomoney -= dep * 2;
			cout << dep * 5 << endl;
		}
		else if ((first == 2 && second == 2 && third == 2) || (first == 3 && second == 3 && third == 3)) {
			cout << "You've won!" << endl;
			balance += dep * 10;
			casinomoney -= dep * 10;
			cout << dep * 10 << endl;
		}
		else if (first == 4 && second == 4 && third == 4) {
			cout << "You've won!" << endl;
			balance += dep * 25;
			casinomoney -= dep * 25;
			cout << dep * 25 << endl;
		}
		else if (first == 5 && second == 5 && third == 5) {
			cout << "You've won!" << endl;
			balance += dep * 40;
			casinomoney -= dep * 40;
			cout << dep * 40 << endl;
		}
		else if ((first == 2 && second == 2 && third != 2) || (first == 2 && second != 2 && third == 2) || (first != 2 && second == 2 && third == 2) || ((first==3||first==4||first==5)&&(second==3||second==4||second==5)&&(third==3||third==4||third==5))) {
			cout << "You've won!" << endl;
			balance += dep * 5;
			casinomoney -= dep * 5;
			cout << dep * 5 << endl;
		}
		else if (first == 6 && second == 6 && third == 6) {
			cout << "You've won" << endl;
			balance += dep * 80;
			casinomoney -= dep * 80;
			cout << dep * 80 << endl;
		}
		else if (first == 7 && second == 7 && third == 7) {
			if (dep < 3) {
				cout << "You've won!" << endl;
				balance += dep * 800;
				casinomoney -= dep * 800;
				cout << dep * 800 << endl;
			}
			else {
				cout << "You've won!" << endl;
				balance += 2500;
				casinomoney -= 2500;
				cout << 2500 << endl;
			}
		}
		else {
			casinomoney += dep * 25;
		}
		count++;
		cout << "enter '1' for continue..." << endl;
		cout << "enter '2' to view achievements" << endl;
		cin >> q;
		if (q == 2) achivs(achivement);
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
			continue;
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
			continue;
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
			continue;
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
			continue;
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
			continue;
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
			continue;
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
			continue;
		}
		if (balance >= 2000 && achivement[7] == 0) {
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
			continue;
		}
		if (balance >= 5000 && achivement[8] == 0) {
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
			continue;
		}
		if (balance <= 0 && achivement[9] == 0) {
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
			continue;
		}
		if (balance <= -500 && achivement[10] == 0) {
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
			continue;
		}
		if (((first == 6 && second == 7) || (second == 6 && third == 7)) && achivement[11] == 0) {
			achivement[11] = 1;
			system("cls");
			casic();
			cout << "A new achievement has been achieved!" << endl;
			cout << "SIXSEVNSIXSEVENSIXSEVENSIXSEVENSIX..." << endl << endl;
			cout << "676767676767676767676767676767676767" << endl;
			cout << "enter '1' for continue" << endl;
			cout << "enter '2' to view achievements" << endl;
			cin >> q;
			if (q == 2) achivs(achivement);
			continue;
		}
		if (casinomoney <= -1000 && achivement[12]==0) {
			achivement[12] = 1;
			system("cls");
			casic();
			cout << "A new achievement has been achieved!" << endl;
			cout << "                THIEF               " << endl << endl;
			cout << "withdraw all casino money" << endl;
			cout << "enter '1' for continue" << endl;
			cout << "enter '2' to view achievements" << endl;
			cin >> q;
			if (q == 2) achivs(achivement);
			continue;
		}
	}
}