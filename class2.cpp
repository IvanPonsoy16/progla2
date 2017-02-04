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
	
	Student student[3];
	Prof prof[3];
	Staff staff[3];
	
		for (int i=0; i<3; i++){
			cout << "Enter Student Name " << i+1 << ": ";
			cin >> student[i].name;
			cout << "Enter Id Number: ";
			cin >> student[i].id_num;
			cout << "Enter Number of Books: ";
			cin >> student[i].num_books;
			cout << "Enter Number of Subjects: ";
			cin >> student[i].num_of_subjects;
			cout << endl;
			cout << "Enter Prof Name " << i+1 << ": ";
			cin >> prof[i].name;
			cout << "Enter Id Number: ";
			cin >> prof[i].id_num;
			cout << "Enter TIN Number: ";
			cin >> prof[i].tin;
			cout << endl;
			cout <<"Enter Staff Name " << i+1 << ": ";
			cin >> staff[i].name;
			cout << "Enter Id Number: ";
			cin >> staff[i].id_num;
			cout << "Enter SSS Number: ";
			cin >> staff[i].sss;
			cout << endl;
}
		for (int i=0; i<3; i++){
			cout << student[i].name << i+1 << endl;
			cout << student[i].id_num << endl;
			cout << student[i].num_books << endl;
			cout << student[i].num_of_subjects << endl << endl;
			cout << prof[i].name << i+1 << endl;
			cout << prof[i].id_num << endl;
			cout << prof[i].tin << endl <<endl;
			cout << staff[i].name << i+1 << endl;
			cout << staff[i].id_num << endl;
			cout << staff[i].sss << endl <<endl;
}
	return 0;
}
