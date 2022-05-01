#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter number of rows";
    cin>>n;
    for (int i = 1; i <=n; i++){
        for (int j = 1; j <=i;j++){
            cout<<j;
            }
           cout<<endl; 
        }


    
    return 0;
}
1
12
123
#include <iostream>
using namespace std;

int main(){
    int n ,var;
    cout<<"enter number of rows";
    cin>>n;
    var=1;
    for (int i = 1; i <=n; i++){
        for (int j = 1; j <=i;j++){
            cout<<var;
            var++;
            }
           cout<<endl; 
        }


    
    return 0;
}
1
23
456
#include <iostream>
using namespace std;

int main(){
    int n ,var;
    cout<<"enter number of rows";
    cin>>n;
    var=1;
    for (int i = 1; i <=n; i++){
        for (int k = 1; k <=n-i; k++)
        cout<<" ";
        for (int j = 1; j <=i;j++){
            cout<<var;
            var++;
            }
           cout<<endl; 
        }


    
    return 0;
}
  1
 23
456

#include <iostream>
using namespace std;

int main(){
    int n , var;
    n=4;
    for (int i = 1; i <=n; i++){
        for (int k = 1; k <= n-i; k++)
        {cout<<" ";}
        for (int j = 0; j <i; j++)
        {
            cout<<j+i;
            
        }
        cout<<endl;
        
    }
    
   1
  23
 345
4567

#include <iostream>
using namespace std;

int main(){
    int n ;
    n = 4;
    for (int i = 0; i <=n; i++)
    {
       for (int k=1; k<=n-i; k++)
       {cout<<" ";}
       for (int j = 0; j<(2 * i - 1);j++ )
       {
           cout<<"*";
       }
       cout<<endl;
        
    }
    
    return 0;
}

   *
  ***
 *****
*******
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n ; j++)
        {
            cout<<n;
        }
        cout<<endl;
    }
    
    return 0;
}v
4444
4444
4444
4444
#include <iostream>
using namespace std;

int main(){
    int n;
    n=5;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j < n-i; j++)
            cout<<" ";
        for (int k = 1; k<=i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
    *
   **
  ***
 ****
*****
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
5
*****
****
***
**
*




#include <iostream>
using namespace std;

int power(int a , int b ){
    int ans = 1;
    for (int  i = 1; i <= b; i++){
        ans = ans * a;
    }
    return ans;
}

int main(){
    
    int a, b;
    cin >> a >> b;
     int answer = power(a,b);
    cout<<answer;
    return 0;
}

12 2
144
#include <iostream>
using namespace std;
// even = 1
//odd = 0
bool iseven( int a ){
    if ( a%2 ==0)
    {
        return 1; 
    }
    else {
    return 0;
    }
    
}
int main(){
    int n;
    cin>>n;
    int ans = iseven(n);

    cout << ans;
    return 0;
}
12
1
#include <iostream>
using namespace std;

int factorial(int n ){
    int fact = 1;
    for (int i = 1; i <=n ; i++)
    {
        fact=fact*i;
    }
    return fact;
}

 int nCr ( int n , int r ){
     int num  = factorial (n);
     int deno = factorial(r) * factorial(n-r);
     int ans = num/deno;
     return ans;

 }
int main(){
    int n ,r;
    cin >> n>>r;
    cout << "answer is "<<nCr(n,r);
    return 0;
}
8 2 
answr is 28
#include <iostream>
using namespace std;

int apnum(int n ){
    int ans = 0;
    ans = ((3*n)+7);
    return ans;
}

int main(){
     int n ;
     cin>>n ;
     cout<<" ap of nth term is "<<apnum( n);
    return 0;
}
3 = 16

sum of is_array
#include <iostream>
using namespace std;
int sumarr(int arr[] , int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i]+ sum;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i <n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"sum of array : "<< sumarr(arr,n)<<endl;
}
5
2 7 1 -4 11
sum of array : 17
#include <iostream>
using namespace std;
 bool see(int arr[], int n , int key ){
     for (int i = 0; i < n; i++)
     {
        if (arr[i]==key){
            return 1;
        }
     }
     return 0 ;
 }
  found elemnt in array 
int main(){
    int arr[7]= {2 ,3 ,8 ,9 ,-89 , -58, 69 };
    int key;
    cin>>key;
    bool found = see(arr,7, key);
    if (found)
    {
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
    return 0;
}
9
present

#include <iostream>
using namespace std;

void reverse(int arr[], int n ){
    int strt = 0;
    int end = n-1;
    while (strt <= end)
    {
        swap(arr[strt],arr[end]);
        strt++;
        end--;
    }
    
}

void printArray(int arr[], int n ){
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]= {1,2,3,4,5,60};
    reverse(arr , 6);
    printArray(arr, 6);
    return 0;
}
60 5 4 3 2 1 
