VLForces
========

Two methods for calculating the vortex-vortex force in a type 2 superconductor simulation.

There is an example using a modified Bessel function and an example using a polynomial that approximates the Bessel function[1]. The polynomial version is much faster and has a smaller cut of radius. It also avoids the requirement for including the boost headers.

[1] Besseling, R., Kes, P. H., Dro ̈se, T. & Vinokur, V. M. Depinning and dynamics of vor- tices confined in mesoscopic flow channels. New Journal of Physics 7, 71 (2005). URL http://stacks.iop.org/1367-2630/7/i=1/a=071.

Requirements
------------

**Mac**

If you have homebrew installed you can run

  brew install boost

**Linux**

On Debian based linux you run

  sudo apt-get install libboost-all-dev

**Windows**

TBC

Building
--------

To build you will need to modify the Makefile to point LDFLAGS to the directory containing your boost include files. e.g. #include <boost/math/special_functions/bessel.hpp> 

**Mac** (using Homebrew),

The default install directory will be something like

LDFLAGS=-I/usr/local/Cellar/boost/1.56.0/include

**Linux**

Generally boost is installed to /usr/include so the value of LDFLAGS can be set to blank.

**Windows**

TBC


