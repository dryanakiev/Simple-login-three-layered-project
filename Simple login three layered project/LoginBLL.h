#pragma once
#include <cstring>
#include "LoginDAL.h"

bool verifyLogin(Account obj, std::string username, std::string password)
{
	std::string tempUsername = obj.getUsername();
	std::string tempPassword = obj.getPassword();

	if (tempUsername == username && tempPassword == password)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}