#include "queue.h"
#include <iostream>
using namespace std;

void init(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

bool isEmpty(const Queue* q) {
    return q->front == -1;
}

bool isFull(const Queue* q) {
    return (q->rear + 1) % MAX == q->front;
}

void enqueue(Queue* q, int value) {
    if (isFull(q)) throw "Queue penuh";
    if (isEmpty(q)) {
        q->front = 0;
        q->rear = 0;
    } else {
        q->rear = (q->rear + 1) % MAX;
    }
    q->data[q->rear] = value;
}

void dequeue(Queue* q) {
    if (isEmpty(q)) throw "Queue kosong";
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;
    }
}

int front(const Queue* q) {
    if (isEmpty(q)) throw "Queue kosong";
    return q->data[q->front];
}

int back(const Queue* q) {
    if (isEmpty(q)) throw "Queue kosong";
    return q->data[q->rear];
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
