#pragma once
#include "stdafx.h"

wstring s2ws(const std::string& str);
extern int menuauthlevel;
bool get_auth_status(std::string username, std::string password);