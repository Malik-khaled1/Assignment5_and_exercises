#include<stdio.h>
#include<string.h>

typedef struct
{
    char author_name[100];
    char title[100];
    char publisher[100];
    int year_of_publication;
}catalog_entry_t;


int main(void){

    catalog_entry_t book;

    strcpy(book.author_name, "HC.Andersen");
    strcpy(book.title, "Den Sorte Svane");
    strcpy(book.publisher, "Gyldendal");
    book.year_of_publication = 1960;


  printf("Book informations:\n%-15s: %s\n%-15s: %s\n%-15s: %s\n%-15s: %d\n",
    "Author's name", book.author_name,
    "Title", book.title,
    "Publisher", book.publisher,
    "Year", book.year_of_publication);




    return 0;


}









