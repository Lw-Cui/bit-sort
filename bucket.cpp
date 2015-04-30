#include "boolen_bucket.h"
#include "constant.h"
#include <iostream>
#include <cstring>
#include <new>
using namespace std;
bucket::bucket(int len)
{
	position = new bool[len];
	memset(position, false, sizeof(position));
}
bucket::~bucket()
{
	delete[] position;
}
bool bucket::insert(int value)
{
	if (!position[value])
		return position[value] = true;
	else
		return false;
}
int bucket::count(int value)
{
	return position[value];
}