#include<iostream>

int  num;
void menu(){
    std::cout<<"1.Addition"<<std::endl;
    std::cout<<"2.Subtraction"<<std::endl;
    std::cout<<"3.MUltiplication"<<std::endl;
    std::cout<<"4.Division"<<std::endl;
    std::cout<<"Please choose the option you want :";
    std::cin>>num;

}




int main(){
    int column,row;
   
    
    std::cout<<"How many column do you want:";
    std::cin>>column;
    std::cout<<"How many row do you want:";
    std::cin>>row;
    int arrays[column][row],arrays2[column][row];
    int result[column][row];
    for(int i =   1 ; i < column+1; i++){
        for(int j = 1; j <row+1 ; j++){
            std::cout<<"Key in the number ["<< i <<"][ "<<j<<"]: ";
            std::cin>>arrays[i][j];
        }
    }
    for(int i =   1 ; i < column+1; i++){
        for(int j = 1; j <row+1 ; j++){
            std::cout<<arrays[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    for(int i =   1 ; i < column+1; i++){
        for(int j = 1; j <row+1 ; j++){
            std::cout<<"Key in the number ["<< i <<"][ "<<j<<"]: ";
            std::cin>>arrays2[i][j];
        }
    }
    for(int i =   1 ; i < column+1; i++){
        for(int j = 1; j <row+1 ; j++){
            std::cout<<arrays2[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    menu();
    if(num==1){
            for(int i =   1 ; i < column+1; i++){
                for(int j = 1; j <row+1 ; j++){
                    result[i][j]=arrays[i][j]+arrays2[i][j];
                }
            }
        for(int i =   1 ; i < column+1; i++){
            for(int j = 1; j <row+1 ; j++){
                std::cout<<result[i][j];
                std::cout<<" ";
            }
            std::cout<<std::endl;
        }
    }
    else if(num==2){
        for(int i =   1 ; i < column+1; i++){
        for(int j = 1; j <row+1 ; j++){
            result[i][j]=arrays[i][j]-arrays2[i][j];
        }
    }
    for(int i =   1 ; i < column+1; i++){
        for(int j = 1; j <row+1 ; j++){
            std::cout<<result[i][j];
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
    }
    else if(num==3){
        for(int i =   1 ; i < column+1; i++){
        for(int j = 1; j <row+1 ; j++){
            result[i][j]=arrays[i][j]*arrays2[i][j];
        }
    }
    for(int i =   1 ; i < column+1; i++){
        for(int j = 1; j <row+1 ; j++){
            std::cout<<result[i][j];
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
    }
    else if(num==4){
        for(int i =   1 ; i < column+1; i++){
        for(int j = 1; j <row+1 ; j++){
            result[i][j]=arrays[i][j]/arrays2[i][j];
        }
    }
    for(int i =   1 ; i < column+1; i++){
        for(int j = 1; j <row+1 ; j++){
            std::cout<<result[i][j];
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
    }
    
    
}