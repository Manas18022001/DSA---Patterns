#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout<<endl;
    for(int i = 1; i<=n;i++){
        char ch = 'A' + n - i;
        for(int j=0; j<i; j++){
            cout<<ch<<"  ";
            ch++;
        }
    
    cout<<endl;
    }
    
    return 0;
}
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout<<endl;
//     for(int i = 1; i<=n;i++){
//         int a = i;
//         for(int j=0; j<i; j++){
//             cout<<a<<"  ";
//             a--;
//         }
    
//     cout<<endl;
//     }
    
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout<<endl;
//     for(int i = 1; i<=n;i++){
//         int a = i;
//         for(int j=0; j<i; j++){
//             cout<<a<<"  ";
//             a++;
//         }
    
//     cout<<endl;
//     }
    
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout<<endl;
//     for(int i = 0; i<n;i++){
//         for(int j=0; j<n-i; j++){
//             cout<<"*"<<"  ";
//         }
    
//     cout<<endl;
//     }
    
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout<<endl;
//     for(int i = 1; i<=n;i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*"<<"  ";
//         }
    
//     cout<<endl;
//     }
    
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout<<endl;
//     int a = 1;
//     for(int i = 1; i<=n;i++){
//         for(int j=1; j<=i; j++){
//             cout<<a<<"  ";
//             a++;
//         }
    
//     cout<<endl;
//     }
    
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout<<endl;
//     for(int i = 1; i<=n;i++){
//         for(int j=1; j<=n; j++)
//             cout<<j<<"  ";
    
//     cout<<endl;
//     }
    
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout<<endl;
//     for(int i = 1; i<=n;i++){
//         for(int j=1; j<=n; j++)
//             cout<<i<<"  ";
    
//     cout<<endl;
//     }
    
//     return 0;
// }