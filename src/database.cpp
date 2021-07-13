#include "include/database.h"

using namespace std;

void Database::write(vector<string> list){
  ofstream db;
  db.open("db/lists.sl");
  if(db.is_open()){
    for(int i=0; i<(int)list.size(); i++){
    db << list[i] << endl;
  }

  }
  else{
    cout << "cannot open db" << endl;
  }
  db.close();
}

vector<string> Database::read(){
  vector<string> data;
  string line;
  ifstream db;
  db.open("db/lists.sl");
  if(db.is_open()){
    while(getline(db, line, '\n')){
      if(line.front()== '#'){
        cout << "found a user" <<endl ;
      }
      else if(line.front() == ')
    }
  }
  else{
    cout << "could not open db";
  }
  
  db.close();
  return data;
}