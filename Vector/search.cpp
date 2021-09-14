#include <iostream>
#include <vector>
#include <cmath>
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

void jump(v_int vec, int search)
{
	int n=vec.size();
	int i=0;
	while ( (int)(i + sqrt(n))<n && vec[(int)(i + sqrt(n))] < search)
	{
		i+=sqrt(n);
	}
	while (i<n)
	{
		if (vec[i] <= search)
		{
		    if (vec[i] == search)
		    {
			    cout << "Yes " << i+1 << endl;
			    return;
		    }
		}
		else
		{
			cout << "No " << i+1 << endl;
		    return;
		}
		
		++i;
	}
}

int main()
{
    int n;
    cin >> n;
    v_int vec;
    create(vec, n);
    int querry;
    cin >> querry;
    while (--querry)
    {
    	int value;
    	cin >> value;
    	jump(vec, value);
    }
    return 0;
}