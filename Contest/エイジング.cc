//B
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    string test;
    for(char c: S) {
        if(c == '9') {
            test.push_back('6');
        } else if(c == '6') {
            test.push_back('9');
        } else {
            test.push_back(c);
        }
    }
    
    reverse(test.begin(), test.end());
    
    cout << test << endl;    
}


// 結局PythonでA
a,b,c = map(int, input().split())

def test(z):
    y = 0
    if z == 1:
        y = 6
    elif z == 2:
            y = 5
    elif z == 3: 
            y = 4
    elif z == 4: 
            y = 3
    elif z == 5: 
            y = 2 
    elif z == 6: 
            y = 1 
    return y


d = test(a);
e = test(b);
f = test(c);

print(d + e + f)

/* うごかん

#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a,b,c;
    cin >> a >> b >> c;
    
    int test(int z) {
    int y = 0;
    if(z == 1) {
        y = 6;
        } else if (z == 2) {
            y = 5;
        } else if (z == 3) {
            y = 4;
        } else if (z == 4) {
            y = 3;
        } else if (z == 5) {
            y = 2; 
        } else if (z == 6) {
            y = 1; 
        } 
        return y;
    }


    int d = test(a);
    int e = test(b);
    int f = test(c);
     
    cout << a + b + c << endl;
    
}

*/