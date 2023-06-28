#include<iostream>
#include<vector>
using namespace std;

struct Heap{
    vector<int> heap;
    Heap() {}

    // ヒープの値にxを代入
    void push(int x){
        heap.push_back(x); // 最後尾に追加
        int i = (int)heap.size() -1; //挿入された頂点番号
        while(i > 0){
            int p = (i - 1) / 2; // 親の頂点番号
            // 逆転がなければ終了
            if(heap[p] >= x){
                break;
            }
            heap[i] = heap[p]; //自分の値を親の値にする
            i = p; // 自分は上にいく
        }
        heap[i] = x; // xは最終的にはこの位置を持ってくる
    }
    // 最大値をとる
    int top(){
        if(!heap.empty()){
            return heap[0];
        } else {
            return -1;
        }
    }
    // 最大値を削除
    void pop(){
        if(heap.empty()){
            return;
        }
        int x = heap.back(); // 頂点を持ってくる値
        heap.pop_back();
        int i = 0; //　根から下ろしてくる
        while(i * 2 + 1 < (int)heap.size()){
            // 子同士を比較して大きい方をchild1とする
            int child1 = i * 2 + 1;
            int child2 = i * 2 + 2;
            if(child2 < (int)heap.size() && heap[child2] > heap[child1]){
                child1 = child2;
            }
            // 逆転がなければ終了
            if(heap[child1] <= x){
                break;
            }
            //　自分の値を子頂点の値にする
            heap[i] = heap[child1];
            i = child1; //自分は下にいく
        }
        heap[i] = x; // xは最終的にこのいちに持っていく
    }
};

int main(){
    Heap h;
    h.push(5); h.push(3); h.push(7); h.push(1);
    cout << h.top() << endl; // 7
    h.pop();
    cout << h.top() << endl; // 5
    h.push(11);
    cout << h.top() << endl; // 11
}