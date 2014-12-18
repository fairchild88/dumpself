#include <stdio.h>
char * s = "#include <stdio.h>%c char *s =%c%s%c; int main() { printf(s, 34, s, 34);}"; int main() {printf(s,10, 34, s, 34);}
