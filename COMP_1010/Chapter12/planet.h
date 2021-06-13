/* To create a personal library, one must:

1. Create a Header file containing the interface info for a program needing the library (What the functions will do)
2 Create an implementation file container code of the library functions and other details of implementation hidden from user program. (How they will do it)
3. Compile the implementation file. This step must be repeated any time either the header file or the implementation file is revised. 

To Use:
1. Include the library’s header file in the user program through an #include directive.
2. After compiling the user program, include both its object file and the object file created in step 3 above in the command that activates the linker.
*/

/* planet.h
*
* Type planet_t has these components
*  name, diameter, moons, orbit_time, rotation_time
*
* Operators:
*  print_planet, planet_equal, scan_planet
*/

#define PLANET_STRSIZ 10

typedef struct {
    char name[PLANET_STRSIZ];
    double diameter;
    int moons;
    double orbit_time, rotation_time;
} planet_t;

// Displays all componenets of planet structure
extern void print_planet(planet_t pl);

// Determines whether components of planet 1 and planet 2 match
extern int planet_equal(planet_t planet_1, planet_t planet_2);

// Fills planet structure with input data, integer returned as success/fail
extern int scan_planet(planet_t *plnp);