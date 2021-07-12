#include "include/database.h"

using namespace std;

void Database::write(vector<string> list){
  ofstream db;
  db.open("db/lists.sl");
  if(db.is_open()){
    db << "'1, 2, 3, 4, 5'";

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
      data.push_back(line);

    }
  }
  else{
    cout << "could not open db";
  }
  
  db.close();
  return data;
}