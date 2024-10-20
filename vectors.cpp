#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vk(10);
    for(int i=0;i<vk.size();i++){
        vk[i]=i*10;
    }
    cout<<"hey"<<endl;
   

    /*cout<<v.empty()<<endl;
    v.push_back(-1);
    cout<<v[10]<<endl;
*/

    vk.resize(15);
    for(int i=0;i<vk.size();i++){
        cout<<vk[i]<<endl;
    }
}