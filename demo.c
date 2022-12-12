Q.1 Selection Sort

void swap(int& a, int& b){
    int temp =a;
    a=b;
    b= temp;
}

int main()
{
    int a[5] = {64, 25, 12, 22, 11};
    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j < 5; j++) {
            if(a[i]>a[j]){
                swap(a[i], a[j]);
            }
            else{
                continue;
            }
        }
    }
    
    for (int i = 0; i < 5; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}

Q.2 Bubble short

Repeatidly swap two adjacent elements if they are in wrong order
    L>R = wrong order

// void swap(int& c, int& b){
//     int temp =c;
//     c=b;
//     b= temp;
// }


int a[6] = {12,45,23,51,19,8};
    int n = sizeof(a)/sizeof(a[0]);    
    
    for (int i = n-1; i > 0; i--) {
        for (int j = 0; j < (n-1); j++) {
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }

Q.3 Insertion Sort

Insert an element from unsorted array and place it to its coorect posotion in the sorted array

for (int i = 1; i < n; i++) {
        int current  = a[i];
        int j = i-1; 
        for (; j >= 0; j--) {
            if(a[j]>current){
                a[j+1] = a[j];
            }
            
            else{
                break;
            }
        }
        a[j+1] = current;
    }
