//Bee 1759
//I have updated this to git "developer" branch.
#include <iostream>
using namespace std;

void ho(){
    cout<<"Ho";
}

int main() {
    
    int N;
    cin>>N;

    for(int i = 1; i <= N; i++){
        ho();
        if(i < N)cout<<" ";
        else if(i == N)cout<<"!"<<endl;
    }
    // Bee 1759

    return 0;
}
