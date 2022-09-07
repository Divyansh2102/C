#include <iostream>
using namespace std;
int main()
{
    int r;
    cout<<"\nEnter the number of rows ";
    cin>>r;
    /*
      1.for r=4 the output will be 
        ****
        ****
        ****
        ****
    */
    /*
    //1.
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++)
            cout<<"* ";
        cout<<endl;
    }*/
    
    /*
        2.for r=5 the output will be 
            * 
            * * 
            * * * 
            * * * * 
            * * * * * 
    */
    /*
    //2.
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
    */
    
    /*
        3.for r=5 the output will be 
            1 
            1 2 
            1 2 3 
            1 2 3 4 
            1 2 3 4 5 
    */
    /*
    //3.
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
    */
    
    /*
        4.for r=5 the output will be
            1 
            2 2 
            3 3 3 
            4 4 4 4 
            5 5 5 5 5 
    */
    /*
    //4.
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++)
            cout<<i<<" ";
        cout<<endl;
    }
    */
    
    /*
        5.for r=5 the output will be 
            * * * * * 
            * * * * 
            * * * 
            * * 
            * 
    */
    /*
    //5.
    for(int i=r;i>0;i--){
        for(int j=i-1;j>=0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    */
    
    /*
        6.for r=5 the output will be
            1 2 3 4 5 
            1 2 3 4 
            1 2 3 
            1 2 
            1 
    */
    /*
    //6.
    for(int i=r;i>0;i--){
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
    */
    //this one is wrong :(
    for(int i=1;i<=r;i++){
        for(int j=r-i;j>=0;j--)Pattern printing
            cout<<" ";
        for(int j=0;j<=i;j++){
            if(j%2!=0)
                cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
