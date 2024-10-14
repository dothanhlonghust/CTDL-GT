#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1]; 
    // T? 0 d?n n
    // Ph?n t? m?ng arr n�y b?ng 1 n?u l� SNT 
    
    for(int i=0; i<n+1; i++){
        arr[i] = 1; // M?i d?u coi to�n b? l� SNT
    }
    arr[0] = arr[1] = 0; // 0 v� 1 kh�c SNT
    
    for(int i=0; i<n+1; i++){
        if(arr[i]==1){
            
            // VD: 3 l� SNT th� b?i c?a 3 (b?t d?u t? 3*2) kh�c SNT
            for(int j=2; j < n/i + 1; j++){
                arr[i*j]=0; 
            }
        }
    }
    
    // In ra SNT
    for(int i=0; i<n+1; i++){
        if(arr[i]==1){
            cout << i << " ";
        }
    }
    cout << "\n";
    
    // Y�u c?u 1: T?ng 2 SNT l� 1 SNT th� trong 2 SNT n�y ph?i c� 2
    cout << "C�c c?p SNT th?a m�n y�u c?u 1: ";
    for(int i=2; i<n+1; i++){
        if (arr[i]==1){
            if(arr[i+2]==1){
                cout << i << " " << i+2 << "\n";
            }
        }
    }
    cout << "\n";
    
    // Y�u c?u 2: check SNT
    int x;
    cout << "Nh?p s? c?n t�m: ";
    cin >> x;
    if(arr[x]==1){
        cout << x << " l� SNT";
    } else {
        cout << x << " kh�c SNT";
    }
    

    return 0;
}
Vi?t cho Tr?n Minh Khoa

