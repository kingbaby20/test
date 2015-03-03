/*
 * =====================================================================================
 *
 *       Filename:  test1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/02/2015 04:31:34 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  _tl__ (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
class A{
    public:
        A(){
            printf("A is create!\n");
        }
       void Destory(){
            delete this;
        }
    private:
        ~A(){
            printf("A is destory!\n");
        }

};

int main(void)
{
    A* pa = new A;
    pa->Destory();
 //   delete pa;
    return 0;
}
