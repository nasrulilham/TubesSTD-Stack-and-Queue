#include "Tubes.h"

int main() {
    // Create queue and stack
    ListMakanan Q;
    stack S;
    CreateListMakanan(Q);
    CreateStack(S);

    while (true) {
        int choice = Menu();
        if (choice == 1) {
            // Enqueue
            infotype MakananBaru;
            cout << "Enter ID: ";
            cin >> MakananBaru.ID;
            cout << "Enter Makanan: ";
            cin >> MakananBaru.Makanan;
            cout << "Enter Porsi: ";
            cin >> MakananBaru.Porsi;

            Elemen *P;
            CreateElemen(MakananBaru, P);
            Enqueue(Q, P);
        }
        else if (choice == 2) {
            // Dequeue
            Elemen *P;
            Dequeue(Q, P);
            if (P != NULL) {
                cout << "Dequeued: " << P->info.ID << " " << P->info.Makanan << " " << P->info.Porsi << endl;
                delete P;
            }
        }
        else if (choice == 3) {
            // Show all
            ShowSemuaMakanan(Q);
        }
        else if (choice == 4) {
            // Push
            infotype X;
            cout << "Enter ID: ";
            cin >> X.ID;
            cout << "Enter Makanan: ";
            cin >> X.Makanan;
            cout << "Enter Porsi: ";
            cin >> X.Porsi;

            Push(S, X);
        }
        else if (choice == 5) {
            // Pop
            int X = Pop(S);
            if (X != -1) {
                cout << "Popped: " << X << endl;
            }
        }
        else if (choice == 6) {
            // Print stack
            PrintStack(S);
        }
        else if (choice == 7) {
            // Exit
            break;
        }
    }

    return 0;
}
