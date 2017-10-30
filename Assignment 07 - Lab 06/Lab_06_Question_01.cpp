#include <iostream>
using namespace std;

int main()
{
    int i; //Base
    short int si;
    char c; //Base-i
    long l; //Base-i
    long long ll;
    long long int lli;
    float f; //Base
    double d; //Base-f
    long double ld;
    bool b; //Base
    int *p_i; //Base
    short int *p_si;
    char *p_c; //Base-i
    long *p_l; //Base-i
    long long *p_ll;
    long long int *p_lli;
    float *p_f; //Base
    double *p_d; //Base-f
    long double *p_ld;
    bool * p_b; //Base
    void *p_v; //Base
    //(int*) void* a;
    //void gh;
    //cout << i.typeof(a) << endl;
    ////cout << size_t(p_b) << endl;
    cout << "\nSizes of respective primitive datatypes, in bits: " << endl;
    cout << "'int': " << 8*sizeof(i) << endl; //Base
    /*
    cout << "'short int': " << 8*sizeof(si) << endl;
    cout << "'char': " << 8*sizeof(c) << endl; //Base-i
    cout << "'long': " << 8*sizeof(l) << endl; //Base-i
    cout << "'long long': " << 8*sizeof(ll) << endl;
    cout << "'long long int': " << 8*sizeof(lli) << endl;
    */
    cout << "'float': " << 8*sizeof(f) << endl; //Base
    /*
    cout << "'double': " << 8*sizeof(d) << endl; //Base-f
    cout << "'long double': " << 8*sizeof(ld) << endl;
    */
    cout << "'bool': " << 8*sizeof(b) << endl; //Base
    cout << "\nSizes of respective pointers-to-primitive-datatypes, in bits: " << endl;
    cout << "'int pointer': " << 8*sizeof(p_i) << endl;
    /*
    cout << "'short int pointer': " << 8*sizeof(p_si) << endl;
    cout << "'char pointer'; " << 8*sizeof(p_c) << endl;
    cout << "'long pointer'; " << 8*sizeof(p_l) << endl;
    cout << "'long long pointer'; " << 8*sizeof(p_ll) << endl;
    cout << "'long long int pointer'; " << 8*sizeof(p_lli) << endl;
    */
    cout << "'float pointer': " << 8*sizeof(p_f) << endl;
    /*
    cout << "'double pointer'; " << 8*sizeof(p_d) << endl;
    cout << "'long double pointer'; " << 8*sizeof(p_ld) << endl;
    */
    cout << "'bool pointer': " << 8*sizeof(p_b) << endl;
    cout << "'void pointer': " << 8*sizeof(p_v) << endl;
}
