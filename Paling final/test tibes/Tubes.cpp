#include "Tubes.h"

void CreateListMakanan(ListMakanan &Q) {
    Q.first = NULL;
}

bool isEmpty(ListMakanan Q) {
    return Q.first == NULL;
}

void CreateElemen(infotype X, address &P) {
    P = new Elemen;
    P->info = X;
    P->next = NULL;
}

void Enqueue(ListMakanan &Q, address P) {
    if (isEmpty(Q)) {
        Q.first = P;
    }
    else {
        address last = Q.first;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = P;
    }
}

void Dequeue(ListMakanan &Q, address &P) {
    if (isEmpty(Q)) {
        P = NULL;
    }
    else {
        P = Q.first;
        Q.first = Q.first->next;
    }
}

void ShowSemuaMakanan(ListMakanan Q) {
    if (isEmpty(Q)) {
        cout << "Belum Ada Pesanan" << endl;
        return;
    }

    cout << "Pesanan : " << endl;
    cout << endl;
    address P = Q.first;
    while (P != NULL) {
        cout << "Pesanan Ke-" << P->info.ID << endl
        << "Makanan : " << P->info.Makanan << endl
        << "Porsi : " << P->info.Porsi << endl;
        cout << endl;
        P = P->next;
    }
    cout << endl;
}

void CreateStack(stack &S) {
    S.top = -1;
}

bool IsEmpty(stack S) {
    return S.top == -1;
}

bool IsFull(stack S) {
    return S.top == maxEl - 1;
}

void Push(stack &S, infotype X) {
    if (IsFull(S)) {
        cout << "Tidak Ada Piring" << endl;
        return;
    }

    S.top++;
    S.data[S.top] = X;
}

int Pop(stack &S) {
    if (IsEmpty(S)) {
        cout << "Stack is empty" << endl;
        return -1;
    }

    infotype X = S.data[S.top];
    S.top--;
    return X.ID;
}

void PrintStack(stack S) {
    if (IsEmpty(S)) {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Piring : " << endl;
    cout << endl;
    for (int i = S.top; i >= 0; i--) {
        cout << "Piring Ke " << S.data[i].ID << " " << "Porsi : " << S.data[i].Porsi << endl;
    }
    cout << endl;
}

int Menu() {
    int choice;

    cout << "Menu:" << endl;
    cout << "1. Masukkan Pesanan" << endl;
    cout << "2. Hapus Pesanan" << endl;
    cout << "3. List Pesanan" << endl;
    cout << "4. Tambah Piring" << endl;
    cout << "5. Hapus Piring" << endl;
    cout << "6. List Piring" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    return choice;
}
