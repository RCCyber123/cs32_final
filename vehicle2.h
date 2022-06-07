#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle{
public:
   Vehicle() {
      vehicle_class = "";
      origin = "";
      color = "";
      year = 0;
   } 
   
   Vehicle(string vehicle_class, string origin, int year, string color){
      this->vehicle_class = vehicle_class;
      this->origin = origin;
      this->year = year;
      this->color = color;
   }  
    // Getter(s), setter(s) --- missing
   std::string get_vehicle_class() const { return vehicle_class; }
   std::string get_origin() const { return origin; } 
   std::string get_color() const { return color; }
   int get_year() const { return year; }

   void set_vehicle_class(string vehicle_class) { this->vehicle_class = vehicle_class; }
   void set_origin(string origin) { this->origin = origin; }
   void set_color(string color) { this->color = color; }
   void set_year(int year) { this->year = year; }

   // Rule of Three functions --- missing
   ~Vehicle(){}                                    
   Vehicle(const Vehicle &orig){
      vehicle_class = orig.vehicle_class;
      origin = orig.origin;
      year = orig.year;
      color = orig.color;
   }            
   Vehicle& operator=(const Vehicle &right){
      if(this == &right){
         return *this;
      }

      vehicle_class = right.vehicle_class;
      origin = right.origin;
      year = right.year;
      color = right.color;

      return *this;
   }  

private:
   string vehicle_class, origin, color;
   int year; 
};

#endif