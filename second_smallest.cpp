#include <iostream>
#define MAX 1000
using namespace std;
void print_smallest(int a[],int size){
    int first;
    int second;
    first = second  = MAX;
    for(int i =0; i<size ; i++){
      if(a[i]<first){
        second = first;
        first = a[i];
    }else if( a[i]<second && a[i]!=first ){
            second = a[i];
    }
    
    }
    if(second==MAX){
        cout<<"Second does not exist"<<endl;
    }else{
        cout<<"First smallest number is "<<first<<endl;
        cout<<"Second smallest number is "<<second<<endl;
    }
}

int main()
{
    int a[] = {3, 4, 1, 0, 2, 5};
    int size = sizeof(a)/sizeof(int);
    print_smallest(a , size);
    return 0;
}
