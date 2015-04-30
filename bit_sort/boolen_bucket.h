#ifndef BOOLEN_BUCKET_H_
#define BOOLEN_BUCKET_H_
const int x = 1;
class bucket
{
public:
	bucket(int);
	~bucket();
	bool insert(int);
	int count(int);
private:
	bool *position;
};
#endif