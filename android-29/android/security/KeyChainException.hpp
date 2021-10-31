#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::security
{
	class KeyChainException : public java::lang::Exception
	{
	public:
		// Fields
		
		KeyChainException(QAndroidJniObject obj);
		// Constructors
		KeyChainException();
		KeyChainException(jstring arg0);
		KeyChainException(jthrowable arg0);
		KeyChainException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security

