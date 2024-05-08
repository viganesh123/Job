#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
class Student
{
public:
int rollno;
char name[20];
char dv;
void get()
{
cout<<"Enter name: ";
cin>>name;
cout<<"Enter roll no.: ";
cin>>rollno;
cout<<"Enter division: ";
cin>>dv;
}
void put()
{
cout<<"Name: "<<name<<endl;
cout<<"Roll No.: "<<rollno<<endl;
cout<<"Division: "<<dv<<endl;
}
int getroll()
{
return rollno;
}
};
void write_record()
{
ofstream outFile;
Student obj;
outFile.open("student.dat", ios::binary | ios::app);
obj.get();
outFile.write((char*)&obj, sizeof(obj));
outFile.close();
}
void display_record()
{
ifstream inFile;
Student obj;
inFile.open("student.dat", ios::binary);
while(inFile.read((char*)&obj, sizeof(obj)))
 {
 obj.put();
 }
inFile.close();
}
void search_record(int n)
{
ifstream inFile;
Student obj;
inFile.open("student.dat", ios::binary);
while(inFile.read((char*)&obj, sizeof(obj)))
{
if(obj.getroll() == n)
{
obj.put();
break;
}
}
inFile.close();
}
void delete_record(int n)
{
Student obj;
ifstream inFile;
inFile.open("student.dat", ios::binary);
ofstream outFile;
outFile.open("temp.dat", ios::binary | ios::out);
while(inFile.read((char*)&obj, sizeof(obj)))
{
if(obj.getroll() != n)
outFile.write((char*)&obj, sizeof(obj));
}
inFile.close();
outFile.close();
remove("student.dat");
rename("temp.dat", "student.dat");
}
void modify_record(int n)
{
fstream file;
file.open("student.dat", ios::in | ios::out);
Student obj;
while(file.read((char*)&obj, sizeof(obj)))
{
if(obj.getroll() == n)
{
cout<<"Enter new details: ";
obj.get();
int pos = -1*sizeof(obj);
file.seekp(pos,ios::cur);
file.write((char*)&obj, sizeof(obj));
}
}
file.close();
}
int main()
{
int ch, n;
while(true)
{
cout<<"1. Write"<<endl;
cout<<"2. Display"<<endl;
cout<<"3. Search"<<endl;
cout<<"4. Delete"<<endl;
cout<<"5. Modify"<<endl;
cout<<"6. Exit"<<endl;
cout<<"Enter your choice: ";
cin>>ch;
switch(ch)
{
case 1: cout<<"Enter no. of records: ";
cin>>n;
for(int i=0; i<n; i++)
write_record();
break;
case 2: display_record(); break;
case 3: cout<<"Enter roll no.: ";
cin>>n;
search_record(n);
break;
case 4: cout<<"Enter roll no.: ";
cin>>n;
delete_record(n);
break;
case 5: cout<<"Enter roll no.: ";
cin>>n;
modify_record(n);
break;
case 6: exit(1); break;
}
}
return 0;
}







































































// ALGORITHM:
// Algorithm: Student Information System
// 1. Define Student Structure
//  Create a structure named Student with members rollNo, name, division, and address.
// 2. Function to Add a Student
//  Open the file &quot;students.dat&quot; in append mode.
//  Read student details (roll number, name, division, address) from the user.
//  Write the student structure to the file.
//  Close the file.
//  Print a success message.
// 3. Function to Delete a Student
//  Open the file &quot;students.dat&quot; for reading and create a temporary file &quot;temp.dat&quot; for writing.
//  Read the roll number to delete from the user.
//  Traverse through the file and copy records to &quot;temp.dat&quot; excluding the one to be deleted.
//  Close both files.
//  Delete the original file and rename &quot;temp.dat&quot; to &quot;students.dat&quot;.
//  Print a success message if the student is found, else print a message indicating the student was
// not found.
// 4. Function to Display Student Information
//  Open the file &quot;students.dat&quot; for reading.
//  Read the roll number to display from the user.
//  Traverse through the file and print details if the roll number matches.
//  Close the file.
//  Print a message indicating whether the student was found or not.
// 5. Main Function
//  Initialize a variable choice to 0.
//  Start a do-while loop until the user chooses to exit.
//  Display a menu with options to add, delete, display, or exit.
//  Read the user&#39;s choice.
//  Execute the corresponding function based on the choice.
//  Repeat until the user chooses to exit.
// 6. Detailed Steps:
// 1. Start the program by initializing the choice variable to 0.
// 2. Enter a do-while loop to display the menu until the user chooses to exit.
// 3. Display the menu options:
// 1. Add Student
// 2. Delete Student
// 3. Display Student Information
// 4. Exit
// 4. Read the user&#39;s choice.
// 5. Execute the corresponding function based on the choice:
// a. Case 1: Add a student using the addStudent function.
//      Case 2: Delete a student using the deleteStudent function.
//  Case 3: Display student information using the displayStudent function.
//  Case 4: Print an exit message and end the loop.
//  Default: Print an invalid choice message.
// 6. Repeat the loop until the user chooses to exit.
// 7. End of the algorithm.