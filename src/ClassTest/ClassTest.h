/**
 * @file ClassTest.h
 * @brief Class declaration for ClassTest class
 * 
 * Simple class test
 *  
 * @author Sergio Gasquez Arcos (sergio.gasquez@gmail.es)
 * @version 1.0 Initial release
 * @date 2020-12-13
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef __CLASS_TETS_H__
#define __CLASS_TETS_H__


#include <stdint.h>
#include <string>

/**
 * @class ClassTest
 * @brief Class example
 */
class ClassTest
{
public:
  /**
   * @brief Construct a new Class Test object
   * 
   * @param t_input 
   */
  ClassTest(uint8_t t_input);

private:
  int myNum;              /// Attribute (int variable)
  std::string myString;   /// Attribute (string variable)
};

#endif   // __CLASS_TETS_H__