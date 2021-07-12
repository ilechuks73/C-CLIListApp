#include "include/list.h"
#include "include/database.h"
using namespace std;

int main(int arg_count, char *args[]){
  cout << "\x1B[2J\x1B[H";
  if(arg_count > 1){
    List simpleList;
    simpleList.name = string(args[1]);
    simpleList.print_menu();
  }
  else{
    cout << "username not supplied"<< endl;
  }
  return 0;
}