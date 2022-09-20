//
//  Project 1 Starter Code - DNA Profiling
//  TODO:  Put your header info here.  Update line above.
//  
//

#include "ourvector.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct PersonDNA{
  string name;
  ourvector<int> numDNA;
};

ourvector<string> 

void load_db(string filename, ourvector<string> &DNAtypes, ourvector<PersonDNA>&PersonDNA) 
{

  string line;
  ifstream file;
  file.open(filename)
  file >> line;  // reading the first line

  
  int i = 0;
  int namenum = 0;
  int numNum = 0;
  if(file.is_open())
  {
    while(getline(file, line, ','))
    {
      if(line!="name")
      {
        
      }
    }
  }
}

void display(ourvector<string> &database, int num, ourvector<string> &DNAtypes, ourvector<string>&DNA)
{
  for(int i = 1; i<database.size()+1; i++)
  {
    if(i%num == 0)
    {
      cout<<database[i-1]<<endl;
    }
    else
    {
      cout<<database[i-1]<<" ";
    }
  }
}

ourvector<string> load_dna(ourvector<string> &database, int num, ourvector<string> &DNAtypes, ourvector<string>&DNA)
{
  ourvector<string> vector;

  cout<<"Which DNA would you like to select (1-20.txt): ";
  string filename;
  getline(cin, filename);

  ifstream file(filename);
  string line;

  if(file.is_open())
  {
    while(getline(file, line))
    {
      database.push_back(line);
    }
  }
  else
  {
    cout<<"File not found"<<endl;
  }
  return vector;
}

ourvector<int> process(ourvector<string> &database, ourvector<string> &DNAtypes, ourvector<string>&DNA)
{
  int num = 0;
  for(int k = 0; k<DNAtypes.size(); k++)
  {
    for(int i = 0; i<DNA[0].size(); i++)
    {
      for(int j = 0; j<DNAtypes[k].size(); j++)
      {
        if(DNAtypes[k][j] == DNA[0][i+j])
        {
          if(j == DNAtypes[k].size()-1)
          {
            num++;
          }
        }
        else
        {
          break;
        }
      }
    }
    num = 0;
  }
}

void search(ourvector<string> &database, ourvector<int> &DNAtypes, int num, ourvector<string>&DNA)
{
  
  string name;
  for(int i = 0; i<database.size(); i++)
  {
    for(int j = 0; j<DNAtypes.size(); j++)
    {
      string val = database[i];
      
    }
  }
  cout<<name<<" is the match"<<endl;
}

int main() {
  cout<<"Enter file name: "<<endl;
  string filename;
  getline(cin, filename);
  ourvector<PersonDNA> PersonDNA;
  ourvector<string> database;
  ourvector<string> DNAtypes;
  
  int numDNAtypes = DNAtypes.size();

  //display(database, numDNAtypes+1);

  ourvector<string> DNA;
  load_db(0,filename, database, DNAtypes, DNA, PersonDNA);
  load_db(1,filename, database, DNAtypes, DNA, PersonDNA);
  //ourvector<int>amntOfDna = process(DNAtypes, DNA);
  //search(database, amntOfDna, numDNAtypes, DNA);
}
