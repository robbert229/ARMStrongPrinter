#define STEPPER_NEGATIVE 1

#define B_DIR_BIT   0b00000010000000000000000000000000
#define B_STEP_BIT  0b00000000001000000000000000000000
#define A_DIR_BIT   0b00000000000000010000000000000000
#define A_STEP_BIT  0b00000000000000000000000001000000
#define Z_DIR_BIT   0b00000000000000000000000000100000
#define Z_STEP_BIT  0b00000000000000000000000000010000
#define Y_DIR_BIT   0b00000000000000000000000000001000
#define Y_STEP_BIT  0b00000000000000000000000000000100
#define X_DIR_BIT   0b00000000000000000000000000000010
#define X_STEP_BIT  0b00000000000000000000000000000001

// Orig 80
#define XSTEPSPERMILIMETER (56.0)
// Orig 80
#define YSTEPSPERMILIMETER (56.0)
// Orig 280
#define ZSTEPSPERMILIMETER (2461.0)
#define ASTEPSPERMILIMETER (1321.0)
#define BSTEPSPERMILIMETER (700.0)

void parseG0(char *input, int lineNumber);
void parseG1(char *input, int lineNumber);
void parseG92(char *input, int lineNumber);
void parseG28(char *input, int lineNumber);
void bresenham(int x0, int y0, int z0, int a0, int b0, int x1, int y1, int z1, int a1, int b1, long speed, FILE *fout);
void fwrite32(uint32_t val, FILE *f);
void write_to_fiq(int x, int y, int z, int a, int b, long speed, FILE *fout);
int fLineCount(FILE *file);
unsigned long compressFile(FILE *ifile, FILE *ofile);