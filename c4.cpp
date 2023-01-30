// L1/c4.cpp
// Speed of light; fully formatted
// Source: Prof. Niels Walet's code repository
#include<iostream>
#include<iomanip> 
int main() 
{ 
  const double speed_of_light_estimate{3.0195949e8};
  const double speed_of_light_error{0.03943e8};
  std::cout.setf(std::ios::scientific, std::ios::floatfield); 
  std::cout<<"Our best estimate of c = "
	   <<std::setprecision(2)<<speed_of_light_estimate<<"+/-" 
	   <<std::setprecision(0)<<speed_of_light_error<<" m/s"
	   <<std::endl;
  return 0; 
}
