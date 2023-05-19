#include <iostream>
using namespace std;

class Base
{
    public:
    int x,y;
    void ABC()          // 500
    {   }
    virtual void fun()          // 1000
    {   cout<<"Base fun\n";}
    virtual void gun()        // 2000
    {   cout<<"Base gun\n";}
    virtual void sun()         //3000
    {   cout<<"Base sun\n";}
};
	 
class Derived : public Base
{
public:
    int i,j;
    virtual void gun()      // 4000
    {   cout<<"Derived gun\n"; }
    virtual void run()       //6000
    {   cout<<"Derived run\n"; }
     void add()              // 7000
    {   cout<<"Derived add\n";}
};

int main()
{
    cout<<"Size of Base : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
    Base *bp = new Derived();
    bp->fun();      // CALL 1000
    bp->gun();      // CALL 4000
    bp->sun();      // CALL 3000
    return 0;
}

/*bp->gun();

PUSH  ESI                    // PUSH 300
MOV EAX , [ESI]         // MOV EAX, 400
CALL [EAX + 8]         //     CALL  4000*/
