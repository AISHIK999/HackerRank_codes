/*
Given a positive integer n, do the following:

If 1<=n<=9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
If n>9, print Greater than 9.

*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // I would have rather gone for switch case, but the question directed to do something else. So...
    if (n < 1)
    {
        printf("");
    }
    else if (n >= 1 && n <= 9)
    {
        if (n == 1)
        {
            printf("one");
        }
        else if (n == 2)
        {
            printf("two");
        }
        else if (n == 3)
        {
            printf("three");
        }
        else if (n == 4)
        {
            printf("four");
        }
        else if (n == 5)
        {
            printf("five");
        }
        else if (n == 6)
        {
            printf("six");
        }
        else if (n == 7)
        {
            printf("seven");
        }
        else if (n == 8)
        {
            printf("eight");
        }
        else if (n == 9)
        {
            printf("nine");
        }
    }
    else if (n > 9)
    {
        printf("Greater than 9");
    }

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
