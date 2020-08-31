## Doxygen manual

In order to generate the Doxygen manual give the following commands go to the Minuit2 directory and then

``` bash
cd doc/
```

Open the **Doxyfile** file and set the option **CALL_GRAPH** to **YES**.
You also need to install the *dot* package, which is included in *graphviz*:

``` bash
sudo apt install graphviz
```
Now you can generate the Doxygen documentation:

``` bash
doxygen Doxyfile
```

In order to read the generated manual in html do:

``` bash
xdg-open html/index.html &
```
