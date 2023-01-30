// L1/c2.cpp
// Speed of light; formatted
// Source: Prof. Niels Walet's code repository
#include<iostream>
#include<iomanip> 
int main() 
{ 
  const double speed_of_light_estimate{3.0195949};
  const double speed_of_light_error{0.03943};
  std::cout<<"Our best estimate of c = ("
	   <<std::setprecision(3)<<speed_of_light_estimate
	   <<"+/-"
	   <<std::setprecision(1)<<speed_of_light_error
	   <<")x10^8 m/s"<<std::endl;
  return 0; 
}
