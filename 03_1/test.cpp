#include "test.h"

TestSingleton::~TestSingleton()
{
}

TestSingleton* TestSingleton::GetInstance()
{
	static TestSingleton instance;

	return &instance;
}
