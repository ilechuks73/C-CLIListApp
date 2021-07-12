#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

class Database
{
private:
  
public:
  vector<string> read();
  void write(vector<string> list);
};

