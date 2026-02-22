#include <iostream>
#include <cstring>

char & find(char a[], char c, bool& success){
    static char notFound = '\0';
    for(size_t i=0; i<std::strlen(a); i++){
        if(a[i]== c){
            success = true;
            return a[i];
        }
    }
    success = false;
    return notFound;
}
int main(){
    char s[] = "Mike";
    bool b = false;
    char& loc = find(s,'M',b);
    if(b == false){
        std::cout << "can't find " << std::endl;
        return 0;
    }else{
        loc = 'm';
        std::cout << s << std::endl;
    }
    
}