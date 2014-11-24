//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// VLForces.cpp - A program to compute two vortex-vortex forces
//                for a vortex lattice simulation 
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

#include <boost/math/special_functions/bessel.hpp>
#include <fstream>
#include <iostream>

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// main
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

int main()
{
   
    double lambda = 1.11;
    
    double rint = 0.01;
    double rlo = 0.01;
    double rhi = 10;
    
    int Nints =  (rhi-rlo)/rint;
    
    double rcut = 3.33;
    
    std::ofstream results("fr.txt");

    results << "r\tboost_fr\tpoly_fr\n"; 

    for (int i = 0; i <= Nints; ++i)
    {
       
        double r = rlo + i * rint;
        
        double boost_fr = r < rcut ? boost::math::cyl_bessel_k(1,  r/lambda) : 0;
	
        double poly_fr = r < rcut ? 1.0/r + r*r*r/rcut/rcut/rcut/rcut - 2*r/rcut/rcut : 0;

		results << r << "\t" << boost_fr << "\t\t" << poly_fr << std::endl;

    }
    
    std::cout << "Results written to fr.txt" << std::endl;

    results.close();
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// End of file
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
