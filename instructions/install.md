# Installation of Minuit2

### Download

Download the latest version from the [Minuit website](http://seal.web.cern.ch/seal/snapshot/work-packages/mathlibs/minuit/). Alternatively you can check if the release you are looking for is already in this repository.

### Archive extraction

Now, in the directory where you downloaded the archive, extract Minuit2 with:

``` bash    
mv Minuit-x-x-x.tar.gz   Minuit-x-x-x.tar # .tar.gz --> .tar
tar xvf Minuit-x-x-x.tar # untar the archive
```

*NOTE* : Don't follow the instructions on the [webpage](http://seal.web.cern.ch/seal/snapshot/work-packages/mathlibs/minuit/gettingStarted/autoconf.html)	because you'd get the following error:


``` bash
tar -zxf Minuit2-5.34.14.tar.gz
```

```
gzip: stdin: not in gzip format
tar: Child returned status 1
tar: Error is not recoverable: exiting now
```

The same happens even if you rename the .tar.gz file as above.

### Configuration

From now on you can follow the instructions on the webpage.
In most cases you can simply do:

``` bash
./configure
make
make check
```
inside the extracted folder.

### Run a test program

On the webpage the name of the executable is not updated. For Minuit2-5.34.14 simply call:

``` bash
test/MnTutorial/test_Minuit2_Quad4FMain
```

### Configuration for compiling and linking

If everything went fine, you can place the present **Minuit2/** folder wherever you want in your filesystem.
A choice could be the **/opt/** directory.
After that give also the following command (eventually replacing /opt/ with your choice):

``` bash
sudo ln -s /opt/Minuit2/src/.libs/libMinuit2.so.0 /usr/local/lib/libMinuit2.so.0
sudo ldconfig
```

This will create a symbolic link to the shared library needed for the linking process.
See the [usage](./usage.md) instructions for further details about this point.

### Uninstall Minuit2 from your machine

In order to completely remove **Minuit2** give the following commands (assuming your installation directory is **/opt/**):

``` bash
sudo rm /usr/local/lib/libMinuit2.so.0 # symbolic link to the shared library
sudo rm -r /opt/Minuit2 # whole Minuit2 package
```
