#ifndef POINT _H
#define POINT _H


class point
{
    public:
        point ();
        point(float x , float y ) ;
        void setPoint(float x, float y);
        point(const point& p) ;
        void affiche() const  ;

    friend bool comparer(const point& p1, const point& p2);
    friend float distance(const point& p1, const point& p2);
    friend point milieu(const point& p1, const point& p2);

    protected:

    private:
    float x, y;
};

#endif // POINT _H
