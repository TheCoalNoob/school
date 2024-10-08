#include <iostream>

int main() {
    std::string studentid, res;
    char gscale;
    char ans[] = "TFFTFFTTTTFFTFTFTFTT";
    int pts, i, s;

    for (i = 0; i < 999; i++) {
        pts = 0;
        std::cout << "#" << i + 1 << " STUDENT ID: ";
        std::cin >> studentid;
        std::cout << "ANSWER: ";
        std::cin >> res;

        for(s=0;s<=20;s++){
        if(res[s]==ans[s]){
            pts+=2;
        } else if (res[s]!='T'||res[s]!='F') {
            pts+=0;
        } else {
            pts--;
        }
        }

        if (pts >= 36 && pts <= 40) {
            gscale = 'A';
        } else if (pts >= 32 && pts <= 35) {
            gscale = 'B';
        } else if (pts >= 28 && pts <= 31) {
            gscale = 'C';
        } else if (pts >= 24 && pts <= 27) {
            gscale = 'D';
        } else if (pts >= 20 && pts <= 23) {
            gscale = 'E';
        } else if (pts >= 0 && pts <= 19) {
            gscale = 'F';
        }

        std::cout << "\n\tSTUDENT ID: " << studentid;
        std::cout << "\n\tTEST SCORE: " << pts;
        std::cout << "\n\tTEST GRADE: " << gscale << "\n\n";
    }
    return 0;
}