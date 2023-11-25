#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res =0;
        int cnt = 0;
        for(int i=n-1;i>=0;i--) {
            if(s[i] == 'B'){
                cnt++;
            }
            else {
                res+=cnt;
                if(cnt){
                    s[i]='B';
                    cnt=0;
                    i++;
                }
            }
    }
    cout <<res<<"\n";
    }
}
