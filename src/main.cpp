#include "include/list.h"
#include "include/database.h"
using namespace std;
List simpleList;
Database database;
int main(int arg_count, char *args[]){
  cout << "\x1B[2J\x1B[H";
  if(arg_count > 1){
    
    simpleList.name = string(args[1]);
    simpleList.print_menu();
    database.write(simpleList.list);
    database.read();
  }
  else{
    cout << "username not supplied"<< endl;
  }
  return 0;
}