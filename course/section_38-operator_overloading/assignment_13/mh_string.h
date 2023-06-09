#pragma once

#include <cstddef>
#include <cstring>
#include <fstream>
#include <cassert>
#include <algorithm>

namespace mh {

    class string {
        char* m_c_str;
        size_t m_size;
        size_t m_capacity;

        public:

        //CONSTRUCTORS AND DESTRUCTOR

        string();

        string(const char* c_str);

        ~string() {
            delete[] m_c_str;
        }

        string& operator=(const string &right);

        //ELEMENT ACCESS

        char& at(size_t index);
        const char& at(size_t index) const;

        char& operator[](size_t index);
        const char& operator[](size_t index) const;

        char& front();
        const char& front() const;

        char& back();
        const char& back() const;

        const char* data() const;

        const char* c_str() const;

        //CAPACITY

        bool empty() const;

        size_t size() const;
        size_t length() const;

        void reserve(size_t new_capacity);

        size_t capacity() const;

        void shrink_to_fit();

        //OPERATIONS

        void clear();

        string& insert(size_t index, size_t count, char ch);
        string& insert(size_t index, const char *s);
        string& insert(size_t index, const char *s, size_t count);
        string& insert(size_t index, const string &str);
        string& insert(size_t index, const string &str, size_t s_index, size_t count);
        
        string& erase(size_t index);
        string& erase(size_t index, size_t count);

        void push_back(char ch);

        void pop_back();

        string& append(size_t count, char ch);
        string& append(const string &str);
        string& append(const string &str, size_t pos);
        string& append(const string &str, size_t pos, size_t count);
        string& append(const char *s, size_t count);
        string& append(const char *s);
        string& append(std::initializer_list<char> ilist);

        string& operator+=(const string& right);

        int compare(const string &str) const;
        int compare(size_t pos1, size_t count1, const string &str) const;
        int compare(size_t pos1, size_t count1, const string &str, size_t pos2, size_t count2) const;
        int compare(const char *s) const;
        int compare(size_t pos1, size_t count1, const char *s) const;
        int compare(size_t pos1, size_t count1, const char *s, size_t count2) const;

        string& replace(size_t pos, size_t count, const string &str);
        string& replace(size_t pos, size_t count, const string &str, size_t pos2, size_t count2);
        string& replace(size_t pos, size_t count, const char *cstr, size_t count2);
        string& replace(size_t pos, size_t count, const char *cstr);
        string& replace(size_t pos, size_t count, size_t count2, char ch);

        string substr(size_t pos, size_t count) const;

        size_t copy(char *dest, size_t count, size_t pos = 0) const;

        void resize(size_t count);
        void resize(size_t count, char ch);

        void swap(string &other);

        //SEARCH

        //FRIENDS

        friend string operator+(const string &str1, const string &str2);
    };

    //NON-MEMBER FUNCTIONS

    string operator+(const string &str1, const string &str2);

    bool operator==(const string &left, const string &right);
    std::strong_ordering operator<=>(const string &left, const string &right);

    std::ostream& operator<<(std::ostream& os, const string &str);
    std::istream& operator>>(std::istream& is, const string &str);
}