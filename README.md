VLForces
========

Two methods for calculating the vortex-vortex force in a type 2 superconductor simulation

Requirements
------------

*Mac*

If you have homebrew installed you can run

  brew install boost

*Linux*

On Debian based linux you run

  sudo apt-get install libboost-all-dev

*Windows*

TBC

Building
--------

To build you will need to modify the Makefile to point LDFLAGS to the directory containing your boost include files. e.g. #include <boost/math/special_functions/bessel.hpp> 

*Mac* (using Homebrew),

The default install directory will be something like

LDFLAGS=-I/usr/local/Cellar/boost/1.56.0/include

*Linux*

Generally boost is installed to /usr/include so the value of LDFLAGS can be set to blank.

*Windows*

TBC


