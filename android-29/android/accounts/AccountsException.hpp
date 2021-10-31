#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::accounts
{
	class AccountsException : public java::lang::Exception
	{
	public:
		// Fields
		
		AccountsException(QAndroidJniObject obj);
		// Constructors
		AccountsException();
		AccountsException(jstring arg0);
		AccountsException(jthrowable arg0);
		AccountsException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::accounts

