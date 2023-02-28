// 링크된 목록의 단순한 구현
#include <iostream>
using namespace std;

// 개체를 목록에 추가
class CAT
{
    public:
        CAT() { itsAge = 1; }
        CAT(int age):itsAge(age){}
        ~CAT(){};
        int GetAge() const { return itsAge; }
    private:
        int itsAge;
};

// 목록 관리, 고양이의 나이 순서로!
class Node
{
    public:
        Node(CAT*);
        ~Node();
        void SetNext(Node * node) { itsNext = node; }
        Node * GetNext() const { return itsNext; }
        CAT * GetCat() const { return itsCat; }
        void Insert(Node *);
        void Display();
    private:
        CAT *itsCat;
        Node *itsNext;
};

Node::Node(CAT* pCat):
itsCat(pCat),
itsNext(0)
{}

Node::~Node()
{
    cout << "Deleting node...\n";
    delete itsCat;
    itsCat = 0;
    delete itsNext;
    itsNext = 0;
}

// ********************
// 삽입
// 나이에 따라 고양이를 정렬한다.
// 알고리즘 : 행에서 맨 끝에 있으면, 고양이를 추가한다.
// 그렇지 않고 새 고양이가 현재 행보다 나이가 많고
// 또한 다음 행보다 나이가 적으면, 새 고양이를 현재 행 다음에
// 삽입한다. 그렇지 않으면 다음 행에서 Insert를 호출한다.
void Node::Insert(Node* newNode)
{
    if (!itsNext)
        itsNext = newNode;
    else
    {
        int NextCatsAge = itsNext->GetCat()->GetAge();
        int NewAge = newNode->GetCat()->GetAge();
        int ThisNodeAge = itsCat->GetAge();

        if (NewAge >= ThisNodeAge && NewAge < NextCatsAge)
        {
            newNode->SetNext(itsNext);
            itsNext = newNode;
        }
        else
        {
            itsNext->Insert(newNode);
        }
    }
}

void Node::Display()
{
    if (itsCat->GetAge() > 0)
    {
        cout << "My cat is ";
        cout << itsCat->GetAge() << " years old\n";
    }
    if (itsNext)
        itsNext->Display();
}

int main()
{
    Node *pNode = 0;
    CAT * pCat = new CAT(0);
    int age;

    Node *pHead = new Node(pCat);

    while(1)
    {
        cout << "New Cat's age? (0 to quit): ";
        cin >> age;
        if (!age)
            break;
        pCat = new CAT(age);
        pNode = new Node(pCat);
        pHead->Insert(pNode);
    }
    pHead->Display();
    delete pHead;
    cout << "Exiting...\n\n";

    return 0;
}