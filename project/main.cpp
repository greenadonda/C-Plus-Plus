#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
class LinkedList {
public:
    Node* head;

    LinkedList() { head = NULL; }

    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        if (!temp) {
            cout << "List is empty\n";
            return;
        }
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int A[n1], B[n2];

    for (int i = 0; i < n1; i++) A[i] = arr[l + i];
    for (int i = 0; i < n2; i++) B[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (A[i] <= B[j]) arr[k++] = A[i++];
        else arr[k++] = B[j++];
    }

    while (i < n1) arr[k++] = A[i++];
    while (j < n2) arr[k++] = B[j++];
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main() {
    LinkedList list;
    int choice;

    while (true) {
        cout << "\n---- MENU ----\n";
        cout << "1. Insert in Linked List\n";
        cout << "2. Display Linked List\n";
        cout << "3. Sort Array (Merge Sort)\n";
        cout << "4. Binary Search\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int val;
            cout << "Enter value: ";
            cin >> val;
            list.insertEnd(val);
        }

        else if (choice == 2) {
            list.display();
        }

        else if (choice == 3) {
            int n;
            cout << "Enter array size: ";
            cin >> n;
            int arr[50];

            cout << "Enter elements: ";
            for (int i = 0; i < n; i++) cin >> arr[i];
            mergeSort(arr, 0, n - 1);
            cout << "Sorted Array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        }

        else if (choice == 4) {
            int n, key;
            cout << "Enter array size: ";
            cin >> n;
            int arr[50];

            cout << "Enter sorted array: ";
            for (int i = 0; i < n; i++) cin >> arr[i];

            cout << "Enter value to search: ";
            cin >> key;

            int result = binarySearch(arr, n, key);

            if (result == -1) cout << "Value not found\n";
            else cout << "Value found at index " << result << endl;
        }

        else if (choice == 5) {
            cout << "Exiting...";
            break;
        }
    }

    return 0;
}
