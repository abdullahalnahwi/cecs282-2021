#include <iostream>
#include "myDate.h"
#include <iomanip>
#include<string>
#include <cstring>
using namespace std;
 

struct student{
	char name[20]; // cstring null terminated character array 
	int studentID; // unique ID from 9000 - 9999
	char grade; // A-F
	myDate birthday; // random value: range 1/1/1995 to 12/31/2005
	string homeTown;

};
void nameSort(student ** pp); 
void idSort(student** pp);
void gradeSort(student** pp);
void birhtdaySort(student** pp);
void townSort(student** pp);


void display(student **sptr){
	cout << setw(21) <<left<<"Name";
    cout << setw(21) <<left<<"StudentID";
    cout << setw(21) <<left<<"Grade";
    cout << setw(21) <<left<<"Birthday";
    cout << setw(21) <<left<<"Home Town" << endl;
	cout<<setw(21)<<left<<"____";
	cout<<setw(21)<<left<<"_________";
	cout<<setw(21)<<left<<"_____";
	cout<<setw(21)<<left<<"________";
	cout<<setw(21)<<left<<"____ ____"<<endl;
    for (int i = 0; i < 10; i++)
    {

        cout << setw(21) << left << sptr[i]->name;
        cout << setw(21) <<left << sptr[i]->studentID;
        cout << setw(21) << left << sptr[i]->grade;
        cout << setw(21) << left << sptr[i]->birthday.toString();
        cout << setw(21) << left << sptr[i]->homeTown << endl;
    }
}

void populate(student ** sptr){
	myDate bd;
	srand(time(NULL));

	//student *s;
	//s = new student[10];
	//strcpy(s[0].name,"Don Lee");
	//student *s[10];

	string names[10]={"Don Lee","Mohamed Ali","Alex Varga","Mike Tyson","zack carmen","vector Kevin","kevin garcia","Abdullah Alnahwi","Lora Gold","Sara Nguyen"};
	char grades[5] = {'A','B','C','D','F'};
	string townname[10]={"Longbeach","Irvine","Dubai","Hunington beach","LA","Compton","Barcelona","madrid","Anaheim","Newport"};
	
	for(int i = 0; i <10; i++)
	{
		sptr[i] = new student;
		strcpy(sptr[i]->name,names[i].c_str());
		sptr[i]->grade=grades[rand()%5];
		sptr[i]->homeTown=townname[i];
		sptr[i]->studentID=rand()%(9999-9000+1)+9000;
		sptr[i]->birthday= myDate();
		sptr[i]->birthday.randomBd();
		
	}

}



int main() {
  	student * sptrArray[10]; // an array of 10 sptr's
	student ** sptr = sptrArray; // a sptr pointer pointing to an array of students
	populate(sptr);
	int choice;

	do
    {   
    	cout<<" \n";
        cout << " 1)Display list sorted by Name \n ";
        cout << "2)Display list sorted by Student ID \n 3)Display list sorted by Grade \n 4)Display list sorted by Birthday  \n 5)Display list sorted by Home Town \n 6)Exit \n";		
        choice = 0;
        cin >> choice;
        switch (choice)
        {
            case 1:
				{
				nameSort(sptr);
				display(sptr);		
                break;
				}
            case 2:
				{
				idSort(sptr);
				display(sptr);
                break;
				}  
            case 3:
				{
				gradeSort(sptr);
				display(sptr);
                break;
				} 
            case 4:
				{
				birhtdaySort(sptr);
				display(sptr);	
                break;
				}
			case 5:
				{
				townSort(sptr);
				display(sptr);				
                break;
				}      
            case 6:
				{
				cout<<" Exit ";
                break;
				}     
        default:
            cout<<" please choose from 1 - 6 ";
            break;
        }
    } while (choice != 6);
        return choice; 
}

void nameSort(student ** pp)    
   {                              
  
   int j, k;                      
   for(long j=0; j<9; j++)           //outer loop
      for(long k=j+1; k<10; k++)        //inner loop starts at outer

       { student ** p1 = pp+j;
         student ** p2 = pp+k;
        if((strcmp((*p1)->name ,(*p2)->name)>0 ))
        {
          student* tempptr = *p1;     
          *p1 = *p2;
          *p2 = tempptr;
        }
       }
   }
   void idSort(student** pp)    
   {                              
  
   int j, k;                      

   for(long j=0; j<9; j++)           //outer loop
      for(long k=j+1; k<10; k++)        //inner loop starts at outer
       { student ** p1 = pp+j;
         student ** p2 = pp+k;
	   
        if( (*p1)->studentID > (*p2)->studentID )
        {
          student* tempptr = *p1;     
          *p1 = *p2;
          *p2 = tempptr;
        }
       }
   }
   void gradeSort(student** pp)    
   {                              
  
   int j, k;                     

   for(long j=0; j<9; j++)           //outer loop
      for(long k=j+1; k<10; k++)        //inner loop starts at outer
       { student ** p1 = pp+j;
         student ** p2 = pp+k;
	   
        if( (*p1)->grade > (*p2)->grade )
        {
          student* tempptr = *p1;     
          *p1 = *p2;
          *p2 = tempptr;
        }
       }
   }
   void birhtdaySort(student** pp)    
   {                              
   int j, k;             

   for(long j=0; j<9; j++)           //outer loop
      for(long k=j+1; k<10; k++)        //inner loop starts at outer

       { student ** p1 = pp+j;
         student ** p2 = pp+k;
	   
        if((*p1)->birthday.daysBetween((*p2)->birthday) <0 )
        {
          student* tempptr = *p1;     //swap the pointers
          *p1 = *p2;
          *p2 = tempptr;
        }
       }
   }
   void townSort(student** pp)    
   {                              
   int j, k;                     
   for(long j=0; j<9; j++)           //outer loop
      for(long k=j+1; k<10; k++)        //inner loop starts at outer

       { student ** p1 = pp+j;
         student ** p2 = pp+k;
	   
        if((strcmp((*p1)->homeTown.c_str(),(*p2)->homeTown.c_str())>0 ))
        {
          student* tempptr = *p1;     //swap the pointers
          *p1 = *p2;
          *p2 = tempptr;
        }
       }
   }