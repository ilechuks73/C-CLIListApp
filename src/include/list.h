#include <iostream>
#include <string>
#include <vector>

using namespace std;

class List
{
private:
  /* data */
public:
  List(/* args */){

  }
  ~List(){

  }

  vector<string> list;
  string name;

  void print_menu();
  void print_list();
  void add_item();
  void delete_item();
};
