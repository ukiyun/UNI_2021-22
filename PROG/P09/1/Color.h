/*contains only the class declaration */
#ifndef COLOR_H
#define COLOR_H


class Color{
    public:
        //constructors
        Color(unsigned char red, unsigned char green, unsigned char blue);
        Color(const Color& b);

        //accessors
        unsigned char red() const;
        unsigned char green() const;
        unsigned char blue() const;

        static const Color RED, GREEN, BLUE, BLACK, WHITE;
        //equality between colours
        bool equal_to(const Color& other) const;

        //member function
        void invert();

    private:
        unsigned char red_;
        unsigned char green_;
        unsigned char blue_;
        
};

#endif
