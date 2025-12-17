#include <iostream>
#include <fstream>
using namespace std;

int main()
{
/*
    ================= 3 File Structure =================

*/
    string str = "Hello world, here you can review the topics";
    string str2;

    ofstream write("sample.txt");
    write<<str;
    write.close();

    ifstream read("sample.txt");
    // read>>str2;
    // read>>str2;
    getline(read, str2);
    cout<< str2 << '\n';
    read.close();


    return 0;
}