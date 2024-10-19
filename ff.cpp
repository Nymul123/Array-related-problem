find the minimum element of the array and also find the minimum alement whether even ir odd.






#include <iostream>
using namespace std;
int smallest(int arr[], int size)
{
    int small = arr[0]; // Assume the first element is the smallest
    // Iterate through the array
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i]; // Update if a smaller element is found
        }
    }

    return small;
}

int main()
{
    int count=0;
    
    int size,i;
    cin>>size;
    int a[size];
    for(i=0;i<size;i++)
    {
    cin>>a[i];
    }

    int s = smallest(a, size); // Pass the array and its size
    //cout << s << endl;      // Output the smallest element
    for (int i = 0; i <size; i++)
    {
        if (a[i] == s)
        {
            count++;
        }
    }

    // Check if the frequency is odd or even
    if (count % 2 == 1)
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }

    return 0;
}
   
