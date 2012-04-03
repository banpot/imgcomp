#include "imgcomp.h"
#include <stdio.h>


int main(int argc, char* argv[]){

if (argc < 2) {printf("use format:\nimgcomp filename1 filename2 [compare type]\n");exit(0);}

imgcomp(argv[0], argv[1], IMGCOMP_PSNR);

}
