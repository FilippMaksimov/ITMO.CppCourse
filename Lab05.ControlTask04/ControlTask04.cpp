#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

int getSum(const int, const int);
int getMult(const int, const int);
void getData(string, vector<string>&);

bool startCalc(vector<string> arrParam, int (*option[2])(int, int), int& res)
{
    int a, b;
    int temp1 = strncmp(arrParam[0].c_str(), "ControlTask04", 13);
    int temp2_1 = strncmp(arrParam[1].c_str(), "-a", 2);
    int temp2_2 = strncmp(arrParam[1].c_str(), "-m", 2);
    if (temp1 == 0 || (temp2_1 == 0 && temp2_2 == 0) || arrParam.size() == 4)
    {
        a = atoi(arrParam[2].c_str());
        b = atoi(arrParam[3].c_str());
        res = (*option[temp2_1])(a, b);
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b;
    int res;
    int (*argv[2])(int, int) = { getSum, getMult };
    string data_str;
    cout << "Enter the command:" << "\n";
    getline(cin, data_str);
    vector<string> arrParam;
    getData(data_str, arrParam);
    if (startCalc(arrParam, argv, res))
        cout << "The result is " << res << endl;
    else
        cout << "Error!" << endl;
    return 0;
}

int getSum (const int a, const  int b)
{
    return a + b;
}

int getMult(const int a, const int b)
{
    return a * b;
}

void getData(string input, vector<string>& arrParam)
{
    int collector;
    int i_vec = 0;
    int str_len = input.length();
    for (int i = 0; i < str_len; i++)
    {
        if (input.substr(i, 1) == " " || i == str_len - 1)
        {
            collector = i - i_vec;
            arrParam.push_back(input.substr(i_vec, collector > 0 ? collector: 1));
            i_vec = i + 1;
        }
    }
}

