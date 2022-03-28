#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <vector>

//----apprect class
class AppRect
{
    public:
    int x, y, w, h;
        AppRect(int x, int y, int w, int h)
        {
            this->x = x;
            this->y = y;
            this->w = w;
            this->h = h;
        }
};

        class AppWindow
        {
            protected:
            AppRect* self;
            
            public:
                
            AppWindow()
            {
                self = new AppRect(0, 0, 0, 0);
            }
                //-----app Window Constructor 1
                AppWindow(int x, int y, int w, int h)
            {
                self = new AppRect(x, y, w, h);
            }
                //---app Window Constructor 2
                AppWindow(const AppRect& r)
            {
                self = new AppRect(r.x, r.y, r.w, r.h);
            }
                //----used to retrieve the rectangle
                const AppRect& rect()
            {
                return *self;
            }   
                //---called everytime method resize is called by the system
                virtual void resize(int w, int h)
            {
                self->w = w;
                self->h = h;
            }
        };
        
// -------------circle class        
class CircleWin : public AppWindow
{
    private:
    double radius; //-----radius
    public:
    CircleWin(int x, int y, int w, int h)
    {
        self->x = x;
        self->y = y;
        self->w = w;
        self->h = h;
    (w < h) ? radius = w : radius = h;
    }
    
    CircleWin(const AppRect& r)
    {
        self->x = r.x;
        self->y = r.y;
        self->w = r.w;
        self->h = r.h;
        (r.w < r.h) ? radius = r.w : radius = r.h;
    }
        void resize(int w, int h)
        {
            (w < h) ? radius = w : radius = h;
            std::cout << "radius: " << radius << std::endl;
        }
};

// ----------rect class
class RectWin : public AppWindow
{
    private:
    double area;
    
    public:
        
        RectWin(int x, int y, int w, int h)
        {
            self->x = x;
            self->y = y;
            self->w = w;
            self->h = h;
            area = w*h;
        }
        
        RectWin(const AppRect& r)
        {
            self->x = r.x;
            self->y = r.y;
            self->w = r.w;
            self->h = r.h;
            area = r.w*r.h;
        }
        void resize(int w, int h)
        {
            self->w = w;
            self->h = h;
            area = w*h;
            std::cout << "area: " << area << std::endl;
        }
};

#endif