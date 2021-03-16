#include "Student.h"

using namespace std;

Student::Student()
{
	name = "";
  score = 0;
  grade = 'F';
}

Student::Student(std::string n, int s)
{
  name = n;
	score = s;

  if(score >= 90)
    grade = 'A';
  else if(score >= 80)
    grade = 'B';
  else if(score >= 70)
    grade = 'C';
  else if(score >= 60)
    grade = 'D';
  else
    grade = 'F';
}

void Student::print()
{
  cout << name << "\t" << score << "\t" << grade << endl;

}



