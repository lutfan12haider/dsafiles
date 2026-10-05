//bubble sort

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//insertion sort

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//selection sort

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//shell sort
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    for(int gap = n / 2; gap > 0; gap = gap / 2)
    {
        for(int i = gap; i < n; i++)
        {
            int temp = arr[i];
            int j = i;

            while(j >= gap && arr[j - gap] > temp)
            {
                arr[j] = arr[j - gap];
                j = j - gap;
            }

            arr[j] = temp;
        }
    }

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//comb sort
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    int gap = n;
    bool swapped = true;

    while(gap > 1 || swapped)
    {
        gap = gap * 10 / 13;

        if(gap < 1)
        {
            gap = 1;
        }

        swapped = false;

        for(int i = 0; i + gap < n; i++)
        {
            if(arr[i] > arr[i + gap])
            {
                int temp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = temp;

                swapped = true;
            }
        }
    }

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//binary search
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {11, 12, 22, 25, 34, 64, 90};
    int n = 7;
    int key = 25;

    int low = 0;
    int high = n - 1;
    int found = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found = mid;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found != -1)
    {
        cout << "Element found at index: " << found;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}

//interpolation search
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int key = 50;

    int low = 0;
    int high = n - 1;
    int found = -1;

    while(low <= high && key >= arr[low] && key <= arr[high])
    {
        if(arr[low] == arr[high])
        {
            if(arr[low] == key)
            {
                found = low;
            }

            break;
        }

        int pos = low + ((key - arr[low]) * (high - low))
                        / (arr[high] - arr[low]);

        if(arr[pos] == key)
        {
            found = pos;
            break;
        }
        else if(arr[pos] < key)
        {
            low = pos + 1;
        }
        else
        {
            high = pos - 1;
        }
    }

    if(found != -1)
    {
        cout << "Element found at index: " << found;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}

//linear search
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    int key = 25;

    int found = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = i;
            break;
        }
    }

    if(found != -1)
    {
        cout << "Element found at index: " << found;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}
