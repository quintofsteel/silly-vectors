#include <iostream>
#include <vector>

using namespace std;

int main(){
    int option,n,e,j;
    string response;
    vector <int> v;

    cout<<"Enter the number of elements to put in the vector "<<endl;
    cin>>n;
    cout<<"Enter the elements seperated by space:"<<endl;

    for (int i = 0; i < n; i++){
        cin>> e;
        v.push_back(e);
    }

    cout<<"You created a vector of size "<<v.size()<<endl;
    cout<<"The first element is "<<v.front()<<endl;
    cout<<"The middle element is "<<v[n/2]<<endl;
    cout<<"The last element is "<<v.back()<<endl;

    cout<<"----------------------------"<<endl<<endl<<endl;
    
    cout<<"Would you like do explore more vector operations? y/n"<<endl;
    cin>>response;

    if (response == "y"){
        cout<<"Choose option number :"<<endl;
        cout<<"1. Clear all vector elements"<<endl;
        cout<<"2. Display all elements"<<endl;
        cout<<"3. Display the ith element"<<endl;

        cin>>option;
    }else{cout<<"Cool,have a good one!"<<endl;}

    switch(option){
        case 1:
            v.clear();
            cout<<"Vector cleared!"<<endl;
            break;
        case 2:
            for (int k=0; k<v.size(); k++){
                cout<<v[k]<<endl;
            }
            break;
        case 3:
            cout<<"Enter the position of the element "<<endl;
            cin>>j;
            cout<<v[j];
            break;
        default:
            cout<<"Invalid option"<<endl;

    }
    return 0;
}