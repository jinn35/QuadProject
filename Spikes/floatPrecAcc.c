//spike to test precision vs accuracy of doubles and floats

int main() {

float floatvar = 99.95;
double doublevar = 99.95;

printf("99.95 as float = %f\n", floatvar);   // 89.95 = 89.949997
printf("99.95 as double = %lf\n", doublevar); // 89.95 = 89.950000

return 0;
}
