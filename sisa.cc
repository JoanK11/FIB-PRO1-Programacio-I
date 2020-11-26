#include <iostream>
#include <vector>
using namespace std;

int bin_int(string x)
{
    if (x == "001")
        return 1;
    else if (x == "010")
        return 2;
    else if (x == "011")
        return 3;
    else if (x == "100")
        return 4;
    else if (x == "101")
        return 5;
    else if (x == "110")
        return 6;
    else if (x == "111")
        return 7;
    return 0;
}
int hexa_to_int(char n)
{
    if (n >= '0' and n <= '9')
        return int(n - '0');
    else
        return int(15 - 'F' + n);
}
void to_vector(vector<char>& vector, int n, int i)
{
    if (n == 1)
        vector[i - 3] = '1';
    else if (n == 2)
        vector[i - 2] = '1';
    else if (n == 3)
        vector[i - 2] = '1', vector[i - 3] = '1';
    else if (n == 4)
        vector[i - 1] = '1';
    else if (n == 5)
        vector[i - 1] = '1', vector[i - 3] = '1';
    else if (n == 6)
        vector[i - 1] = '1', vector[i - 2] = '1';
    else if (n == 7)
        vector[i - 1] = '1', vector[i - 2] = '1', vector[i - 3] = '1';
    else if (n == 8)
        vector[i] = '1';
    else if (n == 9)
        vector[i] = '1', vector[i - 3] = '1';
    else if (n == 10)
        vector[i] = '1', vector[i - 2] = '1';
    else if (n == 11)
        vector[i] = '1', vector[i - 2] = '1', vector[i - 3] = '1';
    else if (n == 12)
        vector[i] = '1', vector[i - 1] = '1';
    else if (n == 13)
        vector[i] = '1', vector[i - 1] = '1', vector[i - 3] = '1';
    else if (n == 14)
        vector[i] = '1', vector[i - 1] = '1', vector[i - 2] = '1';
    else if (n == 15)
        vector[i] = '1', vector[i - 1] = '1', vector[i - 2] = '1', vector[i - 3] = '1';
}
void inicialitzar_vector(vector<char>& vector)
{
    for (int i = 15; i >= 0; --i)
        vector[i] = '0';
}

void escollir_alu(string f)
{
    if (f == "000")
        cout << "AND ";
    else if (f == "001")
        cout << "OR ";
    else if (f == "010")
        cout << "XOR ";
    else if (f == "011")
        cout << "NOT ";
    else if (f == "100")
        cout << "ADD ";
    else if (f == "101")
        cout << "SUB ";
    else if (f == "110")
        cout << "SHA ";
    else if (f == "111")
        cout << "SHL ";
}
void escollir_cmp(string f)
{
    if (f == "000")
        cout << "CMPLT ";
    else if (f == "001")
        cout << "CMPLE ";
    else if (f == "011")
        cout << "CMPEQ ";
    else if (f == "100")
        cout << "CMPLTU ";
    else if (f == "101")
        cout << "CMPLEU ";
}
void escollir_load_store(string f)
{
    if (f == "0011")
        cout << "LD ";
    else if (f == "0100")
        cout << "ST ";
    else if (f == "0101")
        cout << "LDB ";
    else if (f == "0110")
        cout << "STB ";
}

int main()
{
    cout << "Primera versió del programa. JKnight11\n";
    char a, b, c, d;
    while (cin >> a >> b >> c >> d) {

        // Passem hexa a decimal
        int primer = hexa_to_int(a), segon = hexa_to_int(b);
        int tercer = hexa_to_int(c), quart = hexa_to_int(d);
        cout << primer << " " << segon << " " << tercer << " " << quart << endl;

        //Passem el vector a binari
        vector<char> vector(16);
        inicialitzar_vector(vector);
        to_vector(vector, primer, 15);
        to_vector(vector, segon, 11);
        to_vector(vector, tercer, 7);
        to_vector(vector, quart, 3);

        //Primers quatre digits i Ra
        string first4 = "";
        for (int i = 15; i >= 12; --i)
            first4 += vector[i];
        string a_sisa = "";
        for (int i = 11; i >= 9; --i)
            a_sisa += vector[i];

        //Primera classificació ALU
        if (first4 == "0000") {
            string b_sisa = "", d_sisa = "", f_sisa = "";
            for (int i = 8; i >= 6; --i)
                b_sisa += vector[i];
            for (int i = 5; i >= 3; --i)
                d_sisa += vector[i];
            for (int i = 2; i >= 0; --i)
                f_sisa += vector[i];
            escollir_alu(f_sisa);
            cout << 'R' << bin_int(d_sisa) << ", ";
            cout << 'R' << bin_int(a_sisa) << ", ";
            cout << 'R' << bin_int(b_sisa) << endl;
        }

        //Segona classificació CMP
        else if (first4 == "0001") {
            string b_sisa = "", d_sisa = "", f_sisa = "";
            for (int i = 8; i >= 6; --i)
                b_sisa += vector[i];
            for (int i = 5; i >= 3; --i)
                d_sisa += vector[i];
            for (int i = 2; i >= 0; --i)
                f_sisa += vector[i];
            escollir_cmp(f_sisa);
            cout << 'R' << bin_int(d_sisa) << ", ";
            cout << 'R' << bin_int(a_sisa) << ", ";
            cout << 'R' << bin_int(b_sisa) << endl;
        }

        //Tercera classificació ADDI
        else if (first4 == "0010") {
            cout << "ADDI ";
            string d_sisa = "", n_sisa = "";
            for (int i = 8; i >= 6; --i)
                d_sisa += vector[i];
            for (int i = 5; i >= 0; --i)
                n_sisa += vector[i];
            cout << 'R' << bin_int(d_sisa) << ", ";
            cout << 'R' << bin_int(a_sisa) << ", ";
            cout << n_sisa << endl;
        }

        // Quarta classificació Load Store
        else if (first4 == "0011" or first4 == "0100" or first4 == "0101" or first4 == "0110") {

            escollir_load_store(first4);
            //Load
            if (first4 == "0011" or first4 == "0101") {
            }
            // Store
            else if (first4 == "0100" or first4 == "0110") {
            }
        }

        //Cinquena classificació BZ/BNZ
        else if (first4 == "1000") {
            if (vector[8] == '0')
                cout << "BZ ";
            else if (vector[8] == '1')
                cout << "BNZ ";
            cout << 'R' << bin_int(a_sisa) << ", ";
            cout << "0x";
            if (vector[7] == '1')
                cout << "FF";
            else if (vector[7] == '0')
                cout << "00";
            cout << c << d << endl;
        }

        //Sisena classificació MOVI/MOVHI
        else if (first4 == "1001") {
            if (vector[8] == '0') {
                cout << "MOVI ";
                cout << 'R' << bin_int(a_sisa) << ", ";
                cout << "0x";
                cout << c << d << endl;
            } else if (vector[8] == '1') {
                cout << "MOVHI ";
                cout << 'R' << bin_int(a_sisa) << ", ";
                cout << "0x";
                if (vector[7] == '1')
                    cout << "FF";
                else if (vector[7] == '0')
                    cout << "00";
                cout << c << d << endl;
            }
        }

        //Setena classificació IN/OUT
        else if (first4 == "1010") {
            if (vector[8] == '0') {
                cout << "IN ";
                cout << 'R' << bin_int(a_sisa) << ", ";
                cout << "0x";
                cout << c << d << endl;
            } else if (vector[8] == '1') {
                cout << "OUT ";
                cout << "0x";
                cout << c << d << ", ";
                cout << 'R' << bin_int(a_sisa) << endl;
            }
        }
    }
}
