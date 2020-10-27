
typedef struct
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
} pixel;


pixel add(pixel one, pixel other);
bool cmp(pixel one, pixel other);


pixel add(pixel one, pixel other)
{
    pixel rez;

    if ( ((int)one.red + (int)other.red) > 256)
        rez.red = 255;
    else
        rez.red = one.red + other.red;

    if ( ((int)one.green + (int)other.green) > 256)
        rez.green = 255;
    else
        rez.green = one.green + other.green;

    if ( ((int)one.blue + (int)other.blue) > 256)
        rez.blue = 255;
    else
        rez.blue = one.blue + other.blue;

    return rez;
};

// foo for comparison of two pixels
bool cmp(pixel one, pixel other)
{
    if (one.red == other.red && one.green == other.green && one.blue == other.blue)
        return 1;
    return 0;
}