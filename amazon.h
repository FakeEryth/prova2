
#define CMD_ORDER 0
#define CMD_COST 1  //opzionale

#define NO_ERR 0
#define ERROR 1


struct CMD
{
    unsigned long cmd;
    unsigned long product;
    unsigned short quantity;
    char customer[32];
};

struct ANS
{
    unsigned long cmd;
    unsigned short err;
    float costo;  //opzionale
};

int order(unsigned long product, unsigned short quantity, char customer[32]);

int cost(unsigned long product, unsigned short quantity, float* price);
