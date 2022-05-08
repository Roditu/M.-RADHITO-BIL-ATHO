#ifndef __RECTANGULAR_HPP__
#define __RECTANGULAR_HPP__
   
using namespace std;

    class persegiPanjang{
        private:
            float xmax, xmin, ymax, ymin;

        public:
            persegiPanjang(float panjang, float lebar, float midpx, float midpy);
            float panjang, lebar, midpx, midpy;
            persegiPanjang operator+ (persegiPanjang const &);
            persegiPanjang operator- (persegiPanjang const &);
            void operator++ ();
            void operator++(int);
            void operator-- ();
            void operator--(int);
            bool operator== (persegiPanjang const &) const;
            float operator[](int i);
            void hasil();
            
    };

#endif