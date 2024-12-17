class MedianFinder {
private:
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
public:
    MedianFinder() {
    }
    
    void addNum(int num) {
       maxHeap.push(num);
       if(!minHeap.empty() && maxHeap.top() > minHeap.top())
       {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
       }
       int n = minHeap.size();
       int m = maxHeap.size();
       if(abs(n-m) == 2)
       {
            if(n>m)
            {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
            else
            {
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }
       }
    }
    
    double findMedian() {
        int n = minHeap.size();
        int m = maxHeap.size();
        if(n == m)
        {
            return ((double)minHeap.top() + (double)maxHeap.top())/2;
        }
        else if(n > m)
        {
            return minHeap.top();
        }
        else
        {
            return maxHeap.top();
        }
    }
    
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */