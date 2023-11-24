Colossal Cave Adventure
=======================

This is the real, full-blown Colossal Cave Adventure game, written by
Will Crowther and Don Woods at Stanford AI Lab in the early '70s.  It is
the first interactive fiction game where the computer simulates and
describes a situation, and the user types in what to do next, in simple
English.

```
You are standing at the end of a road before a small brick building.
Around you is a forest.  A small stream flows out of the building and
down a gully.

> █
```


Quick start
-----------

You must have on your development system:
 * [VSCode](https://code.visualstudio.com/). This has its own installer.
 * A source install of [this CC65](https://github.com/picocomputer/cc65).
 * The following suite of tools for your specific OS.
```
$ sudo apt-get install cmake python3 pip git build-essential
$ pip install pyserial
```

Then you can obtain the sources, the submodule, and open VSCode.

```
$ git clone [path_to_github]
$ cd [to_where_it_cloned]
$ git submodule update --init
$ code .
```

You must copy the four `troglobit/src/adventX.txt` files to a USB drive on the
Picocomputer. You can then run the program with CTRL-SHIFT-B, or build with F7
and copy `build/advent.rp6502` to the USB drive.

How to play and more information is in the troglobit submodule.
