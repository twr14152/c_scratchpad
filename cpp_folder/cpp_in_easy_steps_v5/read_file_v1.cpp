#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  char letter;
  int i;
  ifstream reader("router_config.txt");
  if (!reader) 
  {
    cout << "Error openning file" << endl;
    return -1;
  } else {
    for (i = 0; !reader.eof();i++)
    {
      reader.get(letter);
      cout << letter;
    }
    reader.close();
    cout << "Iterations " << i << endl;
  }
	return 0;
}


/*
 ./main
hostname r1
no ip domain-name lookup
ip ssh version 2
username test password test


Iterations 84
 
*/
