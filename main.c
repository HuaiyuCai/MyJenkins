/** 
 * @file main.c
 * $Id: H_DynamicManageStaticArray.h 22 2019-12-26 08:55:08Z caihuaiyu123@163.com $
 * @brief manage dynamically for static array.
 * @details register once, use everywhere.
 * @mainpage project overview
 * $Author: caihuaiyu123@163.com $
 * $Revision: 22 $
 * $Date: 2019-12-26 16:55:08 +0800 (周四, 26 12月 2019) $
 * @note attention please
 */
#include "stdio.h"

#include "add.h"

/**
 * @brief main function
 * @details unique entry of program.
 * @param[in] argc the number of command arguments.
 * @param[in] argv pointers array for command arguments
 * @return indicate the result of program executor.
 *      @retval 0 successful
 *      @retval 1 failure
 * @note 
 * > This is a block quote.
 * - This is a simple sample.
 *  + should include `stdio.h` when using `printf()`
 * - \f$\alpha\f$
 *  + ....
 * - [svn](https://10.98.82.162:8080/!/#HASCO_SW_AlgorithmPlatform/view/head/Branches/CaiHuaiyu/Algorithm/BasicDataStructure/Master/Source)
 * ~~~{.py}
 * # A class
 * class Dummy；
 *      pass
 * ~~~
 */
int main(int argc, char const *argv[])
{
    printf("hello world, wonderful!!!, Oh, shit!!!!,success!\n");
    printf("add result:%d\n", add(1, 2));
    return 0;
}
