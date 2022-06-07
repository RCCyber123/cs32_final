#ifndef CAR_H 
#define CAR_H 
#include "vehicle.h" 

class Car : public Vehicle { 
   public:
        Car() : Vehicle(){
          ED = 0;
          HP = 0;
        }

        Car(string vehicle_class, string origin, int year, string color, double ED, int HP) : Vehicle(vehicle_class, origin, year, color){
          this->ED = ED;
          this->HP = HP;
        }

        double get_ED() const{ return ED; }
        int get_HP() const{ return HP; }

	   void set_ED(double ED){ this->ED = ED; } 
        void set_HP(int HP){ this->HP = HP; }


   private: 
	double ED; 
     int HP;
}; 

#endif