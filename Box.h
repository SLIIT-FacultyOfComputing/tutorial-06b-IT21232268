class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
      void setlength(double l);
      void setwidth(double w);
      void setheigth(double h);

       // write prototypes of getters for length, width and height
       double getlength;
       double getwidth;
       double getheigth;

       int calcVolume();
};
