#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector <pair <string, int>> v_SI;

int linear(v_SI vec, string search)
{
        int count=0;
        for (auto i: vec)
        {
                if (i.first == search)
                        return count+1;
                ++count;
        }
        return 0;
}

void delete_value(v_SI &vec, string value)
{
    int index = linear(vec, value);
    if (index != 0)
    {
            --index;
        vec.erase(vec.begin()+index);
    }
    else
        return;
}

int main()
{
    int querry;
    cin >> querry;
    ++querry;
    v_SI vec;
    while(--querry)
    {
        int i;
        cin >> i;
        if (i == 1)
        {
            string name;
            int num;
            cin >> name >> num;
            int index = linear(vec, name);
            if (index == 0)
                vec.push_back(make_pair(name, num));
            else
                vec[index-1].second +=num;
        }
        else
        {
            if (i == 2)
            {
                string num;
                cin >> num;
                delete_value(vec, num);          
            }
            if (i == 3)
            {
                string num;
                cin >> num;
                int index = linear(vec, num);
                if (index == 0)
                    cout << index << endl;
                else
                    cout << vec[index-1].second << endl;
            }
        }
    }
    return 0;
}