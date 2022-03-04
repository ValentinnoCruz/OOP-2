class Circle{

private:
    // private attribute
   double x, y, r;

public:
   double area;
   Circle() //constructor takes in none
        {
            x= 0;
            y=0;
            r = 1;
        }
   
   //constructor circle radius r @ x,y
   Circle(double x1, double y1, double r1) 
        {
            x = x1;
            y = y1;
            r = r1;
        }

    // getters
   double getX() 
        {
            return x;
        }

   double getY() 
        {
            return y;
        }

   double getR() 
        {
            return r;
        }

    // setters
   void setX(double x1) 
        {
            x = x1;
        }

   void setY(double y1) 
        {
            y = y1;
        }

        void setR(double r1) 
        {
            r = r1;
        }
};