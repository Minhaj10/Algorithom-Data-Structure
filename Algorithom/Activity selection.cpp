#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

struct Pair
{

	int start, finish;
};


void selectActivity(vector<Pair> const &vec)
{

	int k = 0;


	set<int> out;


	out.insert(0);

	for (int i = 1; i < vec.size(); i++)
	{

		if (vec[i].start >= vec[k].finish)
		{
			out.insert(i);
			k = i;
		}
	}

	for (int i: out) {
		cout << "{" << vec[i].start << ", " << vec[i].finish << "}" << '\n';
	}
}


int main()
{

	vector<Pair> activities =
	{
		{1, 4}, {3, 5}, {0, 6}, {5, 7}, {3, 8}, {5, 9},
		{6, 10}, {8, 11}, {8, 12}, {2, 13}, {12, 14}
	};


	sort(activities.begin(), activities.end(),
		[](auto const &lhs, auto const &rhs) {
			return lhs.finish < rhs.finish;
		});

	selectActivity(activities);

	return 0;
}
