#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    /*
    *
   ***
  *****
 *******  */
    for(int row=0;row<no;row++){
        int spaces=0;
        int end_space=0,star=0;
        for(int column=0;column<(2*no)-1;column++){
            
            if(spaces<no-row-1){
                cout<<" ";
                spaces++;
            }
            else if (star<(2*row)+1)
            {
                if(star==0 || star==(2*row) || row==(no-1)){
                    cout<<"*";
                }
                // cout<<"*";
                else{
                    cout<<" ";
                }
                star++;
                // if(star==0 || sta){
                //     cout<<"*";
                //     star=star+1;
                // }
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }

    return 0;
}
