#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1]; 
    // T? 0 d?n n
    // Ph?n t? m?ng arr này b?ng 1 n?u là SNT 
    
    for(int i=0; i<n+1; i++){
        arr[i] = 1; // M?i d?u coi toàn b? là SNT
    }
    arr[0] = arr[1] = 0; // 0 và 1 khác SNT
    
    for(int i=0; i<n+1; i++){
        if(arr[i]==1){
            
            // VD: 3 là SNT thì b?i c?a 3 (b?t d?u t? 3*2) khác SNT
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
    
    // Yêu c?u 1: T?ng 2 SNT là 1 SNT thì trong 2 SNT này ph?i có 2
    cout << "Các c?p SNT th?a mãn yêu c?u 1: ";
    for(int i=2; i<n+1; i++){
        if (arr[i]==1){
            if(arr[i+2]==1){
                cout << i << " " << i+2 << "\n";
            }
        }
    }
    cout << "\n";
    
    // Yêu c?u 2: check SNT
    int x;
    cout << "Nh?p s? c?n tìm: ";
    cin >> x;
    if(arr[x]==1){
        cout << x << " là SNT";
    } else {
        cout << x << " khác SNT";
    }
    

    return 0;
}
Vi?t cho Tr?n Minh Khoa

