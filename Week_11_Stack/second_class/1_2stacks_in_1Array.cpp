#include <iostream>
using namespace std;
    
class Stack
{
public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            cout<<"OVERFLOW"<<endl;
        }

        else{
            top1++;
            arr[top1] = data;
        }
        
    }
    void push2(int data)
    {
        if (top2 - top1 == 1)
        {
            cout<<"OVERFLOW"<<endl;
        }
        
        else
        {
            top2--;
            arr[top2] = data;
        }
        
    }
    void pop1()
    {
        if (top1 == -1)
        {
            cout<<"UNDERFLOW"<<endl;
        }
        
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            cout<<"UNDERFLOW"<<endl;
        }
        
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }

    void print()
    {
        cout << endl;
        cout<< "Top1 : " << top1 <<endl;
        cout<< "Top2 : " << top2 <<endl;

        for(int i = 0; i <size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;

    }

};



int main()
{
    Stack st(4);
    st.print();

    // push from front
    st.push1(1);
    st.push1(2);

    st.print();

    // push from back
    st.push2(3);
    st.push2(4);

    st.print();

    // over flow condition push once again to check 
    st.push2(100);

    // pop from front
    st.pop1();
    st.pop1();
    st.print();

    //insert from back
    st.push2(5);
    st.push2(6);
    st.push2(7); // overflow
    

    //pop from front when top = -1
    //underflow condition

    st.pop1();
    
    



    return 0;
}

