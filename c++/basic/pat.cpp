#include<iostream>
using namespace std;

int main()
{
    // //rectangle pattern
    // int row,col,i,j;
    // cout<<"Enter the number of rows: ";
    // cin>>row;
    // cout<<"Enter the number of columns: ";
    // cin>>col;
    // for(i=1;i<=row;i++){
    //     for(j=1;j<=col;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // //hollow rectangle pattern
    // int row, col , i ,j;
    // cout<<"Enter the number of rows: ";
    // cin>>row;
    // cout<<"Enter the number of columns: ";
    // cin>>col;
    // for(i=1;i<=row;++i){
    //     for(j=1;j<=col;++j){
    //         if(i==1 || i==row || j==1 || j==col){
    //             cout<<"* ";
    //         } else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // //inverted half pyramid
    // *
    // **
    // ***
    // ****
    // int n, i ,j;
    // cout<<"Enter the number of levels: ";
    // cin>>n;
    // for(i=n;i>=1;--i){
    //     for(j=1;j<=i;++j){
    //         cout<<"* ";
    //     }
    //     cout<<endl; 
    // }
    // return 0;

    //half pyramid after 180 rotate
    //     *    
    //    **
    //   ***
    //  ****
    // *****
    // int n, i ,j,k;
    // cout<<"Enter the number of levels: ";
    // cin>>n;
    // for(i=1;i<=n;++i){
    //     for(j=1;j<=(n-i);j++){
    //         cout<<"  ";
    //     }
    //     for(k=1;k<=i;k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // // //half pyramid using numbers
    // // 1
    // // 2 2
    // // 3 3 3
    // // 4 4 4 4 
    // // 5 5 5 5 5
    // int n,i,j;
    // cout<<"Enter the number of levels: ";
    // cin>>n;
    // for(i=1;i<=n;++i){
    //     for(j=1;j<=i;++j){
    //         cout<<i<<" ";
    //     }  
    //     cout<<endl;
    // }
    // return 0;


    // //floyd's triangle
    // // 1
    // // 2 3
    // // 4 5 6
    // // 7 8 9 10
    //
    // int n,i,j,count;
    // cout<<"Enter the number of levels: ";
    // cin>>n;
    // count=1;
    //
    // for(i=1;i<=n;++i){
    //     for(j=1;j<=i;j++){
    //         cout<<count<<" ";
    //         count++; 
    //     }
    //     cout<<endl;
    // }
    // return 0;

    //butterfly pattern  for n=3
    // *         *
    // * *     * *
    // * * * * * *
    // * * * * * *
    // * *     * *
    // *         *
    //
    //
    // int n,i,j,space;
    //
    // cout<<"Enter the number of levels: ";
    // cin>>n;
    // for(i=1;i<=n;++i){
    //     for(j=1;j<=i;++j){
    //         cout<<"* ";
    //     }
    //     space = 2*n - 2*i;
    //     for(j=1;j<=space;++j){
    //         cout<<"  ";
    //     }
    //     for(j=1;j<=i;++j){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    //
    // for(i=n;i>=1;--i){
    //     for(j=1;j<=i;++j){
    //         cout<<"* ";
    //     }
    //     space = 2*n - 2*i;
    //     for(j=1;j<=space;++j){
    //         cout<<"  ";
    //     }
    //     for(j=1;j<=i;++j){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // //inverted pattern
    // // 1 2 3 4 5
    // // 1 2 3 4
    // // 1 2 3
    // // 1 2
    // // 1
    // //
    // int n,i,j;
    // cout<<"Enter the number of levels: ";
    // cin>>n;
    // //
    // for(i=n;i>=1;--i){
    //     for(j=1;j<=i;++j){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // // 0-1 pattern
    // // 1
    // // 0 1
    // // 1 0 1
    // // 0 1 0 1
    // // 1 0 1 0 1
    //
    // int n,i,j;
    // cout<<"Enter the number of levels: ";
    // cin>>n;
    //
    // for(i=1;i<=n;++i){
    //     for(j=1;j<=i;++j){
    //         if((i+j)%2==0){
    //             cout<<"1 ";
    //         } else {
    //             cout<<"0 ";
    //         }
    //
    //     }
    //     cout<<endl;
    // }
    // return 0;
 

    // // rhombus pattern
    // //       * * * * *
    // //     * * * * *
    // //   * * * * *
    // // * * * * *      
    //
    //
    // int n,i,j;
    // cout<<"Enter the number of levels: ";
    // cin>>n;
    //
    // for(i=n;i>=1;--i){
    //     for(j=1;j<=(i-1);++j){
    //         cout<<"  ";
    //     }
    //     for(j=1;j<=n;++j){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
     
    // //number pattern
    // //       1
    // //      1 2
    // //     1 2 3
    // //    1 2 3 4
    // //   1 2 3 4 5 
    //
    // int n,i,j;
    // cout<<"Enter the number of levels: ";
    // cin>>n;
    //
    // for(i=1;i<=n;++i){
    //     for(j=1;j<=(n-i);++j){
    //         cout<<" ";
    //     }
    //     for(j=1;j<=i;++j){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0 ;
    
// // palindronic pattern
// //         1
// //       2 1 2
// //     3 2 1 2 3
// //   4 3 2 1 2 3 4
// // 5 4 3 2 1 2 3 4 5
//
//     int n,i,j;
//     cout<<"Enter the number of levels: ";
//     cin>>n;
//
//     for(i=1;i<=n;++i){
//         for(j=1;j<=(n-i);++j){
//             cout<<"  ";
//         }
//         int k=i;
//         for(;j<=n;++j){            
//             cout<<k--<<" ";
//         } 
//
//         k=2;
//         for(;j<=n+i-1;++j){
//             cout<<k++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;



// // star pattern
//
// //         * 
// //       * * *
// //     * * * * *
// //     * * * * *
// //       * * * 
// //         * 
//
//     int n,i,j;
//     cout<<"Enter the number of levels: ";
//     cin>>n;
//
//     for(i=1;i<=n;++i){
//         for(j=1;j<=(n-i);++j){
//             cout<<"  ";
//         }
//         for(;j<=n;++j){
//             cout<<"* ";
//         }
//         int k=2;
//         for(;j<=n+i-1;++j){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(i=n;i>=1;--i){
//         for(j=1;j<=(n-i);++j){
//             cout<<"  ";
//         }
//         for(;j<=n;++j){
//             cout<<"* ";
//         }
//         int k=2;
//         for(;j<=n+i-1;++j){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;




}