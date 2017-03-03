#include <iostream>
#include <string>
#include <fstream>

/**
 * 文件io
 */
void test_file_io(){
    using namespace std;
    string filename;
    string info;
    string content;

    cout<<"enter a filename:";
    cin>>filename;
    ofstream fout(filename.c_str());
    cout<<"enter file info:"<<endl;
    cin>>content;
    fout<<content;
    fout.flush();
    ifstream fin(filename.c_str());
    fin>>info;

    fout.clear();
    fout.close();

    fin.clear();
    fin.close();
    cout<<"content："<<info;



}

int main() {
    std::cout << "Hello, World!" << std::endl;
    test_file_io();
    return 0;
}