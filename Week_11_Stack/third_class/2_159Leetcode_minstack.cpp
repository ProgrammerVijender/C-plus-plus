// SOLUTION IS CORRECT DONT WORRY REMOVE COMMENT AND USE IT




// class MinStack {
// public:
//     vector<pair<int,int>>st;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         pair <int,int> p;
        
//         if(st.empty())
//         {

//             p.first = val;
//             p.second = val;
//             st.push_back(p);

//         }
//         else
//         {
//             p.first = val;

//             int Previous_min = st.back().second;
//             p.second  = min(Previous_min ,val);
//             st.push_back(p);
//         }


//     }
    
//     void pop() {
//         if(st.empty())
//         {
//             cout<<"underflow happen"<<endl;
//         }
//         else
//         {
//             st.pop_back();
//         }
//     }
    
//     int top() {
//         pair <int,int> p =st.back() ;
        
//         return p.first;
//     }
    
//     int getMin() {
//         pair <int,int> p =st.back() ;

//         return p.second;
//     }
// };