//Are private functions really private? Well...
//Checkout video at: https://youtu.be/TVKsaq7Bohs
#include <bits/stdc++.h>

using namespace std;

class SocialWebsite{
private:
protected:
public:
    virtual void secret() {} ;
 //    void secret() {} ;
};

class Facebook: public SocialWebsite{
private:
    string fbPassword;
    
    void secret(){
        cout << "The Facebook password is: " << fbPassword << endl;
       // cout << "Its risky, but its fine to print here as it's a private function\n";
    }
public:
    Facebook(string pwd) {
        fbPassword = pwd;
        cout << "Constructor invoked" << endl;
    }
};

int main()
{
    Facebook f("ank2it");
 //   f.secret();
    SocialWebsite *ptr = &f;
    
    ptr->secret();
    
    return 0;
}