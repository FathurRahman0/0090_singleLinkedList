//$nim belakang_singleLinkedlist

#include <iostream>
using namespace std;

class Node
{
public :
    int noMhs;
    Node *next;
};

class Linkedlist
{
    Node *START;
public:
    Linkedlist()
    {
        START = NULL;
    }

    Void addNode()
    {
        int nim;
        cout << "\nMasukkan Nomer Mahasiswa: ";
        cin >> nim;
        
        Node *nodeBaru = new Node;
        nodeBaru->noMhs = nim;

        if(start == NULL || nim  <= START->noMhs)
        {
            if ((START != NULL)) && (nim == START -> noMhs)
            {
                cout <, "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
            nodeBaru->next = START;
            START = nodeBaru;
            return;
        }

        Node * previeus = START;
        Node *current = START;
        
        while ((current != NULL) && (nim >= current->noMhs))
        {
            if (nim == current->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
            previous = current;
            current = current->next;
        }

        nodeBaru->next = current;
        previous->next = nodeBaru;


    }

}
