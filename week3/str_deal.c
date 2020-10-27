typedef struct
{
    char red;
    char green;
    char blue;
} pixel;


pixel add(pixel one, pixel other);
bool cmp(pixel one, pixel other);


pixel add(pixel one, pixel other)
{
    pixel a = {one.red + other.red, one.green + other.green, one.blue + other.blue};
    // pixel a = one + other;
    return a;
};

bool cmp(pixel one, pixel other){
    if (one.red == other.red && one.green == other.green && one.blue == other.blue)
        return 1;
    return 0;
}