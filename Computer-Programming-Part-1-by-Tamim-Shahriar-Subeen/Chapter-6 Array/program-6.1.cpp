#include <iostream>;

using namespace std;

int main (){

    int ft_marks, st_marks , final_marks;
    double total_marks;

    ft_marks = 80;
    st_marks = 74;
    final_marks = 97;
                // ft_marks * 0.25 + st_marks * 0.25  + final_marks * 0.50
    total_marks = ft_marks / 4.0 + st_marks / 4.0 + final_marks / 2.0;

    cout << total_marks ;

    return 0;

}
