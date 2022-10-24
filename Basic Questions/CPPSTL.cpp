#include<bits/stdc++.h>
using namespace std;

void explainPair() {
    pair<int, int> p = {1, 2};
    cout<<p.first<<" "<<p.second;
    pair<int, pair<int, int>> p = {1, {3, 4}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;
    pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};
    cout<<arr[1].second;
}

void explainVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;

    v.push_back({1, 2});
    v.emplace_back(1, 2);

    // Syntax difference between emplace and push above for pair declaration

    vector<int> v(5, 100);

    vector<int> v(5);

    vector<int> v1(5, 20); //array of size 5 with 20 as value in each
    vector<int> v2(v1);


//  WAYS TO ITERATE THROUGH VECTORS
    vector<int>::iterator it = v.begin();

    it++;
    cout<<*(it)<<" ";

    it = it + 2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end(); //points to location after last value in array
    vector<int>::iterator it = v.rend(); //reverse end
    vector<int>::iterator it = v.rbegin(); //reverse begin

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" "; //last element

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<*(it)<<" ";
    }

    for(auto it = v.begin(); it != v.end(); it++) {
        cout<<*(it)<<" ";
    }

    for(auto it : v) {
        cout<<it<<" ";
    }


    // DELETION OF ELEMENS FROM VECTOR
    // Takes elem location in array as argument 
    v.erase(v.begin() + 1);

    // Give ending pos as till value u want to delete + 1
    v.erase(v.begin() + 2, v.begin() + 4);

    // INSERTION
    vector<int> v(2, 100);
    v.insert(v.bengin(), 300);
    v.insert(v.begin() + 1, 2, 10);

    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end());    

    cout<<v.size();

    v.pop_back();

    v1.swap(v2);

    v.clear();

    cout<<v.empty();
}

void explainList() {
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_back(5);

    ls.emplace_front(); {2, 4}; //pro in list can perform front by default in vector we had to use insert method 
}

void explainDeque() {
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    dq.back();

    dq.front();
}

void explainStack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);

    cout<<st.top();

    st.pop();

    cout<<st.top();
    cout<<st.size();
    cout<<st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5;

    cout<<q.back();
    cout<<q.front();

    q.pop();

    cout<<q.front();
}

void explainPQ() {
    // Stores things in lexicographically/ in-order.
    // Min heap and max heap 
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout<<pq.top();

    pq.pop();
    
    cout<<pq.top();

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(2);
    pq.push(5);
    pq.push(8);
    pq.emplace(10);

    cout<<pq.top();
}

void explainSet() {
    // Stores everything in sorted order and stores unique elems no duplicate
    set<int> st; 
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    auto it = st.find(3); //returns iterator (address)

    auto it = st.find(6); 

    st.erase(5);

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it);

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

void explainMultiSet() {
    // Stores sorted but not unique. 
    // Careful with erase comand erases all values with same arg sent val.
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);

    int cnt = ms.count(1);

    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1) + 2);
}

void explainUSet() {
    unordered_set<int> st;
    // lower_bound and upper_bound function does not works, rest all functions are same as above, it does not stores in any particular order it has a better complexity than set in most cases, except some collison happens.
}

void explainMap() {
    // stores as key and value
    // keys are unique and are stored in sorted order.
    map<int, int> map;
    map<int, pair<int, int>> mpp; 
    map<pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace({3, 1});
    mpp.insert({2, 4});
    mpp[{2, 3}] = 10;

    {
        {1, 2}
        {3, 4}
        {3, 1}
    }

    for(auto it: mpp) {
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1];
    cout<<mpp[5];

    auto it = mp.find(3);
    cout<<*(it).second;

    auto it = mpp.find(5);

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
}

void explainMultiMap() {
    // everything same as map, only it can store multiple keys and only mpp[key] cannot be used here. duplicate and sorted. 
}

void explainUnorderedMap() {
    // same as set and unordered_set difference. unique and not sorted
}

void explainExtra() {
    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a + 2, a + 4);
    // the two arguments given above are the location constrains in array, from where to where it will be sorted.

    sort(a, a + n, greater<int>);
    // greater int is a comparator that helps in sorting array in descending order

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort it according to second element if second element is same, then sort it according to first element but in descending
    // Comparators are boolean functions
    sort(a, a + n, comp);

    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 165786578687;
    int cnt = __builtin_popcountll();

    string s = "123";

    do {
        cout<<s<<endl;
    } while(next_permutation(s.begin(), s.end()));

    // above code prints all the possible permutations for the string s, sort the string first to get all the possible permutations.

    int maxi = *max_element(a, a+n);
    // above code gives address for max element in array
}

// comparator function
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    
    if(p1.first > p2.first) return true;
    
    return false;
}

void explainBinarySearch() {
    A[] = {1, 2, 3, 4, 5};
    bool res = binary_search(A, A+n, 3);
    bool res = binary_search(A, A+n, 4);
    //(starting index, ending index, number finding);
}

void explainLowerandUpperBound() {
    int a[] = {1, 4, 5, 6, 9, 9};

    int ind = lower_bound(a, a+n, 4) - a;
    //returns iterator and to get the index we need to do - a. returns the first occurence of the element if it occurs otherwise returns iterator pointing to immediate greater of that number;

    // for vectors below is the syntax, x is the number we are looking for
    int ind = lower_bound(a.begin(), a.end(), x) - a.begin(); 

    int ind = upper_bound(a, a+n, 4) - a;
    int ind = upper_bound(a.begin(), a.end(), x) - a.bengin();
    // Upper bound always returns the iterator pointing to next greater element we are looking for.
}

int main() {
    explainPair();
}