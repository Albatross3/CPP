#include <iostream>
#include <string>
using namespace std;

#include "administrator.h"
#include "security.h"

Administrator::Administrator() : name("noname"), password("nopassword") {}
Administrator::Administrator(string name, string password) : name(name), password(password) {}
bool Administrator::Login()
{
	if (Security::validate(name,password) == 2) return true;
	else return false;
}