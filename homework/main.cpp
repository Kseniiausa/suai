//
//  main.cpp
//  homework
//
//  Created by Kseniia Gusarova on 05.03.2021.
//

#include <iostream>
#include <iomanip>
int main(int argc, const char * argv[]) {

/*
 7) Напишите программу пересчета величины временного интервала, заданного в минутах, в величину, выраженную в часах и минутах.
 */


    // insert code here...
    int minutes;
    std::cout << "Введите колличество минут"<< std::endl;
    std::cin >> minutes;
    int hours = minutes / 60;
    int minute = minutes - hours*60;
    std::cout << hours << " ч. "<< minute << " мин." << std::endl;
   
    /*
    7) Напишите программу пересчета величины временного интервала, заданного в минутах, в величину, выраженную в часах и минутах.
    */
    
    float price;
    
    std::cout << "Введите цену 1 кг яблок:" << std::endl;
    std::cin >> price;
    
    std::cout << "Вес \tСтоимость" << std::endl;
    std::cout << "(г) \t(руб.)" << std::endl;
    
    for (int i = 1; i<=10; i++) {
        std::cout << i*100 <<"\t\t" <<std::fixed<<std::setprecision(2) << i*price*0.10 << std::endl;
        
    }
    
    return 0;
}
