#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
class info{
	public:
		int id_num;
		string name;
};
class Student: public info{
	public:
		int num_of_subjects;
		int num_books;

};
class Prof: public info{
	public:
		int tin;

};
class Staff: public info{
	public:
		int sss;
};


int main(){
	
	Student student;
	
		cout << "Enter Student Name " << ": ";
		cin >> student.name;
		cout << "Enter ID Number: ";
		cin >> student.id_num;
		cout << "Enter Number of Books: ";
		cin >> student.num_books;
		cout << "Enter Number of Subjects: ";
		cin >> student.num_of_subjects;
		cout << endl;
		
	Prof prof;
	
		cout << "Enter Prof Name " << ": ";
		cin >> prof.name;
		cout << "Enter ID Number: ";
		cin >> prof.id_num;
		cout << "Enter TIN Number: ";
		cin >> prof.tin;
		cout << endl;
		
	Staff staff;
	
		cout <<"Enter Staff Name " << ": ";
		cin >> staff.name;
		cout << "Enter ID Number: ";
		cin >> staff.id_num;
		cout << "Enter SSS Number: ";
		cin >> staff.sss;
		cout<< endl;
		
		cout << "Student name: " << student.name << endl;
		cout << "Student ID number: " << student.id_num << endl;
		cout << "Student number of subjects: " << student.num_of_subjects << endl;
		cout << "Student number of books: " << student.num_books << endl;
		cout << "Professor name: " << prof.name << endl;
		cout << "Professor ID number: " << prof.id_num << endl;
		cout << "Professor TIN: " << prof.tin << endl;
		cout << "Staff name: " << staff.name << endl;
		cout << "Staff ID number: " << staff.id_num << endl;
		cout << "Staff SSS: " << staff.sss << endl;
	return 0;
}
