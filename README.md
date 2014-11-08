OpenInterfaces
==============

About
-----

Due to increasingly complex and numerous implementations of numerical algorithms in many different
programming languages, the verification, validation and paradigms of open science such as
reproducibility are ever harder to accomplish. In many cases, numerical solutions to the same
mathematical problem are developed concurrently with no means of benchmarking as there is no common
ground for comparison. Moreover, adoption or modification of newly developed algorithms often means
either a complete re-implementation of the algorithm in the researcher's software ecosystem or heavy
modifictions of one's own code to interact with the third-party software. A prominent example is the
discipline of model order reduction (MOR) where various methods to assemble reduced order models for
equivalent mathematical models are developed. These methods are especially difficult to compare and
adapt since a plethora of underlying software components are employed with no means of interchange.

The initiative for common open scientific computing interfaces ***OpenInterfaces*** strives to
establish a set of standard software interface definitions to enable the painless exchange of the
various building blocks of modern scientific computing applications. We believe that such interfaces
will greatly improve the comparability of numerical algorithms and the re-usability of
implementations of these algorithms, ultimately increasing the efficiency of research as well as
facilitating the adaption of novel methods into production code.

The interfaces will be defined on the grounds of the following principles:

* Open - the specification will be freely available and published under open licenses.

* Community - a community driven development process will ensure applicability.

* Standard - consistency and modularity among all components will be upheld.

* Tools - reference implementations and language bindings will be supplied.


Scope
-----

All defined interfaces will be accompanied by a reference implementation in the C programming
language, the established standard for portable library interfaces.  For all major scientific
computing languages, we will implement idiomatic bi-directional language bindings to these C library
interfaces, allowing easy interconnection of components, independently of their implemenation
language. 

We aim at supporting the following languages:

* C++
* Python (NumPy / SciPy)
* Matlab / Octave
* Julia
* Fortran
* R


Projects
--------

Currently targeted projects include:

* problem description interface for ODEs / PDEs and control problems
* high-level ODE / PDE solver interface
* solver solution interface
* internal solver algorithm and data structure interface

Possible appplications of these interfaces include:

* automatic benchmarking of PDE / ODE solvers for arbitrary problem sets 
* application of model order reduction algorithms to arbitrary high-dimensional problems
* application of different model order reduction algorithms to a given high-dimensional problem
* usage of arbitrary microscale solvers in multiscale methods

You are welcome to add your interface project proposals.


Team
----

* Christian Himpe (University of Münster)
* Stephan Rave (University of Münster)

Join Us!


Contact
-------

If you wish to contact us, please join our mailinglist:

http://lists.openinterfaces.org/cgi-bin/mailman/listinfo/devel
