## Use Minuit2 in your C++ program

_In the following it's assumed Minuit2 has been installed in_ **/opt/** (see the [installation](./install.md) instructions for details on how to make a different choice for the installation directory)-

### Compiling

``` Makefile
CFLAGS = -I /opt/Minuit2/inc/
```

### Linking

During the installation of Minuit2 it is created a shared library **libMinuit2.so.0**
This is the shared library needed to be linked with your objects in order to produce the executable.[^1]

[^1]: My guess is that Minuit2 developers chose this name in order to not conflict with the **libMinuit2.so** possibly coming from the installation of [ROOT](https://root.cern/).

``` Makefile
LDFLAGS = -fopenmp -L /opt/Minuit2/src/.libs/  -lMinuit2
```

Note that the latter won't work until you place the shared library **libMinuit2.so.0** in **/usr/lib** or **/usr/local/lib/**. You should have done it during the [installation](./install.md) process.
