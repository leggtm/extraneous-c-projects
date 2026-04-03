#include <iostream>
#include <string>
using namespace std;

class Patient {
    string fullname;
    string fulladdress;
    long pnumber;
    string nemergency;
    long pemergency;

    public:
    Patient(string fn, string fa, long p, string ne, long pe) : fullname(fn), fulladdress(fa), pnumber(p), nemergency(ne), pemergency(pe){};
    string getName(){return fullname;};
    void setName(string n){fullname = n;};
    string getAddy(){return fulladdress;};
    void setAddy(string a){fulladdress = a;};
    long getPnumber(){return pnumber;};
    void setPnumber(long p){pnumber = p;};
    string getNemergency(){return nemergency;};
    void setNemergency(string n){nemergency = n;};
    long getPemergency(){return pemergency;};
    void setPemergency(long p){pemergency = p;};
};

class Procedure {
    string name;
    string date;
    string pract;
    float charges;

    public:
    Procedure(string n, string d, string p, float c) : name(n), date(d), pract(p), charges(c){};
    string getName(){return name;};
    void setName(string n){name = n;};
    string getDate(){return date;};
    void setDate(string d){date = d;};
    string getPract(){return pract;};
    void setPract(string p){pract = p;};
    float getCharge(){return charges;};
    void setCharge(float c){charges = c;};
};

int main(){

    Patient me("Chiara Cathryne Akorfa Adjoh-Davoh", "2112 8th St NW, Washington, DC, 20001", 4435652579, "Gifty Quartey-Smith", 4435316236);
    Procedure pro1("Physical Exam", "03/03/2026", "Dr. Irvine", 250.0);
    Procedure pro2("X-ray", "03/03/2026", "Dr. Jamison", 500.0);
    Procedure pro3("Blood test", "03/03/2026", "Dr. Smith", 200.00);

    Procedure procedures[3] = {pro1, pro2, pro3};

    cout << "Patient Info:\nFull Name: " << me.getName() << "\nAddress: " << me.getAddy() << "\nPhone Number: "
    << me.getPnumber() << "\nEmergency Contact: " << me.getNemergency() << "\nEmergency Contact Phone Number: "
    << me.getPemergency() << endl << endl << "Procedures:\n";

    int count = 1;
    for (Procedure p : procedures){
        cout << "Procedure #" << count << ":\nProcedure Name: " << p.getName() << "\nDate: " << p.getDate() << "\nPractitioner: "
        << p.getPract() << "\nCharge: $" << p.getCharge() << endl << endl;
        count++;
    }

    cout << "Total Charges: $" << pro1.getCharge() + pro2.getCharge() + pro3.getCharge();

    return 0;
}