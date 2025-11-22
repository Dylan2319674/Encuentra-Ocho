#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    bool found=false;
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        if (x==8) {
            found=true;
        }
    }

    cout<<(found?1:0);

    return 0;
}
