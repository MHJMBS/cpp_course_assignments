#include "mh_string.h"

namespace mh {

    //Constructors and Destructor

    string::string() {
        m_size = 0;
        m_capacity = 16;
        m_c_str = new char[16]{0};
    }

    string::string(const char* c_str) {
        m_size = std::strlen(c_str);
        m_capacity = std::max(m_size+1, 16ul);
        m_c_str = new char[m_capacity];
        std::strcpy(m_c_str, c_str);
    }

    string& string::operator=(const string &right) {
        m_size = right.size();
        m_capacity = right.capacity();

        if(m_c_str != right.c_str()) {
            delete[] m_c_str;
            m_c_str = new char[capacity()];
            std::strcpy(m_c_str, right.c_str());
        }

        return *this;
    }

    //ELEMENT ACCESS

    char& string::at(size_t index) {
        assert(0 <= index && index < size());
        return m_c_str[index];
    }

    const char& string::at(size_t index) const{
        assert(0<= index && index < size());
        return m_c_str[index];
    }

    char& string::operator[](size_t index) {
        return m_c_str[index];
    }

    const char& string::operator[](size_t index) const{
        return m_c_str[index];
    }

    char& string::front() {
        return (*this)[0];
    }

    const char& string::front() const{
        return (*this)[0];
    }

    char& string::back() {
        return (*this)[size()-1];
    }

    const char& string::back() const{
        return (*this)[size()-1];
    }

    const char* string::data() const {
        return c_str();
    }

    const char* string::c_str() const{
        return m_c_str;
    }

    //CAPACITY

    bool string::empty() const{
        return size() == 0;
    }

    size_t string::size() const{
        return m_size;
    }

    size_t string::length() const{
        return size();
    }

    size_t string::capacity() const{
        return m_capacity;
    }

    void string::shrink_to_fit() {
        size_t shrinked_capacity = size()+1;

        if(shrinked_capacity == capacity()) return;

        char *new_m_c_str = new char[shrinked_capacity];
        std::strcpy(new_m_c_str, m_c_str);

        delete[] m_c_str;
        m_c_str = new_m_c_str;
        m_capacity = shrinked_capacity;
    }

    void string::reserve(size_t target_capacity) {
        size_t new_capacity = capacity();

        while(new_capacity < target_capacity) {
            new_capacity *= 2;
        }

        char *new_m_c_str = new char[new_capacity];
        std::strcpy(new_m_c_str, c_str());

        delete[] m_c_str;
        m_c_str = new_m_c_str;
    }
    
    //OPERATIONS

    void string::clear() {
        for(unsigned int i = 0; i < size(); i++) {
            (*this)[i] = '\0';
        }
    }
    
    string& string::insert(size_t index, size_t count, char ch) {
        reserve(size()+count+1);

        size_t new_last_char = size()-1+count;
        size_t second_half = index+count;

        for(int i = new_last_char; i >= static_cast<int>(index); i--) {
            if(static_cast<int>(second_half) <= i) {
                (*this)[i] = (*this)[i-count];
            }else if(static_cast<int>(index) <= i){
                (*this)[i] = ch;
            }
        }

        m_size += count;
        m_c_str[size()] = '\0';

        return *this;
    }
    
    string& string::insert(size_t index, const char *s) {
        return insert(index, s, std::strlen(s));
    }
    
    string& string::insert(size_t index, const char *s, size_t count) {
        reserve(size()+count+1);

        size_t new_last_char = size()-1+count;
        unsigned int second_half = index+count;

        for(int i = new_last_char, j = count-1; i >= static_cast<int>(index); i--) {
            if(static_cast<int>(second_half) <= i) {
                (*this)[i] = (*this)[i-count];
            }else if(static_cast<int>(index) <= i){
                (*this)[i] = s[j];
                j--;
            }
        }

        m_size += count;
        m_c_str[size()] = '\0';

        return *this;
    }
    
    string& string::insert(size_t index, const string &str) {
        insert(index, str, 0, str.size());
        return *this;
    }
    
    string& string::insert(size_t index, const string &str, size_t s_index, size_t count) {
        insert(index, str.c_str()+s_index, count);
        return *this;
    }

    string& string::erase(size_t index) {
        return erase(index, m_size-index);
    }

    string& string::erase(size_t index, size_t count) {
        count = std::min(count, size()-index);

        while(index+count <= size()) {
            (*this)[index] = (*this)[index+count];
            index++;
        }

        m_size -= count;

        return *this;
    }
    
    void string::push_back(char ch) {
        insert(size(), 1, ch);
    }

    void string::pop_back() {
        erase(size()-1);
    }
    
    string& string::append(size_t count, char ch) {
        return insert(size(), count, ch);
    }
    
    string& string::append(const string &str) {
        return insert(size(), str);
    }
    
    string& string::append(const string &str, size_t pos) {
        return append(str, pos, str.size() - pos);
    }

    string& string::append(const string &str, size_t pos, size_t count) {
        return insert(size(), str, pos, count);
    }
    
    string& string::append(const char *s, size_t count) {
        return insert(size(), s, count);
    }

    string& string::append(const char *s) {
        return append(s, std::strlen(s));
    }

    string& string::append(std::initializer_list<char> ilist) {
        reserve(size() + ilist.size() + 1);

        for(char ch : ilist) {
            push_back(ch);
        }

        return *this;
    }

    string& string::operator+=(const string& right) {
        return append(right);
    }

    int string::compare(const string &str) const{
        return compare(0, size(), str, 0, str.size());
    }

    int string::compare(size_t pos1, size_t count1, const string &str) const{
        return compare(pos1, count1, str, 0, str.size());
    }

    int string::compare(size_t pos1, size_t count1, const string &str, size_t pos2, size_t count2) const{
        size_t min_count = std::min(count1, count2);
    
        for(size_t i = 0; i < min_count; i++) {
            if((*this)[pos1+i] < str[pos2+i]) {
                return -1;
            }else if((*this)[pos1+i] > str[pos2+i]) {
                return 1;
            }
        }

        if(count1 < count2) {
            return -1;
        }else if(count1 == count2) {
            return 0;
        }else {
            return 1;
        }
    }

    int string::compare(const char *s) const {
        return compare(0, size(), s, std::strlen(s));
    }

    int string::compare(size_t pos1, size_t count1, const char *s) const{
        return compare(pos1, count1, s, std::strlen(s));
    }

    int string::compare(size_t pos1, size_t count1, const char *s, size_t count2) const{
        size_t min_count = std::min(count1, count2);
    
        for(size_t i = 0; i < min_count; i++) {
            if((*this)[pos1+i] < s[i]) {
                return -1;
            }else if((*this)[pos1+i] > s[i]) {
                return 1;
            }
        }

        if(count1 < count2) {
            return -1;
        }else if(count1 == count2) {
            return 0;
        }else {
            return 1;
        }
    }

    string& string::replace(size_t pos, size_t count, const string &str) {
        return replace(pos, count, str, 0, str.size());
    }

    string& string::replace(size_t pos, size_t count, const string &str, size_t pos2, size_t count2) {
        reserve(size() - count + count2);

        size_t second_half = pos+count;
        int size_delta = count2 - count;

        if(size_delta >= 0) {
            for(int i = size(); static_cast<int>(second_half) <= i; i--) {
                (*this)[i+size_delta] = (*this)[i];
            }
        }else {
            for(size_t i = second_half; i <= size(); i++) {
                (*this)[i+size_delta] = (*this)[i];
            }
        }

        for(size_t i = 0; i < count2; i++) {
            (*this)[pos+i] = str[i];
        }

        m_size += size_delta;

        return *this;
    }

    string& string::replace(size_t pos, size_t count, const char *cstr, size_t count2) {
        reserve(size() - count + count2);

        size_t second_half = pos+count;
        int size_delta = count2 - count;

        if(size_delta >= 0) {
            for(int i = size(); static_cast<int>(second_half) <= i; i--) {
                (*this)[i+size_delta] = (*this)[i];
            }
        }else {
            for(size_t i = second_half; i <= size(); i++) {
                (*this)[i+size_delta] = (*this)[i];
            }
        }

        for(size_t i = 0; i < count2; i++) {
            (*this)[pos+i] = cstr[i];
        }

        m_size += size_delta;

        return *this;
    }

    string& string::replace(size_t pos, size_t count, const char *cstr) {
        return replace(pos, count, cstr, std::strlen(cstr));
    }

    string& string::replace(size_t pos, size_t count, size_t count2, char ch) {
        reserve(size() - count + count2);

        size_t second_half = pos+count;
        int size_delta = count2 - count;

        if(size_delta >= 0) {
            for(int i = size(); static_cast<int>(second_half) <= i; i--) {
                (*this)[i+size_delta] = (*this)[i];
            }
        }else {
            for(size_t i = second_half; i <= size(); i++) {
                (*this)[i+size_delta] = (*this)[i];
            }
        }

        for(size_t i = 0; i < count2; i++) {
            (*this)[pos+i] = ch;
        }

        m_size += size_delta;

        return *this;
    }

    string string::substr(size_t pos, size_t count) const {
        size_t substr_size = std::min(size() - pos, count);
        string tmp;
        tmp.reserve(substr_size);

        for(size_t i = 0; i < substr_size; i++) {
            tmp[i] = (*this)[pos+i];
        }

        return tmp;
    }

    size_t string::copy(char *dest, size_t count, size_t pos) const{
        size_t to_copy = std::min(size() - pos, count);
        
        for(size_t i = 0; i < to_copy; i++) {
            dest[i] = (*this)[pos+i];
        }

        return to_copy;
    }

    void string::resize(size_t count) {
        resize(count, '\0');
    }

    void string::resize(size_t count, char ch) {
        reserve(count);

        unsigned int left = size() <= count ? size() : count;
        unsigned int right = size() <= count ? count : size();

        for(unsigned int i = left; i <= right ; i++) {
            (*this)[i] = '\0';
        }

        if(count < size()) {
            m_size = count;
        }
    }

    void string::swap(string &other) {
        std::swap(m_c_str, other.m_c_str);
        std::swap(m_size, other.m_size);
        std::swap(m_capacity, other.m_capacity);
    }
    
    //NON-MEMBER FUNCTIONS

    string operator+(const string &left, const string &right) {
        string tmp;
        tmp.reserve(left.size() + right.size() + 1);
        tmp += left;
        tmp += right;
        return tmp;
    }

    bool operator==(const string &left, const string &right) {
        return std::strcmp(left.c_str(), right.c_str()) == 0;
    }

    std::strong_ordering operator<=>(const string &left, const string &right) {
        int result = std::strcmp(left.c_str(), right.c_str());

        if(result < 0) {
            return std::strong_ordering::less;
        }else if(result == 0) {
            return std::strong_ordering::equal;
        }else {
            return std::strong_ordering::greater;
        }
    }
    
    //INPUT/OUTPUT

    std::ostream& operator<<(std::ostream& os, const string &str) {
        os << str.c_str();
        return os;
    }

}