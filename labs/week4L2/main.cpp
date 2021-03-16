// Scott Herron, Abdullah Alnahwi, Haley Nguyen
// CECS 282-03
// Demo Time: 6:03pm
#include "Student.h"

int main() {
	Student array[5] = {{"Tom", 85}, {"Alice", 71}, {"Jack", 93},
                     {"Mary", 65}, {"Sue", 54}};
	
  for (Student student : array)
    student.print();

	return 0;
}