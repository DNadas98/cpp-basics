#include <iostream>

using std::cout, std::cin, std::string, std::endl;

struct Student {
    string name;
    double gpa;
    bool enrolled;
};

void printStudent(Student &student);

int main() {
  Student students[] = {
    {"Alice",   3.5, true},
    {"Bob",     3.2, false},
    {"Charlie", 3.9, true}
  };
  for(Student s : students) {
    printStudent(s);
    cout << endl;
  }

  return 0;
}

/**
 * Pass by reference to avoid copying the entire struct
 */
void printStudent(Student &student) {
  cout << "Name: " << student.name << endl;
  cout << "GPA: " << student.gpa << endl;
  cout << "Enrolled: " << (student.enrolled ? "Yes" : "No") << endl;
}