/*
Revise the flat-washer program (Fig. 3.5) to use function subprograms 
find_area , find_rim_area , find_unit_weight , and instruct. 
Show the complete program.
*/

/*
* Computes the weight of a batch of flat washers.
*/

#include <stdio.h>
#define PI 3.14159

double find_area(double radius) 
{
    return PI * radius * radius;
}
double find_rim_area(double edge_radius, double hole_radius)
{
    return PI * edge_radius * edge_radius - PI * hole_radius * hole_radius;
}

double find_unit_weight(double rim_area, double thickness, double density)
{
   return rim_area * thickness * density;
}

void instruct(void)
{
    printf("This program is designed to find the expected weight of a batch of washers\n");
    printf("It does so by computing the weight of a single washer based on size, thickness and density");
}


int main(void)
{
    double hole_diameter;   //input - diameter of hole
    double edge_diameter;   //input - diameter of outer edge
    double thickness;       //input - thickness of washer
    double density;         //input - density of material used
    double quantity;        //input - number of washers made
    double weight;          //output - weight of washer batch
    double hole_radius;     //radius of hole
    double edge_radius;     //radius of outer edge
    double rim_area;        //area of rim
    double unit_weight;     //weight of 1 washer
    double hole_area;
    double edge_area;

    /* Get the inner diameter, outer diameter, and thickness.*/
    printf("Inner diameter in centimeters> ");
    scanf("%lf", &hole_diameter);
    
    printf("Outer diameter in centimeters> ");
    scanf("%lf", &edge_diameter);
    
    printf("Thickness in centimeters> ");
    scanf("%lf", &thickness);
    
    /* Get the material density and quantity manufactured. */
    printf("Material density in grams per cubic centimeter> ");
    scanf("%lf", &density);
    
    printf("Quantity in batch> ");
    scanf("%lf", &quantity);
    
    /* Compute the rim area. */
    hole_radius = hole_diameter / 2.0;
    hole_area = find_area(hole_radius);

    edge_radius = edge_diameter / 2.0;
    edge_area = find_area(edge_radius);

    rim_area = find_rim_area(edge_radius, hole_radius);
        
    /* Compute the weight of a flat washer. */
    unit_weight = find_unit_weight(rim_area, thickness, density);
        
    /* Compute the weight of the batch of washers. */
    weight = unit_weight * quantity;
    
    /* Display the weight of the batch of washers. */
    printf("\nThe expected weight of the batch is %.2f", weight);
    printf(" grams.\n");
 
    return (0);
}