// Driver Program for Red Black Tree

#include <bits/stdc++.h>
#include "RBTree.hpp"
using namespace std;

int main() {
    int data;
    RBTree rbTree1, rbTree2;

    cin >> data;
    while (data != 0)
    {
        rbTree1.insertValue(data);
        cin >> data;
    }

    /*
    rbTree1.preorder();

    cin >> data;
    while (data != 0)
    {
        rbTree2.insertValue(data);
        cin >> data;
    }

    rbTree2.preorder();

    rbTree1.merge(rbTree2);
    
    rbTree1.inorder();
    */
   
    int v;
    cin >> v;
    cout << (rbTree1.contains(v) ? "true" : "false") << endl;

    rbTree1.inorder<char>([](int &data, char arg)->RBTree::Finisher
    {
        cout << arg << " " <<  data << endl;
        return RBTree::DONT_STOP;
    }, 'a');

    return 0;
}