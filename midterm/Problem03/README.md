# Problem03
Following Code has several semantic errors. 
```
#include <iostream>

int main()
{   
    int lines = 7;
    
    for(int i = 0;i < lines;i++)
    {
        for(int blank = 0;blank < lines + i;blank++)
        {
            std::cout<< " ";
        }
        for(int k = 0;k <= 2*i;k++)
        {   
            if(k%2*i == i){
                if(i == 0)
                {
                    std::cout<< "*";
                }
                else{
                    std::cout<<i;
                }
            }
            else
            {
            std::cout<< "*";
            }
        }
        std::cout<<std::endl;
    }
}
```
You should correct the semantic errors to work properly. 
You may refer the output result of the program using output program.
You may execute the program as follows.
```
~/workspace/midterm/Problem03 (master) $./output
```
