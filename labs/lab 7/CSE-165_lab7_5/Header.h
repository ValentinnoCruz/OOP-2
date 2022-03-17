#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <vector>
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
AppWindow(int x, int y, int w, int h)
{
self = new AppRect(x, y, w, h);
}
AppWindow(const AppRect& r)
{
self = new AppRect(r.x, r.y, r.w, r.h);
}
const AppRect& rect()
{
return *self;
}
virtual void resize(int w, int h)
{
self->w = w;
self->h = h;
}
};
class CircleWin : public AppWindow
{
private:
double radius;
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