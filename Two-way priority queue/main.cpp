#include <iostream>
#include "../Library/Pair.cpp"

using namespace std;
using namespace queue;

int main()
{
	Pair<int, int> elements(1, 2);
	cout << elements.first();
	return 0;
}
