#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {

    int getopt(int argc, char * const argv[], const char *optstring);
    int opt;

    if(argc == 1) {
        cout << "Мультипликативный калькулятор, который вычисляет умножение и деление чисел" << endl;
        cout << "Для опции -o есть два значения umn(умножение чисел в кол от 3 до 5) и del(деление первого числа на остальные - в кол от 3 до 5)" << endl;
        cout << "Пример ./имя файла -o umn 3 4 5 6 7" << endl;
        return 0;
    }
    double x, y=1;
    int chet, i;
    while((opt = getopt(argc, argv, "o:")) != -1) {
        switch(opt) {
            case 'o':
                string type = string(optarg);
                if (type == "umn"){
                    chet = 5;
                    i = 3;
                    while(chet>0){
                        x = atof(argv[i]);
                        y = y * x;
                        chet = chet - 1;
                        i = i + 1;
                    }
                    cout << "Результат умножения равен:" << y << endl;
                    break;
                }
                if (type == "del"){
                    chet = 4;
                    y = atof(argv[3]);
                    i = 4;
                    while(chet>0){
                        x = atof(argv[i]);
                        y = y / x;
                        chet = chet - 1;
                        i = i + 1;
                    }
                    cout << "Результат деления равен:" << y << endl;
                    break;
                }
            }
        }
        return 0;
    }
