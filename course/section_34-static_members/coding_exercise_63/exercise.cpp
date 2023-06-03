#include "exercise.h"

CoolUtility::CoolUtility(const char *description)
: m_object_description(description) {

}

void CoolUtility::what_do_you_do() const{
    std::cout << m_object_description;    
}