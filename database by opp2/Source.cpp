#include<iostream>
#include<string>
#define SIZE 70
using namespace std;
struct date {
	string day;
	string month;
	string year;
};
class student {
	int stnum;
	string stname;
	string stfName;
	string stcgpa;
	date stDOB;
	date stDOA;
	public:
		void readd();
		void disploy();
		bool search();
};

void student::readd()
{
	cout << "Enter roll number: ";
	cin >> stnum;

	cout << endl << endl << "Enter Name : ";
	cin.ignore();
	cin >> stname;

	cout << "\n\n" << "Enter father name : ";
	cin.ignore();
	cin >> stfName;

	cout << "\n\n" << "Enter CGPA : ";
	cin.ignore();
	cin >> stcgpa;

	cout << "\n\n" << "Enter Date of Birth : ";
	cin.ignore();
	cin >> stDOB.day;
	cin >> stDOB.month;
	cin >> stDOB.year;

	cout << "\n\n" << "Enter Date of Admision : ";
	cin.ignore();
	cin >> stDOA.day;
	cin >> stDOA.day;
	cin >> stDOA.year;
}


	/*	}
		total = total + strenght;
		remain = 70 - total;
		cout << "the remaining entries are :" << remain << endl;
		}
		};*/



void student::disploy() {
	cout << "\t\t" << stnum << "\t\t" << stname << "\t\t" << stfName << "\t\t" << stcgpa << "\t\t" << stDOB.day << "\t\t" << stDOA.day << "\t\t" << endl;

}


bool student::search() {
	int rollNo;
	
	cout << "enter the roll number of student you want to search.\n";
	cin >> rollNo;
	if (rollNo == stnum) {
		cout << endl << "here is the data of :" << stnum << endl;
		cout << "Name: " << stname << endl;
		cout << "Father Name: " << stfName << endl;
		cout << "CGPA: " << stcgpa << endl;
		cout << "DOB: " << stDOB.day << endl;
		cout << "DOA: " << stDOA.day << endl;
	}
	else
		cout << "Not in record.\n";

}

int total = 0, remain;

//function declaration
void createDB(student stdata[], int&);
void search(student stdata[],int&);
void display(student stdata[]);
void exit();

//void append(student stdata[]);
//void update(student stdata[]);
//void deleteRecord(student stdata[]);

int main() {
	student stdata[SIZE];
	int n=0,rollno;
	int choice;
	while (true) {
		cout << " * *******Menu********" << endl;
		cout << "1. Create new Database." << endl;
		cout << "2. Append new record." << endl;
		cout << "3. Search a record." << endl;
		cout << "4. Update existing record.n" << endl;
		cout << "5. Delete a record." << endl;
		cout << "6. Display record." << endl;
		cout << "7. Exit." << endl;
		cout << "What you want to do ?" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: createDB(stdata[SIZE],n);
					
			break;
	/*	case 2: append(stdata[SIZE]);
			break;*/
		case 3: search(stdata[SIZE],rollno);
			break;
	/*	case 4: update(stdata[SIZE]);
			break;
		case 5: deleteRecord(stdata[SIZE]);
			break;*/
		case 6: display(stdata[SIZE]);
			break;
		case 7: exit();
			break;

		default:cout << "You made a wrong selection.\n";
			break;
		}
	}

}
//function initialization for Creating database.
void createDB(student stdata[], int& strenght) {
	system("cls");
	//int strenght;
	cout << "For how many students you want to create database\n";
	cin >> strenght;
	if (strenght > 70)
		cout << "The database can only be created for students less than or equal to 70.\n";
	else {
		for (int i = 0; i < strenght; i++) {
			stdata[i].readd();
		}
	}
}
//initialization for searching a record.
void search(student stdata[],int &rollNo) {
	system("cls");
	cout << "total : " << total << endl;
	for (int i = 0; i < total; i++)
	{
		stdata.search();
	}
}
//initialization for display.
void display(student stdata[]) {
	system("cls");
	cout << "****Displaying Data of Students****" << endl << endl;
	cout << "No\t\tR.N\t\tName\t\tF.Name\t\tCGPA\t\tDOB\t\tDOA" << endl;
	cout << "__________________________________________________________________________________________________" << endl;
	for (int i = 0; i < total; i++) {
		cout << i + 1;
		stdata[i].disploy();
	}
	cout << "__________________________________________________________________________________________________" << endl << endl << endl;

}
//initialization for exit.
void exit() {
	exit(EXIT_SUCCESS);
}
/*
	total = total + strenght;
	remain = 70 - total;
	cout << "the remaining entries are :" << remain << endl;
}*/
// initialization for append new record.
//void append(student stdata[]) {
//	system("cls");
//	int newrec;
//	cout << "for how many students you want to append new record : ";
//	cin >> newrec;
//	if (newrec > remain || total + newrec > remain)
//		cout << endl << "sorry! the remaining entries left are :" << remain << endl;
//	else {
//		for (int i = total; i < total + newrec; i++) {
//			cout << endl;
//			cout << " *****Enter students data *****\n\n";
//			cout << "Enter roll number: ";
//			cin >> stdata[i].stnum;
//
//			cout << endl << endl << "Enter Name : ";
//			cin.ignore();
//			cin >> stdata[i].stname;
//
//			cout << "\n\n" << "Enter father name : ";
//			cin.ignore();
//			cin >> stdata[i].stfName;
//
//			cout << "\n\n" << "Enter CGPA : ";
//			cin.ignore();
//			cin >> stdata[i].stcgpa;
//
//			cout << "\n\n" << "Enter Date of Birth : ";
//			cin.ignore();
//			cin >> stdata[i].stDOB.day;
//
//			cout << "\n\n" << "Enter Date of Admision : ";
//			cin.ignore();
//			cin >> stdata[i].stDOA.day;
//		}
//
//	}
//	remain = remain - newrec;
//	cout << " Now the remaining entries are :" << remain << endl;
//	total = 70 - remain;
//	cout << "the total no of entries created are :" << total << endl;
//}


//initializaion for updating record.
//void update(student stdata[]) {
//	system("cls");
//	int rollNo;
//	cout << "enter the roll number of student you want to update.\n";
//	cin >> rollNo;
//	for (int i = 0; i < total; i++)
//	{
//		if (rollNo == stdata[i].stnum) {
//			cout << endl << "here is the old data of :" << stdata[i].stnum << endl;
//			cout << "Name: " << stdata[i].stname << endl;
//			cout << "Father Name: " << stdata[i].stfName << endl;
//			cout << "CGPA: " << stdata[i].stcgpa << endl;
//			cout << "DOB: " << stdata[i].stDOB.day << endl;
//			cout << "DOA: " << stdata[i].stDOA.day << endl << endl;
//
//			cout << "enter new record\n";
//			cout << "Enter roll number: ";
//			cin.ignore();
//			cin >> stdata[i].stnum;
//
//			cout << endl << endl << "Enter Name : ";
//			cin.ignore();
//			cin >> stdata[i].stname;
//
//			cout << "\n\n" << "Enter father name : ";
//			cin.ignore();
//			cin >> stdata[i].stfName;
//
//			cout << "\n\n" << "Enter CGPA : ";
//			cin.ignore();
//			cin >> stdata[i].stcgpa;
//
//			cout << "\n\n" << "Enter Date of Birth : ";
//			cin.ignore();
//			cin >> stdata[i].stDOB.day;
//
//			cout << "\n\n" << "Enter Date of Admision : ";
//			cin.ignore();
//			cin >> stdata[i].stDOA.day;
//
//		}
//		else
//			cout << "Not in record.\n";
//	}
//}
//initialization for deleting a record.
//void deleteRecord(student stdata[]) {
//	system("cls");
//	int del;
//	cout << "enter the roll number of student whose record to be deleted.\n";
//	cin >> del;
//	for (int i = 0; i < total; i++) {
//		if (del == stdata[i].stnum) {
//			for (int j = i; j < total; j++) {
//				stdata[j].stnum = stdata[j + 1].stnum;
//				stdata[j].stname = stdata[j + 1].stname;
//				stdata[j].stfName = stdata[j + 1].stfName;
//				stdata[j].stcgpa = stdata[j + 1].stcgpa;
//				stdata[j].stDOB = stdata[j + 1].stDOB;
//				stdata[j].stDOA = stdata[j + 1].stDOA;
//			}
//			total--;
//			cout << "your required data is sucessfully deleted.\n";
//			break;
//		}
//	}
//	cout << "existing total no of entries = " << total;
//}







