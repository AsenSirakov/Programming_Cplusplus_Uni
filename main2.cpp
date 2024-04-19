#include <iostream>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct book
{
char name[40];
char author[50];
double price;
char status[10];	
};
void book_create(book books[])
{
  for(int i = 0; i < 3; i++)
  {
  
  cout<<"Zaglavie na knigata: ";
  cin>>books[i].name;
  cout<<"Avtor na knigata: ";
  cin>>books[i].author;
  cout<<"Cena na knigata: ";
  cin>>books[i].price;
  if(books[i].price < 0 || books[i].price > 100){
  	cout<<"Greshen vhod, cenata trqbva da e mejdu 0 i 100!!!"<<endl;
    cout<<"Vuvedete nova cena: ";
	cin>>books[i].price;
  }
  cout<<"Status na knigata: ";
  cin>>books[i].status;
  }	
}
void output_book(book books[])
{
	cout<<endl;
	cout<<"Vsichki knigi v bibliotekata:"<<endl;
	for(int i = 0; i < 3; i++){
		cout<<books[i].name<<"-"<<books[i].author<<"-"<<books[i].price<<"lv."<<"-"<<books[i].status<<endl;
	}
}
void number_books(book books[])
{
	int counter = 0;
	for(int i = 0; i < 3; i++){
		if(strlen(books[i].name)>10){
			counter++;
		}
		}
	cout<<"Knigi sus zuglavie po-dulgo ot 10 simvola: "<<counter;
}
int main(int argc, char** argv) {
	book books[4];
	book_create(books);
	output_book(books);
	number_books(books);
	return 0;
}
