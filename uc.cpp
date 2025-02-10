#include <iostream>
using namespace std;
class length{
    int k;
    public:
    float f,m,cm;
    int meter(){
        cout<<"Enter the value in meter:\n";
        cin>>m;
        cout<<"\nIn which unit you want to convert?";
        cout<<"\nPress (1) to convert to centimeter";
        cout<<"\nPress (2) to convert to foot\n";
        cin>>k;
        if(k==1){
            cm=(100*m);
            cout<<"\nValue in centimeter is:\n"<<cm;
        }
        else if(k==2){
            f=(3.281*m);
            cout<<"\nValue in foot is:\n"<<f;
        }
        return 0;
    }
    int centimeter(){
        cout<<"Enter the value in centimeter:\n";
        cin>>cm;
        cout<<"\nIn which unit you want to convert?";
        cout<<"\nPress (1) to convert to meter";
        cout<<"\nPress (2) to convert to foot\n";
        cin>>k;
        if(k==1){
            m=(0.01*cm);
            cout<<"\nValue in meter is:\n"<<m;
        }
        else if(k==2){
            f=(cm/30.48);
            cout<<"\nValue in foot is:\n"<<f;
        }
        return 0;
    }
    int foot(){
        cout<<"Enter the value in foot:\n";
        cin>>f;
        cout<<"\nIn which unit you want to convert?";
        cout<<"\nPress (1) to convert to meter";
        cout<<"\nPress (2) to convert to centimeter\n";
        cin>>k;
        if(k==1){
            m=(0.3048*f);
            cout<<"\nValue in meter is:\n"<<m;
        }
        else if(k==2){
            cm=(30.48*f);
            cout<<"\nValue in centimeter is:\n"<<cm;
        }
        return 0;

    }
    int selection_length(){
        again:
        cout<<"\nSelect the unit";
        cout<<"\nPress (1) for Meter\nPress (2) for Centimeter\nPress (3) for Foot\nPress (0) for Main Menu\n";
        cin>>k;
        if(k==1){
            meter();
        }
        else if(k==2){
        centimeter();
        }
        else if(k==3){
            foot();
        }
        else if(k==0){
        goto exit;
        }
        else{
            cout<<"\nInvalid input !,Please enter a valid input";
            goto again;
        }
        exit:
        return 0;
    }
};
class mass{
    int k;
    public:
    float kg,g,p;
    int kilo(){
       cout<<"Enter the value in Kilogram:\n";
        cin>>kg;
        cout<<"\nIn which unit you want to convert?";
        cout<<"\nPress (1) to convert to Gram";
        cout<<"\nPress (2) to convert to Pound\n";
        cin>>k;
        if(k==1){
            g=(1000*kg);
            cout<<"\nValue in Gram is:\n"<<g;
        }
        else if(k==2){
            p=(2.20462*kg);
            cout<<"\nValue in Pound is:\n"<<p;
        }
        return 0;  
    }
    int gram(){
       cout<<"Enter the value in gram:\n";
        cin>>g;
        cout<<"\nIn which unit you want to convert?";
        cout<<"\nPress (1) to convert to Kilogram";
        cout<<"\nPress (2) to convert to Pound\n";
        cin>>k;
        if(k==1){
                    kg=(0.001*g);
            cout<<"\nValue in Kilogram is:\n"<<kg;
        }
        else if(k==2){
            p= ((float)0.00220462*g);
            cout<<"\nValue in Pound is:\n"<<p;
        }
        return 0;
    }  
    int pound(){
       cout<<"Enter the value in Pound:\n";
        cin>>p;
        cout<<"\nIn which unit you want to convert?";
        cout<<"\nPress (1) to convert to Kilogram";
        cout<<"\nPress (2) to convert to Gram\n";
        cin>>k;
        if(k==1){
            kg=(0.453592*p);
            cout<<"\nValue in Kilogram is:\n"<<kg;
        }
        else if(k==2){
            g=(453.592*p);
            cout<<"\nValue in Gram is:\n"<<g;
        }
        return 0;  
    }
    int selection_mass(){
        again:
        cout<<"\nSelect the unit";
        cout<<"\nPress (1) for Kilogram\nPress (2) for Gram\nPress (3) for Pound\nPress (0) for Main Menu\n";
        cin>>k;
        if(k==1){
            kilo();
        }
        else if(k==2){
        gram();
        }
        else if(k==3){
            pound();
        }
        else if(k==0){
        goto exit;
        }
        else{
            cout<<"\nInvalid input !,Please enter a valid input";
            goto again;
        }
        exit:
        return 0;
    }
    
    

};
class temperature{
    int k;
    public:
    float x,c,f;
    int kelvin(){
        cout<<"Enter the value in Kelvin:\n";
        cin>>x;
        cout<<"\nIn which unit you want to convert?";
        cout<<"\nPress (1) to convert to Celcius";
        cout<<"\nPress (2) to convert to Fahrenheit\n";
        cin>>k;
        if(k==1){
            c=(x-273.15);
            cout<<"\nValue Celcius is:\n"<<c;
        }
        else if(k==2){
            f=1.8*(x-273.15)+32;
            cout<<"\nValue in Fahrenheit is:\n"<<f;
        }
        return 0;  

    }
    int celcius(){
        cout<<"Enter the value in Celcius:\n";
        cin>>c;
        cout<<"\nIn which unit you want to convert?";
        cout<<"\nPress (1) to convert to Kelvin";
        cout<<"\nPress (2) to convert to Fahrenheit\n";
        cin>>k;
        if(k==1){
            x=(c+273.15);
            cout<<"\nValue Kelvin is:\n"<<x;
        }
        else if(k==2){
            f=(c*9/5)+32;
            cout<<"\nValue in Fahrenheit is:\n"<<f;
        }
        return 0;  


    }
    int fahrenheit(){
        cout<<"Enter the value in Fahrenheit:\n";
        cin>>f;
        cout<<"\nIn which unit you want to convert?";
        cout<<"\nPress (1) to convert to Kelvin";
        cout<<"\nPress (2) to convert to Celcius\n";
        cin>>k;
        if(k==1){
            x=((f-32)/(1.8))+273.15;
            cout<<"\nValue in Kelvin is:\n"<<x;
        }
        else if(k==2){
            c=((0.5555)*(f-32));
            cout<<"\nValue in Celcius is:\n"<<c;
        }
        return 0;

    }
    int selection_temperature(){
         again:
        cout<<"\nSelect the unit";
        cout<<"\nPress (1) for Celcius\nPress (2) for Kelvin\nPress (3) for Fahrenheit\nPress (0) for Main Menu\n";
        cin>>k;
        if(k==1){
            celcius();
        }
        else if(k==2){
        kelvin();
        }
        else if(k==3){
            fahrenheit();
        }
        else if(k==0){
        goto exit;
        }
        else{
            cout<<"\nInvalid input !,Please enter a valid input";
            goto again;
        }
        exit:
        return 0;

    }
    


};
class volume{
    int k;
    public:
    float m3,lit,cm3;
    int meter3(){
        cout<<"Enter the value in Cubicmeter:\n";
        cin>>m3;
        cout<<"\nIn which unit you want to convert?";
        cout<<"\nPress (1) to convert to Litre";
        cout<<"\nPress (2) to convert to Cenimetercube\n";
        cin>>k;
        if(k==1){
            lit=1000*m3;
            cout<<"\nValue in Litre is:\n"<<lit;
        }
        else if(k==2){
            cm3=m3*1000000;
            cout<<"\nValue in Centimetercube is:\n"<<cm3;
        }
        return 0;
    }
    int centimeter3(){
        cout<<"Enter the value in Centimetercube:\n";
        cin>>cm3;
        cout<<"\nIn which unit you want to convert?";
        cout<<"\nPress (1) to convert to Litre";
        cout<<"\nPress (2) to convert to Cubicmeter\n";
        cin>>k;
        if(k==1){
            lit=(cm3/1000);
            cout<<"\nValue in Litre is:\n"<<lit;
        }
        else if(k==2){
            m3=(cm3/1000000);
            cout<<"\nValue in Cubicmeter is is:\n"<<m3;
        }
        return 0;

    }
    int litre(){
         cout<<"Enter the value in Litre:\n";
        cin>>lit;
        cout<<"\nIn which unit you want to convert?";
        cout<<"\nPress (1) to convert to Centimetercube";
        cout<<"\nPress (2) to convert to Cubicmeter\n";
        cin>>k;
        if(k==1){
            cm3=lit*1000;
            cout<<"\nValue in Centimetercube is:\n"<<cm3;
        }
        else if(k==2){
            m3=0.001*lit;
            cout<<"\nValue in Cubicmeter is is:\n"<<m3;
        }
        return 0;
    }
    int selection_volume(){
          again:
        cout<<"\nSelect the unit";
        cout<<"\nPress (1) for Cubicmeter\nPress (2) for Centimetercube\nPress (3) for Litre\nPress (0) for Main Menu\n";
        cin>>k;
        if(k==1){
            meter3();
        }
        else if(k==2){
        centimeter3();
        }
        else if(k==3){
            litre();
        }
        else if(k==0){
        goto exit;
        }
        else{
            cout<<"\nInvalid input !,Please enter a valid input";
            goto again;
        }
        exit:
        return 0;

    }
};
int main(){
    length l1;
    mass m1;
    temperature t1;
    volume v1;
    

    start:
    int select;
    cout<<"\n********************************************||UNIT CONVERTER||*****************************************************";
    cout<<"\nMain Menu";
    cout<<"\nChoose The Physical Quantity:";
    cout<<"\nSelect (1) for Length\nSelect (2) for Mass\nSelect (3) for Temperature\nSelect (4) for Volume\nSelect (0) for Exit\n";
    cin>>select;
    if(select==1){
        l1.selection_length();
        
      
        cout<<"\n******************************************************************************";
        goto start;
    }
    else if(select==2){
        m1.selection_mass();
        
        
        cout<<"\n*****************************************************************************";
        goto start;

    }
    else if(select==3){
        t1.selection_temperature();

        
        cout<<"\n******************************************************************************";
        goto start;

    }
    else if(select==4){
        v1.selection_volume();

        cout<<"\n******************************************************************************";
        goto start;


    }
    else if(select==0){
        
        goto exit;
    }
    else{
        cout<<"\nInvalid input !,Please enter a valid input";
            goto start;
    }
    exit:
    return 0;
    


}