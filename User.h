/* 
 * File:   User.h
 * Author: yudongma
 *
 * Created on July 17, 2015, 11:38 PM
 */

#ifndef USER_H
#define	USER_H

#include <Wt/Dbo>
#include <Wt/WGlobal>

namespace dbo = Wt::Dbo;

class User;
typedef Wt::Auth::Dbo::AuthInfo<User> AuthInfo;

class User {
public:
  template<class Action>
  void persist(Action& a)
  {
  }
};



#endif	/* USER_H */

