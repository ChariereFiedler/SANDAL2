# SANDAL2

SANDAL2 is a SDL2 wrapper which purpose is to make object managment and
graphic display easier.  

To generate the Doxygen documentation, use the command:  
`doxygen Doxyfile`  
<br/>
To see this read me file with a better display, you can go to [this project's
website](https://klevh.github.io/SANDAL2/).
## About the author

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;I am a French student, studying computer science engineering at ISIMA, France. 
I made this wrapper because I found boresome to have to create a display function for each menu's page, but I ended 
up going a little further in it. I hope you will enjoy using it, if you have any comment or advice, do not feel shy 
and tell me ! I will really appreciate it.

## Useful links

From this "read-me", you can either go to :
* the [read-me](Docs/README.md) that explain basically this library ;
* or a [small tutorial](Docs/Tutorial.md) explaining how to use it.

## Versions

0.0.0 : SDL2TK<br/>
0.1.0 : adding rotations<br/>
0.2.0 : clickable areas<br/>
0.3.0 : animation's managment<br/>
1.0.0 : project renamed SANDAL2<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;hide window objects from the user<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;hide element's lists from the user<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;going from an element's list structure to a list of list (display code) of list (plan) of elements<br/>
1.0.1 : possibility to hide event managment from the user<br/>
1.0.2 : adding shaded and blended text rendering<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;adding and correcting error's functions return<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;wrapping of TTF's font style<br/>
1.0.3 : adding identifier to sprites<br/>
1.0.4 : adding the possibility to set the window's icon<br/>
1.0.5 : adding the getter for the text of an element<br/>
1.0.6 : correcting the isDisplaied function<br/>
1.1.0 : correcting initIteratorElementSDL2 function<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;adding a freeing function to element's datas<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;adding a function to free an element's data without getting it<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;adding a structure that contains every function pointer (event handler)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;adding an event handler to windows so that the user can add window events<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;adding functions to allow the user to add window event functions to a window<br/>
1.1.1 : adding functions so that windows can be closed in binded functions<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;changing error return type from int to unsigned long for event functions on more than one window<br/>
1.1.2 : changing functions not meant for the user to static in their source file, removing them from the header<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;adding the cast on all mallocs for C++ portability<br/>
1.1.3 : optimizing window managment<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;renaming HitBox by Clickable<br/>
1.1.4 : adding the possibility to change the correspondance between the origin of the window and the origin of all the elements placed<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;correcting C++ compatibility by renaming delete attribute of WindowSDL2 deleted<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;passing char * to const char * when possible<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;adding clearElementToElementSDL2, clearElementWindowSDL2, clearDisplayCode and clearPlanDisplayCode<br/>

## Project's size

FontSDL2.c : 268 rows<br/>
WindowSDL2.c : 291 rows<br/>
DisplayCode.c : 80 rows<br/>
Sprite.c : 308 rows<br/>
Clickable.c : 321 rows<br/>
ElementSDL2.c : 1,793 rows<br/>
SANDAL2.c : 833 rows<br/>
<br/>
Total for source files : 3,902 rows<br/>
<br/>
FontSDL2.h : 107 rows<br/>
WindowSDL2.h : 269 rows<br/>
DisplayCode.h : 70 rows<br/>
Sprite.h : 186 rows<br/>
Clickable.h : 211 rows<br/>
ElementSDL2.h : 838 rows<br/>
SANDAL2.h : 199 rows<br/>
<br/>
Total for header files : 1,880 rows<br/>
<br/>
Total : 5,782 rows
