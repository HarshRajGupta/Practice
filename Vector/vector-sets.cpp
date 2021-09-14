#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> v_int;

int jump(v_int vec, int search)
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
                            return i+1;
                }
                else
                    return 0;
                
                ++i;
        }
        return 0;
}

void delete_value(v_int &vec, int value)
{
        int index;
        index = jump(vec, value);
        vec.erase(vec.begin() + (index-1));
}

int main()
{
        int querry;
        cin >> querry;
        ++querry;
        v_int vec;
        while(--querry)
        {
                int i;
                cin >> i;
                if (i == 1)
                {
                        int num;
                        cin >> num;
                        vec.push_back(num);
                }
                else
                {
                        if (i == 2)
                        {
                                int num;
                                cin >> num;
                                delete_value(vec, num);
                        }
                        if (i == 3)
                        {
                                int num;
                                cin >> num;
                                num = jump(vec, num);
                                if (num == 0)
                                        cout << "No" << endl;
                                else
                                {
                                        cout << "Yes" << endl;
                                }
                        }
                }
        }
        return 0;
}