// 포인터를 할당하고 삭제하기
#include <iostream>
using namespace std;

int main()
{
    int localVariable = 5;
    int * pLocal = &localVariable;
    int *pHeap = new int;
    if (pHeap == NULL)
    {
        cout << "Error! No memory for pHeap!!";
        return 0;
    }
    *pHeap = 7;
    cout << "localVariable: " << localVariable << endl;
    cout << "*pLocal: " << *pLocal << endl;
    cout << "*pHeap: " << *pHeap << endl;
    delete pHeap;
    if (pHeap == NULL)
    {
        cout << "Error! No memory for pHeap!";
        return 0;
    }
    *pHeap = 9;
    cout << "*pHeap: " << *pHeap << endl;
    delete pHeap;

    return 0;
}

