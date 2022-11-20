#pragma once
#include <iostream>
#include <cstring>
#include "LoginBLL.h"
#include "LoginDAL.h"

using namespace std;

int main()
{
	std::string username;
	std::string password;

	Account userOne;

	userOne.setUsername("Admin");
	userOne.setPassword("admin");

	cout << "Please enter your username: ";
	cin >> username;
	cout << "Please enter you password: ";
	cin >> password;

	if (verifyLogin(userOne, username, password))
	{
		cout << "Login succesful";
	}
	else
	{
		cout << "Incorrect login";
	}
}