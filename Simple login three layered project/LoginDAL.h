#pragma once
#include <cstring>

class Account
{
private:

	std::string username;
	std::string password;

public:

	void setUsername(std::string name)
	{
		username = name;
	}

	void setPassword(std::string pass)
	{
		password = pass;
	}

	std::string getUsername()
	{
		return username;
	}

	std::string getPassword()
	{
		return password;
	}

};

