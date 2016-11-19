#ifndef ALBUME_H_INCLUDED
#define ALBUME_H_INCLUDED

#include <ctime>

class albume {
    private:
        String title;
        String interpreter;
        String label;
        time_t created_date = time(0);
        String musicStyle;


};


#endif // ALBUME_H_INCLUDED
