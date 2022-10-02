//Bee 1759
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


    return 0;
}