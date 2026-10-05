//
//  Application_Week_5.cpp
//  Application
//
//  Created by Bastien Genova on 05/10/2026.
//

#include "Application_Week_5.hpp"
#include "Utils.hpp"
#include <iostream>

int partition(std::vector<int>& array,int begin,int end){
    int pivot= array[end-1];
    int i = begin;
    for(int j=begin;j<end-1;j++){
        if (array[j]<pivot) {
            std::swap(array[i], array[j]);
            ++i;
        }
    }
        std::swap(array[i],array[end-1]);
        Show_vector(array);
        return i;
}

void QuickSort(std::vector<int>& array,int begin,int end){
    if(end-begin<=1) return;
    int p = partition(array,begin,end);
    QuickSort(array,begin,p);
    QuickSort(array,p+1,end);
}

void heapify(std::vector<int>& a, int begin,int end,int root){
    while(true){
        int largest = root;
        int left = begin+2*(root-begin)+1;
        int right = left+1;
        if(left<end && a[left]>a[largest])
            largest = left;
        if(right<end && a[right] >a[largest])
            largest= right;
        if(largest == root) {Show_vector(a); return;}

        std::swap(a[root], a[largest]);
        root = largest;
        
    }
}
void heapSort(std::vector<int>& a, int begin, int end) {
    int n = end - begin;
    if (n <=1) return;
    for (int i = begin + n / 2 - 1; i >= begin; --i)
            heapify(a, begin, end, i);
    for (int heapEnd = end; heapEnd - begin > 1; ) {
        std::swap(a[begin], a[heapEnd - 1]);
        --heapEnd;
        heapify(a, begin, heapEnd, begin);
    }
    
}
