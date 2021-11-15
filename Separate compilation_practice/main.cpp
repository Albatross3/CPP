#include <iostream>
#include <string>
#include "user.h"
#include "administrator.h"
using namespace std;
// Main method
int main()
{
	// Hard-coded tests. Abbott has User access, Costello has
	// user and admin access.
	//
	User user1("canyon", "123"), user2("showmaker", "456"),
		user3("faker", "111");
	Administrator admin1("canyon", "123"), admin2("showmaker", "456"),
		admin3("faker", "111");
	cout << "Results of login:" << endl;
	cout << "User login for canyon: " << user1.Login() << endl;
	cout << "User login for showmaker: " << user2.Login() << endl;
	cout << "User login for faker: " << user3.Login() << endl;
	cout << "Admin login for canyon: " << admin1.Login() << endl;
	cout << "Admin login for showmaker: " << admin2.Login() << endl;
	cout << "Admin login for faker: " << admin3.Login() << endl;
	return 0;
}