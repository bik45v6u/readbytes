#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <format>

using namespace std;


int main(int argc, char** argv)
{
    if(argc < 3)
    {
        cout << "requires filename and number of characters to read...\n";
        exit(1);
    }

    char tmp;
    int q = argc < 4 ? 1 : atoi(argv[3]);
    cout << format("ascii,signed_dec,unsigned_dec,hex\n");

    ifstream file(argv[1], ios::binary);
    file.seekg(q, ios::beg);

    vector<char> a;

    for(q = 0; q < atoi(argv[2]); q++)
    {
        file.read(&tmp, 1);
        a.push_back(tmp);
    }

    q = 0;
    for(char i : a)
    {
        q++;
        cout << format("{},{},{},{:0x}", i, static_cast<int>(i),static_cast<uint32_t>(i), i) << endl;
    }
}
