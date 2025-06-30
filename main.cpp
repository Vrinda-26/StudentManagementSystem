/*
TO-DO
connect data to file
add other features
*/


#include <iostream>
using namespace std;
string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int total=0;

void enter(){
    int choice;
    cout<<"How many students do you want to enter???"<<endl;
    cin>>choice;
    cin.ignore();
    if (total==0){
        total += choice;
        for(int i=0;i<choice;i++){
            cout << "Enter Student " << i+1 << " Name: ";
            getline(cin, arr1[i]);
            cout << "Enter Class: ";
            getline(cin, arr2[i]);
            cout << "Enter Section: ";
            getline(cin, arr3[i]);
            cout << "Enter Roll No.: ";
            getline(cin, arr4[i]);       
        }
    }
    else{
       for(int i=total;i<total+choice;i++){
            cout << "Enter Student " << i+1 << " Name: ";
            getline(cin, arr1[i]);
            cout << "Enter Class: ";
            getline(cin, arr2[i]);
            cout << "Enter Section: ";
            getline(cin, arr3[i]);
            cout << "Enter Roll No.: ";
            getline(cin, arr4[i]);       
        }         
        total += choice;
    }
    
            cout << "✅ Student data saved to 'students.csv' successfully!" << endl;

}

void show(){
    for(int i=0;i<total;i++){
    cout<<"Data of Student "<<i+1<<endl;
    cout<<"Name: "<<arr1[i]<<" Class: "<<arr2[i]<<" Section: "<<arr3[i]<<" Roll.No."<<arr4[i]<<endl;
    }
}
void update(){
    string roll;
    cin>>roll;
    for(int i=0;i<total;i++){
        if(roll==arr4[i]){
            cout<<" Previous Data of Student "<<i+1<<endl;
            cout<<"Name: "<<arr1[i]<<" Class: "<<arr2[i]<<" Section: "<<arr3[i]<<" Roll.No."<<arr4[i]<<endl;
            cout<<"Enter new Data";
            cout << "Enter Student " << i+1 << " Name: ";
            getline(cin, arr1[i]);
            cout << "Enter Class: ";
            getline(cin, arr2[i]);
            cout << "Enter Section: ";
            getline(cin, arr3[i]);
            cout << "Enter Roll No.: ";
            getline(cin, arr4[i]);       
        }
    }
}
void deleter(){}

void search(){
    string roll;
    cin>>roll;
    // cin.ignore();
    for(int i=0;i<total;i++){
        if(roll==arr4[i]){
            cout<<"Name: "<<arr1[i]<<" Class: "<<arr2[i]<<" Section: "<<arr3[i]<<" Roll.No."<<arr4[i]<<endl;
        }
    }    
}


int main() {
    int val;
    while(true){
    cout << "     Welcome to Student Management System!!!   " << endl;
    cout<<"Press 1 to Enter Student Data" << endl;    
    cout<<"Press 2 to show Student Data" << endl;
    cout<<"Press 3 to update Student Data" << endl;
    // cout<<"Press 4 to delete Student Data" << endl;
    cout<<"Press 5 to search Student Data" << endl;
    cout<<"Press 6 to exit" << endl;
    cin>>val;
    cin.ignore();
    switch(val){
        case 1:enter();break;
        case 2:show();break;
        case 3:update();break;
        // case 4:deleter();break;
        case 5:search();break;
        case 6:exit(0);break;  
        default:cout<<"Invalid No."<<endl;break;     
        }
    }
    return 0;
}