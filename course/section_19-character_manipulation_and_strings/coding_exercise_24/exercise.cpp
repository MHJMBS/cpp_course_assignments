#include <iostream>
#include <cstring>


void find_matches(std::string data[] , unsigned int size, const char* key){

    std::string * matches = new std::string [size]; // Create std::string array on the heap. Remember to release
    //Don't modify anything above this line
    //Your code should go below this line
    
    int ans = 0;
    
    for(int i = 0; i < size; i++) {
        if(data[i].find(key) != std::string::npos) {
            matches[ans] = data[i];
            ans++;
        }
    }
    
    std::cout << "Found " << ans << " matches. They are: ";
    
    for(int i = 0; i < ans; i++) {
        std::cout << matches[i];
        if(i != ans-1) std::cout << ' ';
    }
   
    //Your code should go above this line
    //Don't modify anything below this line
    

    delete[] matches; // Remember to release the memory.
   
}