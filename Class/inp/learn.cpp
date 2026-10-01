#include <bits/stdc++>


pair<int,int> p={_,_}
cout << p.first;  //To print first stored value and so on
pair<int,pair<int,int>>={_,{_,_}}
pair<int,int> arr[]={{},{},{}}
cout << arr[0].second.      //To print value stored in first pair second space

// Vectors

vector<int> v;

v.push_back(1);
v.emplace_back(2);

vector<pair<int,int>> v;

v.push_back({_,_});
v.emplace_back(_,_);


// iterator begin access the first memory location to return stored value we need *(it)
vector<int>::iterator it=v.begin()


// iterator back access last memory location
vector<int>::iterator it=v.back()


// redirects to the memory location just after the last stored value in vector , generally used to end loops or find if required letter is not found
vector<int>::iterator it=v.end()


// Loops with iterators 
for(vector<int>::iterator it=v.begin; it != v.end(); it++){
    cout << *(it) << " ";                                               //*(it) is used to access the value stored in the redirected memory location
}


// auto is a featire of c++ which automatically defines the data type
for(auto it=v.begin; it!= v.end ; it++){
    cout << it << " ";
}


v.erase(v.begin+1).                   //erases the v[1] element
v.erase(v.begin+2,v.begin+4).         //erases the v[2],v[3] element form of [start,end)

