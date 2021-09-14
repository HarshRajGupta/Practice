#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> v_int;

void create(v_int &vec, int n)
{
	for(int i=0; i<n; ++i)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}
}

void print(v_int vec)
{
	cout << "\n========================================\n";
	for (auto i : vec)
		cout << i << " ";
	cout << "\n========================================\n";
}

void delete_pos(v_int &vec, int pos)
{
	if (pos <= (int)vec.size())
	{
		vec.erase(vec.begin()+pos-1);
	}
}

void delete_pos_range(v_int &vec, int l_p, int u_p)
{
	vec.erase(vec.begin()+l_p-1, vec.begin()+u_p-1);
}

int main()
{
	cout << "Vector Size : ";
	int n;
	cin >> n;
	cout << "Enter numbers" <<endl;
	v_int vec;
	create(vec, n);
	print(vec);
	cout << "\nEnter position to delete : ";
	int pos;
	cin >> pos;
	delete_pos(vec, pos);
	print(vec);
	cout << "\nEnter min and max limit : ";
	int ll, ul;
	cin >> ll >> ul;
	delete_pos_range(vec, ll-1, ul-1);
	cout << vec.size() << endl;
	print(vec);
	return 0;
}