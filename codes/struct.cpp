#include <iostream>
#include <cstring>
using namespace std;
struct Books {
char title[50];
char author[50];
char subject[100];
int book_id;
};
int main() {
struct Books Book1; // Declare Book1 of type Book
// Books Book1;  this way can be used to define a struct variable
struct Books Book2; // Declare Book2 of type Book
//book 1 specification
strcpy( Book1.title, "Starting out with cpp");
strcpy( Book1.author, "Tony Gaddies et.al");
strcpy( Book1.subject, "C++ Programming");
Book1.book_id = 6495407;
//book 2 specification
strcpy( Book2.title, "MEDEMER");
strcpy( Book2.author, "Dr Abiy Ahmed");
strcpy( Book2.subject, "Politics");
Book2.book_id = 6495700;
//Print Book1 info
cout << "Book 1 title : " << Book1.title <<endl;
cout << "Book 1 author : " << Book1.author <<endl;
cout << "Book 1 subject : " << Book1.subject <<endl;
cout << "Book 1 id : " << Book1.book_id <<endl;
//Print Book2 info
cout << "Book 2 title : " << Book2.title <<endl;
cout << "Book 2 author : " << Book2.author <<endl;
cout << "Book 2 subject : " << Book2.subject <<endl;
cout << "Book 2 id : " << Book2.book_id <<endl;
return 0;
}
