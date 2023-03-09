#include <iostream>
#include <cstring>
using namespace std;
int n ,m;
string s;
int main(){
    cin >> n >> m;
    cin >> s;
   while(m--){
       int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        string s1 = s.substr(l1-1,r1-l1+1);
        string s2 = s.substr(l2-1,r2-l2+1);
        if(s1==s2){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl; 
        }
    }


    return 0;
}
