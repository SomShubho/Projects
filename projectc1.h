//structure declaration
//structure area-single entity that holds index value, the name of the shape, and its formula
//size of structure- atleast sum of sizes of all its data members(implementation specific)
struct area
{
    int index;
    char name[20];
    char formula[50];
    
};
typedef struct area area_t;
//typedef allows you to give a new name to struct type
