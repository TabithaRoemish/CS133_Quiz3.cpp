//Tabitha Roemish - Quiz 3 - using list and iterators
#include <iostream>
#include <list>
#include <string>using namespace std;

list<string> split(const string& phrase, char delimiter = ' ');

int main()
{
  string s(" one, two, three");
  list<string> words = split(s);
  list<string>::const_iterator it;
  
  for (it = words.begin(); it != words.end(); it++)
    cout.put(*it);
  
  return EXIT_SUCCESS;
 }
    
list<string> split(const string& phrase, char delimiter = ' ')
{
    list<string> returnList;
    string::const_iterator sit;
    string temp;
    for (sit = phrase.begin(); sit != phrase.end(); sit++)
    {
      while (*sit != delimiter)
      {
        temp.push_back(*sit);}
        returnList.push_back(temp);
      }
    
    return returnList;
    
 }
  
  

   
