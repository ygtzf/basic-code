#include <iostream>
#include "list.h"

using namespace std;

int main(int argc, char** argv)
{
    List pHead;
    pHead = Create();
    cout << pHead->data << endl;

    AddEnd(pHead, 12);
    cout << "------1-------" << endl;
    Print(pHead);

    AddEnd(pHead, 34);
    cout << "------2-------" << endl;
    Print(pHead);

    AddEnd(pHead, 56);
    cout << "------3-------" << endl;
    Print(pHead);

    AddEnd(pHead, 78);
    cout << "------4-------" << endl;
    Print(pHead);

    AddHead(pHead, 90);
    cout << "------5-------" << endl;
    Print(pHead);

    Delete(pHead, 2);
    cout << "------6-------" << endl;
    Print(pHead);

    Destroy(pHead);
}
