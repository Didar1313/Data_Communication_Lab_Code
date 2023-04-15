#include <iostream>
using namespace std;
int main()
{
    string data, divisor, temp;
    cout << "Enter the data: ";
    cin >> data;
    cout << endl;
    cout << "Enter the divisor: ";
    cin >> divisor;
    // cout<<endl;
    int divisor_l = divisor.size();
    int data_l = data.size();
    int total_l = divisor_l + data_l - 1;
    temp = data;
    for (int i = data_l; i < total_l; i++)
    {
        temp += '0';
    }

    // cout<<temp<<endl;
    string temp2, quot;

    for (int i = 0; i < divisor_l; i++)
    {
        temp2 += '0';
        quot += temp[i];
    }
    // cout<<temp2<<" "<<quot<<endl;
    int j;
    for (int i = divisor_l; i <= total_l; i++)
    {
        if (quot[0] == '1')
        {
            for (j = 1; j < divisor_l; j++)
            {
                if (quot[j] == divisor[j])
                {
                    quot[j - 1] = '0';
                }
                else
                {
                    quot[j - 1] = '1';
                }
            }
        }
        else
        {
            for (j = 1; j < divisor_l; j++)
            {
                if (quot[j] == temp2[j])
                {
                    quot[j - 1] = '0';
                }
                else

                {
                    quot[j - 1] = '1';
                }
            }
        }
        quot[j - 1] = temp[i];
    }
    for (int i = 0; i < divisor_l - 1; i++)
    {
        data += quot[i];
    }
    cout << data << endl;
    cout << data << " " << divisor << endl;

    string s, tem;
    cout << "Enter new String" << endl;
    cin >> s;
    int s_l = s.size();
    int t_l = divisor_l + s_l - 1;
    tem = s;
    for (int i = s_l; i < t_l; i++)
    {
        tem += '0';
    }
    string t2, q;

    for (int i = 0; i < divisor_l; i++)
    {
        t2 += '0';
        q += tem[i];
    }
    int a;
    for (int i = divisor_l; i <= t_l; i++)
    {
        if (q[0] == '1')
        {
            for (a = 1; a < divisor_l; a++)
            {
                if (q[a] == divisor[a])
                {
                    q[a - 1] = '0';
                }
                else
                {
                    q[a - 1] = '1';
                }
            }
        }
        else
        {
            for (a = 1; a < divisor_l; a++)
            {
                if (q[a] == t2[a])
                {
                    q[a - 1] = '0';
                }
                else
                {
                    q[a - 1] = '1';
                }
            }
        }
        q[a - 1] = tem[i];
    }
    for (int i = 0; i < q.size() - 1; i++)
    {
        if (q[i] != '0')
        {
            cout << "Error" << endl;
            return 0;
        }
    }
    cout << "Match" << endl;
}