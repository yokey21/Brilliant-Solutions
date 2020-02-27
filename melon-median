#include <iostream>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    int size = 6;
    double sum = 0;
    double waterMelon = 8;
    
    for(int i = 0; i < 50; i++)
    {
        waterMelon = i;
        
        double arr[size] = {2, 4, 6 ,6 ,10, waterMelon};
        vector<double> set(arr, arr +size);
        
        sort(set.begin(),set.end());
        
        vector<double>::iterator iter = set.begin();
        for(;iter!=set.end();iter++)
        {
            //cout << *iter << " ";
            sum += *iter;
        }
        
        double mean = sum/size;
        double median = (set[size/2] + set[(size/2)-1])/2;
        if(mean == median)
        {
            cout << "Watermelon Weight = " << waterMelon << " (Mean: " << mean << ", Median: " << median << ")"<<endl;
        }
        //cout << endl << "Mean: " << mean;
        //cout << endl << "Median " << median;
        
        sum = 0;
    }
}
