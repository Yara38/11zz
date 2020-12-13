using namespace std;
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    setlocale(0, "");
    fstream inf("f.txt");
    ofstream outf("f.txt");
    string a;
    string strf = "ABCabc";
    cout << "Введите строчки:" << endl;
    for (int x = 0; x < 3; x++)
    {
        cin >> strf;
        outf << strf << "\n";
    }
    char symbol = 'x';
    cout << "Введите букву:" << endl;
    cin >> symbol;
    outf.close();
    int i = 0;
    while (getline(inf, a))
    {
        if (a[0] == symbol)
        {
            i++;
        }
    }
    inf.close();
    cout << i;
}
