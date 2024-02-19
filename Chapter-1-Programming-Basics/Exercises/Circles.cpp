#include <iostream>

using namespace std;

int main (){
    //We need the user to enter the radius and then the computer will calulate the area and circumference based on the user input...
    double radius;
    double area;
    double circumference;
    double pie = 3.1416;

    //Message to display to the user to tell what they need to add.
    cout << ("---------------------Area and cirecumference calculator------------------") << endl;
    cout << "Please enter the radius of the circle: " << endl;
    //endl adds a new line.
    cin >> radius;
    //cin will ask for the user input and save it to the radius variable
    
    //Now here comes the calculations.
    //As the documentation says, to work out the area do this: A = π r2
    area = pie * radius *radius;
    //Lets now work out the cirecumference.
    circumference = 2 * pie * radius;
    cout << ("Your radius is: ") << radius << endl;
    cout << ("Your area is: ") << area << endl;
    cout << ("Your cirecumference is: ") << circumference << endl;
    //Error when you dont put an vaild input.
    if (cin.fail()) cout <<("Error: - Wrong input!!!")<< endl;

 }
//Testing purpose: Used this site. 
/*https://www.google.com/search?q=area+of+a+circle+and+circumference+&sca_esv=571547253&sxsrf=AM9HkKmwNOdl15_Y2C_HkN9YaXMpjQxtqw%3A1696678805744&source=hp&ei=lUMhZYPUKsWw8gKg64KYAg&iflsig=AO6bgOgAAAAAZSFRpaCMhEz1D8WMWf1MbTOMB_AcDeip&ved=0ahUKEwjD8ouM7eOBAxVFmFwKHaC1ACMQ4dUDCAs&uact=5&oq=area+of+a+circle+and+circumference+&gs_lp=Egdnd3Mtd2l6IiNhcmVhIG9mIGEgY2lyY2xlIGFuZCBjaXJjdW1mZXJlbmNlIDIFEAAYgAQyBRAAGIAEMgYQABgWGB4yBhAAGBYYHjIGEAAYFhgeMgYQABgWGB4yBhAAGBYYHjIGEAAYFhgeMgYQABgWGB4yBhAAGBYYHkjvTFAAWLhGcAh4AJABAJgBuAGgAcsVqgEEMjMuN7gBA8gBAPgBAcICBBAjGCfCAggQABiKBRiRAsICBxAAGIoFGEPCAhEQLhiABBixAxiDARjHARjRA8ICCxAAGIAEGLEDGIMBwgILEC4YigUYsQMYgwHCAgcQIxiKBRgnwgIOEAAYigUYsQMYgwEYkQLCAgUQLhiABMICCBAAGIAEGLEDwgIHEAAYgAQYCsICChAAGIAEGLEDGArCAg0QABiABBixAxiDARgKwgIHEAAYDRiABMICCBAAGBYYHhgPwgIIEAAYHhgNGA_CAgYQABgeGA3CAgcQIRigARgKwgIIECEYFhgeGB3CAggQABiKBRiGAw&sclient=gws-wiz*/
