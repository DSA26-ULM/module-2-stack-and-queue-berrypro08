#include "queue.h"
#include <iostream>
using namespace std;

void init(Queue* q) {
}

bool isEmpty(const Queue* q) {
}

bool isFull(const Queue* q) {
}

void enqueue(Queue* q, int value) {
    if (isFull(q)) throw "Queue penuh";
    if (isEmpty(q)) {
    } else {
    }
}

void dequeue(Queue* q) {
    if (isEmpty(q)) throw "Queue kosong";
    if (q->front == q->rear) {
    } else {
    }
}

int front(const Queue* q) {
    if (isEmpty(q)) throw "Queue kosong";
}

int back(const Queue* q) {
    if (isEmpty(q)) throw "Queue kosong";
}

void hasilQueue(int n, int k, int inputData[]){
    Queue q;
    for (int i = 0; i <= n - k; i++) {
        init(&q);
        for (int j = i; j < i + k; j++) {
            enqueue(&q, inputData[j]);
        }

        long long currentSum = 0;
        while (!isEmpty(&q)) {
            currentSum += front(&q);
            dequeue(&q);
        }
        
        cout << currentSum << (i == n - k ? "" : " ");
    }
    cout << endl;
}
