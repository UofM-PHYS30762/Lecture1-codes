// L1/c1.cpp
// Speed of light; unformatted
// Source: Prof. Niels Walet's code repository
#include<iostream>
int main() 
{ 
  const double speed_of_light_estimate{3.0195949};
  const double speed_of_light_error{0.03943};
  std::cout<<"Our best estimate of c = ("<< speed_of_light_estimate<<"+/-"
	   <<speed_of_light_error<<")x10^8 m/s"<<std::endl;
  return 0; 
} 

