#include <iostream>
#include "C:\Users\ADMIN\Downloads\Documents\Desktop\Problem Solving 5\Library\clsDblLinkedList.h"

using namespace std;


int main()
{

    clsDblLinkedList <int> MydblLinkedList;

    
    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);
   
    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.UpdateItem(2, 500);

    cout << "\nAfter Updating Item(2): " <<"\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAfter(4, 500);

    cout << "\nAfter Insert  \n";
    MydblLinkedList.PrintList();


    return 0;

}