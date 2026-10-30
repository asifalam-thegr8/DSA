class MyHashSet {
private:
    int numBuckets;
    vector<list<int>> buckets;

    int hash(int key) {
        return key % numBuckets;
    }

public:
    MyHashSet() {
        numBuckets = 769; // A prime number to minimize collisions
        buckets.resize(numBuckets);
    }
    
    void add(int key) {
        int h = hash(key);
        for (auto it = buckets[h].begin(); it != buckets[h].end(); ++it) {
            if (*it == key) return; // Key already exists
        }
        buckets[h].push_back(key);
    }
    
    void remove(int key) {
        int h = hash(key);
        for (auto it = buckets[h].begin(); it != buckets[h].end(); ++it) {
            if (*it == key) {
                buckets[h].erase(it);
                return;
            }
        }
    }
    
    bool contains(int key) {
        int h = hash(key);
        for (auto it = buckets[h].begin(); it != buckets[h].end(); ++it) {
            if (*it == key) return true;
        }
        return false;
    }
};