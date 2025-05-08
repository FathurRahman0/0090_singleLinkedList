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
    }

}
