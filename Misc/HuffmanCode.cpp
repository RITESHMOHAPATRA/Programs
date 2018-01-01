//WAP to implement Huffman code
#include <iostream>
#include <cstdlib>
#include <vector>
#include <queue>
using namespace std;

struct node
{
    char ch;
    int frequency;
    node *left,*right;
};

bool compareNodes(node *temp1,node *temp2)
{
    return temp1->frequency > temp2->frequency;
}

void display(int arr[],int count)
{
    for(int i=0;i<count;i++)
        cout << arr[i];
    cout << "\n";
}

void printPattern(node *root,int arr[],int count = 0)
{
    if(root->left)
    {
        arr[count] = 0;
        printPattern(root->left,arr,count+1);
    }

    if(root->right)
    {
        arr[count] = 1;
        printPattern(root->right,arr,count+1);
    }
    
    if(root->left == NULL && root->right == NULL)
    {
        cout << root->ch << ":";
        display(arr,count);       
    }
}

int main()
{
    int n;
    cout << "\n Enter the number of characters:";
    cin >> n;
    priority_queue < node*,vector<node*>,decltype(&compareNodes) > HuffmanNodes(compareNodes);
    for(int i=0;i<n;i++)
    {
        node *Huffman = new node();
        cout << "\n Enter a character:";
        char ch1;
        cin >> ch1;
        cout << "\n Enter its frequency:";
        int freq;
        cin >> freq;
        Huffman->ch = ch1;
        Huffman->frequency = freq ;
        Huffman->left = NULL; 
        Huffman->right = NULL; 
        HuffmanNodes.push(Huffman);
    }
   
    for(int i=0;i<n-1;i++)
    {
        node *temp1 = HuffmanNodes.top();
        HuffmanNodes.pop();
       
        node *temp2 = HuffmanNodes.top();
        HuffmanNodes.pop();
        
        int x = temp1->frequency;
        int y = temp2->frequency;
       
        node *temp3 = new node();
        temp3->ch = '?';
        temp3->frequency = x+y ;
        temp3->left = temp1;
        temp3->right = temp2;
        HuffmanNodes.push(temp3);
    }
    
    node *root = HuffmanNodes.top();
    int arr[100];
    printPattern(root,arr,0);
    return 0;
}
