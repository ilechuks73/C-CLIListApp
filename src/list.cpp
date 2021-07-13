#include "include/list.h"
#include "include/database.h"

using namespace std;

void List::print_menu()
{
  cout << "######################" << endl;
  cout << "1 - print List" << endl;
  cout << "2 - Add to list" << endl;
  cout << "3 - Delete from list" << endl;
  cout << "4 - Quit" << endl;

  cout << "Enter your choice : ";

  char choice;
  cin >> choice;
  
  
  if(choice == '4' )
  {
    cout << "Exiting ..." << endl;
    return;
  }
  else if(choice == '1')
  {
    print_list();
  }
  else if(choice == '2')
  {
    add_item();
  }
  else if(choice == '3')
  {
    delete_item();
  }
  else
  {
    cout << "sorry choice not implemented"<< endl;
    print_menu();
  }
  
}

void List::add_item()
{
  cout << "\x1B[2J\x1B[H";
  cout << "### ADD ITEM ####" << endl;
  cout << "Type in an item and press enter: ";

  string item;
  cin >> item;

  list.push_back(item);

  cout << "\x1B[2J\x1B[H";
  cout << "Succesfully added to item list" << endl;
  cout << "M - to return to Menu" << endl;
  cout << "I - to add more items"<< endl;
  cout << "Enter your choice: ";

  char choice;
  cin >> choice;

  if(tolower(choice)=='m'){
    print_menu();
  }
  else if(tolower(choice)=='i'){
    add_item();
  }
  else{
    cout << "Invalid option!" <<endl;
    cout << "Returning to Menu" <<endl;
    print_menu();
  }
}

void List::delete_item()
{
  cout << "\x1B[2J\x1B[H";
  cout << "### Delete Item ####" << endl;
  if(list.size()>0)
  {
    for (int i=0; i<(int)list.size(); i++ )
    {
      cout << i << "--" << list[i] << endl;
    }
    cout << "Enter index of item to delete: ";
    int choice;
    cin >> choice;
    if(choice)
    {
      if(choice >= 0 && choice <= int(list.size())+1)
      {
        list.erase(list.begin()+(choice));
        cout << "item deleted" << endl;
        print_menu();
      }
    }
    else
    {
      cout << "please enter a valid number"<< endl;
      delete_item();
    }
  }
  else
  {
    cout << "This list is empty" << endl;
    print_menu();
  }

  
}

void List::print_list()
{
  cout << "\x1B[2J\x1B[H";
  cout << "### List ###" << endl;
  Database database;

  vector<string> data = list;
  for(int i=0; i<(int)data.size(); i++){
    cout << data[i] << endl;
  }

  cout << "M--Menu" << endl;
  char choice;
  cin >> choice;
  if(tolower(choice) == 'm')
  {
    print_menu();
  }
  else
  {
    cout << "invalid choice" << endl;
  }
}