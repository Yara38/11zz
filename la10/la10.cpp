using namespace std;
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    setlocale(0, "");
    fstream inf("f.txt");
    ofstream outf("f.txt");
    string line;
    string nums_str = "";
    for (int x = -10; x <= 10; x++)
    {
        outf << x << "\n";
    }
    outf.close();
    int* numsf = new int[20];
    int k = 0;
    while (getline(inf, line))
    {
        numsf[k] = stoi(line);
        k++;
        cout << line << endl;
    }
    inf.close();

    ofstream outg("g.txt");
    for (int x = 0; x <= 20; x++)
    {
        if (numsf[x] % 3 == 0 && numsf[x] >= 0)
        {
            outg << numsf[x] << "\n";
        }
    }
    outg.close();
}
