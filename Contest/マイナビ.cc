#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int N;
    cin >> N;
    vector<string> array(N);
    
    for(int i = 0; i < array.size(); i++){
        cin >> array.at(i);
    }
    
    // cout << array.at(0) << endl;

}

//A
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> array(3);
    int i = 0;
    while(i < 3) {
     cin >> array.at(i);
     i++;
    }

    sort(array.begin(), array.end());
    
    if(array.at(0)-array.at(1) == array.at(1)-array.at(2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
