#include <iostream>

using namespace std;

#define sayi "16.04.2020"
const string adsoy= " Resul Yarar";
int main()
{
    cout<<sayi<<adsoy<<endl;
    float sayi1 , sayi2 , result;
    string str1= "birinci";
    string str2= "ikinci";
    string str3= " sayiyi giriniz: ";
    string str4= "toplamanin";
    string str5= "cikarmanin";
    string str6= "carpmanin";
    string str7= "bolmenin";
    string str8= " sonucu: ";
    cout<<str1<<str3;
    cin>>sayi1;
    cout<<str2<<str3;
    cin>>sayi2;
    result=sayi1+sayi2;
    cout<<endl<<str4<<str8<<result<<endl<<endl;
    result=sayi1-sayi2;
    cout<<str5<<str8<<result<<endl<<endl;
    result=sayi1*sayi2;
    cout<<str6<<str8<<result<<endl<<endl;
    result=sayi1/sayi2;
    cout<<str7<<str8<<result<<endl<<endl;
    return 0;
}
