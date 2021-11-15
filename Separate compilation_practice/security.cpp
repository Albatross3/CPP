#include <iostream>
using namespace std;

#include "security.h"
// This subroutine hard-codes valid users and is not
// considered a secure practice.
// It returns 0 if the credentials are invalid,
// 1 if valid user, and
// 2 if valid administrator
int Security::validate(string username, string password)
{
	if ((username == "canyon") && (password == "123")) return 1; 
	if ((username == "showmaker") && (password == "456")) return 2;
	return 0;
}