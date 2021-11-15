#include <iostream>
#include <string>
using namespace std;

#include "user.h"
#include "security.h"
User::User() : name("noname"), password("nopassword") {}
User::User(string name, string password) : name(name), password(password) {}
bool User::Login()
{
	if (Security::validate(name, password) == 1 || Security::validate(name, password) == 2) return true;
	else return false;
}
