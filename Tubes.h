#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED

#include <iostream>

using namespace std;

const int maxEl = 100;

struct infotype {
    int ID;
    string Makanan;
    int Porsi;
};

typedef struct Elemen *address;

struct Elemen {
    infotype info;
    address next;
};

struct ListMakanan {
    address first;
};

struct stack {
    infotype data[maxEl];
    int top;
};

// Queue functions
void CreateListMakanan(ListMakanan &Q);
void CreateElemen(infotype MakananBaru, Elemen *&P);
bool isEmpty(ListMakanan Q);
void Enqueue(ListMakanan &Q, Elemen *P);
void Dequeue(ListMakanan &Q, Elemen *&P);
void ShowSemuaMakanan(ListMakanan Q);

// Stack functions
void CreateStack(stack &S);
bool IsEmpty(stack S);
bool IsFull(stack S);
void Push(stack &S, infotype X);
int Pop(stack &S);
void PrintStack(stack S);

//Menu
int Menu();

#endif // TUBES_H_INCLUDED
