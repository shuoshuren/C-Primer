#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

/**
 * 文件输出
 */
void test_ofstream(){
    ofstream outFile;
    outFile.open("info.txt");
    char content[50];
    cout<<"enter content to file:"<<endl;
    cin.getline(content,50);
    outFile<<content;
    outFile.close();
}

/**
 * 文件输入
 */
void test_ifstream(){
    ifstream inFile;
    inFile.open("info.txt");
    char content[50];
    if(!inFile.is_open()){
        exit(EXIT_FAILURE);
    }

    while(!inFile.eof()){
        inFile.getline(content,50);
        cout<<"info.txt content:"<<content<<endl;
    }

}

int main() {

    test_ifstream();
    return 0;
}