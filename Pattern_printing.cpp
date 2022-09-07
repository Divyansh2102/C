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
    
    /*
        7.for n=4 the output will be    
                  * 
                * * * 
              * * * * * 
            * * * * * * * 
    */
    /*
    //7.
    for(int i=1,k=0;i<=r;i++,k=0){
        for(int j=1;j<=r-i;j++)
            cout<<"  ";
        while(k!=2*i-1){
            cout<<"* ";
            k++;
        }
        cout<<endl;
    }
    */
    
    /*
        8.for n=4 the output will be 
            * * * * * * * 
              * * * * * 
                * * * 
                  * 
    */
    /*
    //8.
    for(int i=r,k=0;i>=1;i--,k=0){
        for(int j=1;j<=r-i;j++){
            cout<<"  ";
        }
        while(k!=2*i-1){
            cout<<"* ";
            k++;
        }
        cout<<endl;
    }
    */
    
    /*
        9.for r=4 the output will be    
                  * 
                * * * 
              * * * * * 
            * * * * * * * 
            * * * * * * * 
              * * * * * 
                * * * 
                  * 
    */
    /*
    //9.
    for(int i=1,k=0;i<=r;i++,k=0){
        for(int j=1;j<=r-i;j++)
            cout<<"  ";
        while(k!=2*i-1){
            cout<<"* ";
            k++;
        }
        cout<<endl;
    }
    for(int i=r,k=0;i>=1;i--,k=0){
        for(int j=1;j<=r-i;j++)
            cout<<"  ";
        while(k!=2*i-1){
            cout<<"* ";
            k++;
        }
        cout<<endl;
    }
    */
    
    /*
        10.for r=4 the output will be 
            * 
            * * 
            * * * 
            * * * * 
            * * * * 
            * * * 
            * * 
            * 
    */
    /*
    //10.
    for(int i=1;i<=r;i++){
        for(int j=0;j<i;j++)
            cout<<"* ";
        cout<<endl;
    }
    for(int i=r;i>=1;i--){
        for(int j=0;j<i;j++)
            cout<<"* ";
        cout<<endl;
    }
    */

    /*
        11.for r=5 the output will be 
            1 
            0 1 
            1 0 1 
            0 1 0 1 
            1 0 1 0 1 
    */
    /*
    //11
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0)
                cout<<"1 ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
    */
    
    /*
        12.for r=4 the output will be
            1      1
            12    21
            123  321
            12344321
    */
    /*
    //12
    int st,en;
    for(int i=0;i<r;i++){
        st=1;
        en=i+1;
        for(int j=0;j<2*r;j++){
            if(j<i+1)
                cout<<st++;
            else if(j>=(2*r-1)-i)
                cout<<en--;
            else
                cout<<" ";
        }
        cout<<endl;
    }
    */
    
    /*
        13.for r=5 the output will be
            1 
            2 3 
            4 5 6 
            7 8 9 10 
            11 12 13 14 15 
    */
    /*13
    int x=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++)
            cout<<x++<<" ";
        cout<<endl;
    }
    */
    
    /*
        14.for r=5 the output will be
            A 
            A B 
            A B C 
            A B C D 
            A B C D E 
    */
    /*
    //14
    char x;
    for(int i=0;i<r;i++){
        x='A';
        for(int j=0;j<=i;j++)
            cout<<x++<<" ";
        cout<<endl;
    }
    */
    return 0;
}
