#include <iostream>
#include <string.h>
int main(void)
{
    const std::string ans ="ZONe";

    std::string S;
    int count = 0;
    std::cin >> S;

    for(int i=0;i<9;i++){
        if(S[i]==ans[0]){
            if(S[i+1]==ans[1]){
                if(S[i+2]==ans[2]){
                    if(S[i+3]==ans[3]){
                        count++;
                    }
                }
            }
        }
    }
    std::cout << count << std::endl;

    return 0;
}

