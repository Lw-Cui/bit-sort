#include <fstream>
#include "constant.h"
#include "boolen_bucket.h"
using namespace std;
int main(int argc, char *argv[])
{
	//ifstream fcin(argv[1]);
	//ofstream fout(argv[2]);
	FILE *read = fopen(argv[1], "r");
	FILE *write = fopen(argv[2], "w+");
	bucket b(SUM + 1);
	for (int i = 0; i < N; i++) {
		int tmp;
		//fcin >> tmp;
		fscanf(read, "%d", &tmp);
		b.insert(tmp);
	}
	for (int i = 0; i < SUM + 1; i++)
		if (b.count(i))
			//fout << i << endl;
			fprintf(write, "%d\n", i);
	return 0;
}