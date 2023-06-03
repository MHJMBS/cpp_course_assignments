#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>

class CoolUtility {

    const char *m_object_description;
    
    public:

    static inline const char *s_general_description = "Cool utility to move us all to Mars";
    
    CoolUtility(const char *description);
    
    void what_do_you_do() const;
};



#endif // _EXERCISE_H
