#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		string name;
		int age;
		void set_stud_num(int);
		int get_stud_num();
};

class Student : public Person{	
	private:
		int stud_num;
		int q1_score;
	public:
		string course;
		void set_stud_num (int x);
		int get_stud_num();
		void set_q1_score(int y);
		int get_q1_score();
};

void Student::set_stud_num(int x){
	
	stud_num = x;
}

int Student::get_stud_num(){
	
	return stud_num;
}

void Student::set_q1_score(int y){
	
	q1_score = y;
}
int Student::get_q1_score(){
	
	return q1_score;
}
int main(){
	
	Student student[3];
	int i, x, y=0, average=0;
	
	for (int i=0; i<3; i++){
		
		cout<<"Class List\n";
		
		cout<<"Enter Name: ";
		cin>>student[i].name;
		
		cout<<"Enter Age: ";
		cin>>student[i].age;
		
		cout<<"Enter Student Number: ";
		cin>>x;
		
		student[i].set_stud_num(x);
		
		cout<<"Enter Quiz1 Score: ";
		cin>>y;
		
		student[i].set_q1_score(y);
		
		cout<<"Enter Course: ";
		cin>>student[i].course;
		
		cout<<endl;
		
	}
	average = (student[0].get_q1_score() + student[1].get_q1_score() + student[2].get_q1_score())/3;
	
	cout<<"The Total average of quizes is " <<average;
	
	return 0;
}
