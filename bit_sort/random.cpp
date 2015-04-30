#include <cstdlib>
#include <fstream>
#include <cstdio>
#include <ctime>
#include "constant.h"
#include "boolen_bucket.h"
using namespace std;
int range(int _max)
{
	int ans;
	while (ans = (double)rand() / RAND_MAX * _max, !ans);
	return ans;
}
int main(int argc, char *argv[])
{
	srand(time(NULL));
	//ofstream fout(argv[1]);
	FILE *write = fopen(argv[1], "w+");
	bucket barrel(SUM + 1);
	int cnt = 0;
	while (cnt < N) {
		int tmp = range(SUM);
		if (barrel.insert(tmp)) {
			//fout << tmp << endl;
			fprintf(write, "%d\n", tmp);
			cnt++;
		}
	}
	return 0;
}
