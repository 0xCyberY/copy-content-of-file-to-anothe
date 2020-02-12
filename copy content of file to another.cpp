#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
     ifstream fin;
     fin.open("ABC.TXT");
     ofstream fout;
     fout.open("XYZ.TXT");
     char ch;
     while(!fin.eof())
     {
     	fin.get(ch);
     	fout<<ch;
     }
     cout<<"Data has been copied\n";
     fin.close();
     fout.close();
     
     return 0;
     
}
