//  https://github.com/kunal-kushwaha/DSA-Bootcamp-Java/blob/main/assignments/09-patterns.md   link to ques

#include<iostream>
using namespace std;

int factorial(int n){
    int ans=1;
    for(int i=n; i>=1; i--){
        ans*=i;
    }
    return ans;
}

/*

1)
  
    *****
    *****
    *****
    *****
    *****

*/

void pattern1(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


/*

2)


    *
    **
    ***
    ****
    *****

*/

void pattern2(int n){
    for(int i=0; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }

        cout<<endl;
    }
}

/*
3)
    *****
    ****
    ***
    **
    *

*/

void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>=0 ; j--){
            cout<<"*";
        }

        cout<<endl;
    }
}

/* 
4)  

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

*/

void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

/*
5.  *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
*/
void pattern5(int n){
    int m = (n+1)/2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m-abs(m-i); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
6.       *
        **
       ***
      ****
     *****
*/

void pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

/*

7.   *****
      ****
       ***
        **
         *
*/


void pattern7(int n){
    for(int i=n; i>=0; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
8.      *
       ***
      *****
     *******
    *********
*/

void pattern9 (int n){
    for(int i=0; i<=n-1; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
9.  *********
     *******
      *****
       ***
        *
*/

void pattern8 (int n){
    for(int i=n-1; i>=0; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

/*

10.      *
        * *
       * * *
      * * * *
     * * * * *
*/

void pattern10(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*
11.  * * * * *
      * * * *
       * * *
        * *
         *
*/

void pattern11(int n){
    for(int i=n; i>=0; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*
12.  * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * *

*/

void pattern12(int n){
   
    for(int i=n; i>=0; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        if(i!=1)
        cout<<endl;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        if(i<n){
            cout<<endl;
        }  
    }
}

/*
13.      *
        * *
       *   *
      *     *
     *********
*/

void pattern13(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            if(j==1 || j==2*i-1 || i==5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        } 
        cout<<endl;       
    }
}

/*
14.  *********
      *     *
       *   *
        * *
         *
*/

void pattern14(int n){
    for(int i=n; i>=0; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            if(j==1 || j==2*i-1 || i==5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        } 
        cout<<endl;       
    }
}
/*

15.      *
        * *
       *   *
      *     *
     *       *
      *     *
       *   *
        * *
         *
*/
void pattern15(int n){
    int m = (n+1)/2;
    for(int i=1; i<=n; i++){
        for(int j= abs(m-i)+1; j>=1; j--){
            if(j==1) cout<<"*";
            else cout<<" ";
        }
        for(int j=1; j<=2*(m-1-abs(m-i)); j++){
            if(j==2*(m-1-abs(m-i))) cout<<"*";
            else cout<<" ";
        }       
        
        cout<<endl;

    }
}

/*
16.           1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1
*/

void pattern16(int n){
    for(int i=0; i<=n-1; i++){
        for(int j=n-i-1; j>=0; j--){
            cout<<" ";       
        }
        for(int j=0; j<=i; j++){
            int a = factorial(i)/(factorial(j)*factorial(i-j));
            cout<<a<<" ";
        }
        cout<<endl;
    }    
    
}

/*
17.      1
        212
       32123
      4321234
       32123
        212
         1
*/


void pattern17(int n){
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>=1; j--){
            cout<<" ";
        }
        for(int j=i; j>=1; j--){
            cout<<j;            
        }
        for(int j=2; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--){
        
        for(int j=n-i; j>=1; j--){
            cout<<" ";
        }
        for(int j=i; j>=1; j--){
            cout<<j;            
        }
        for(int j=2; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}



/*
18.
      **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    ***
      ****  ****
      **********

*/

void pattern18(int n){
    for(int i=1; i<=n; i++){
       for(int j=1; j<=n-i+1; j++){
           cout<<"*";
        }
       for(int j=1; j<=2*i-2; j++ ){
           cout<<" ";
       } 
       for(int j=1; j<=n-i+1; j++){
           cout<<"*";
       }   
        
    cout<<endl;    
    }

       for(int i=n; i>=1; i--){
       for(int j=1; j<=n-i+1; j++){
           cout<<"*";
        }
       for(int j=1; j<=2*i-2; j++ ){
           cout<<" ";
       } 
       for(int j=1; j<=n-i+1; j++){
           cout<<"*";
       }   
        
    cout<<endl;    
    }
}

/* 
19.    *        *
       **      **
       ***    ***
       ****  ****
       **********
       ****  ****
       ***    ***
       **      **
       *        *

*/
void pattern19(int n){

    int m = (n+1)/2;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m - abs(m-i); j++){
            cout<<"*";
        }
        for(int j=2*abs(m-i); j>=1; j--){
        cout<<" ";
        }
        for(int j=1; j<=m - abs(m-i); j++){
            cout<<"*";
        }

        cout<<endl;

    }    

        
}

/*
20.    ****
       *  *
       *  *
       *  *
       ****

*/


void pattern20 (int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<n; j++){
            if(i==1 || i==n || j==1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }
}

/*
21.    1
       2  3
       4  5  6
       7  8  9  10
       11 12 13 14 15
*/

void pattern21( int n){
    int a = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(a<10) cout<<a<<"  ";
            else cout<<a<<" ";
            a++;

        }
        cout<<endl;
    }
}

/*
22.    1
       0 1
       1 0 1
       0 1 0 1
       1 0 1 0 1
*/

void pattern22 (int n){

    int a;
    
    for(int i=1; i<=n; i++){
        
        if(i%2==0) a=0;
        else a=1;
        for(int j=1; j<=i; j++ ){
            cout<<a<<" ";
            if(a==1) a--;
            else a++;
        }
        cout<<endl;
    }
}
/*
23.        *      *
         *   *  *   *
       *      *      *
*/

void pattern23(int n){

    for(int i=1; i<=3; i++){
        for(int j=1; j<=n; j++){
            if((i+j)%4==0 || i==2 && j%4 == 0) cout<<"* ";
            else cout<<"  ";

        }
        cout<<endl;
    }
    
}

/*

24.    *        *
       **      **
       * *    * *
       *  *  *  *
       *   **   *
       *   **   *
       *  *  *  *
       * *    * *
       **      **
       *        *
*/

void pattern24(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n; j++){
           if(j == 1 || j== 2*n || i==j || i+j == 2*n + 1){
               cout<<"*";
           }
           else{
               cout<<" ";
           }
        }
        cout<<endl;
    }
     for(int i=n; i>=1; i--){
        for(int j=1; j<=2*n; j++){
           if(j == 1 || j== 2*n || i==j || i+j == 2*n + 1){
               cout<<"*";
           }
           else{
               cout<<" ";
           }
        }
        cout<<endl;
    }
}

/*

25.       *****
         *   *
        *   *
       *   *
      *****
*/

void pattern25(int n){
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>=1; j--){
            cout<<" ";
        }
        for(int j=1; j<=n; j++){
            if(j==1 || i==n ||i==1 || j==n)
                cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}

/*

26.   1 1 1 1 1 1
      2 2 2 2 2
      3 3 3 3
      4 4 4
      5 5
      6

*/

void pattern26(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

/*
27.   1 2 3 4  17 18 19 20
        5 6 7  14 15 16
          8 9  12 13
            10 11
*/

/*
28.      *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
        * *
         *
*/

void pattern28(int n){
    int m = (n+1)/2;
    for(int i=1; i<=n; i++){
        for(int j=abs(m-i); j>=1 ; j--){
            cout<<" ";
        }
        for(int j=m - abs(m-i); j>=1 ;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*
29.      
       *        *
       **      **
       ***    ***
       ****  ****
       **********
       ****  ****
       ***    ***
       **      **
       *        *

*/

void pattern29(int n){
    int m= (n+1)/2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m-abs(m-i); j++){
            cout<<"*";
        }
        for(int j=2*(abs(m-i)); j>=1 ; j-- ){
            cout<<" ";
        }
        for(int j=1; j<=m-abs(m-i); j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
}
/*

30.         1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5

*/

void pattern30 (int n){
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>=0; j--){
            cout<<"  ";
        }
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        for(int j=2; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

/*
31.      4 4 4 4 4 4 4  
         4 3 3 3 3 3 4   
         4 3 2 2 2 3 4   
         4 3 2 1 2 3 4   
         4 3 2 2 2 3 4   
         4 3 3 3 3 3 4   
         4 4 4 4 4 4 4
*/

void pattern31(int n){
    int e=2*n-1;
    for(int i=1; i<=e; i++){
        for(int j=n; j>abs(n-i); j--){               // Decreasing part
            cout<<j<<" ";
        }
        for(int j=2*abs(n-i); j>=1; j--){            // Constant Part
            cout<<abs(n-i)+1<<" ";
        }
        for(int j=1; j<n-abs(n-i); j++){             // Increasing Part
            cout<<abs(n-i)+1+j<<" ";
        }
        
        cout<<endl;
    }
}

/*
32.    E
       D E
       C D E
       B C D E
       A B C D E
*/
void pattern32(int n){
    
    for(int i=1; i<=n; i++){
        for(int j=n-i+15; j<=n; j++){
            char a='A'-1+j;
            cout<<a<<" ";
        }
        cout<<endl;
    }
}

/*
33.    a
       B c
       D e F
       g H i J
       k L m N o

*/
void pattern33(int n){

    char ch = 'a';
    int p=1; 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            if(p%2!=0) ch = ch - 'a' + 'A' + 1;
            else ch = ch - 'A' + 'a' + 1;  
            p++;
        }
        cout<<endl;
    }

}

/*
34.    E D C B A
       D C B A
       C B A
       B A
       A
*/

void pattern34(int n){
    char ch = 'A'-1+n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            char ch = 'A'-1+n;
            ch = ch - i +1 -j +1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}





/*  
35.    1      1
       12    21
       123  321
       12344321
*/

void pattern35(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=2*(n-i); j>=1; j--){
            cout<<" ";
        }
         for(int j=i; j>=1; j--){
            cout<<j;
        }

        cout<<endl;
    }
}




    

    




int main(){
    
    cout<<"Input : " ;
    int n;
    cin>>n;

    pattern31(n);

}