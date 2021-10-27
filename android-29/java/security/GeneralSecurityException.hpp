#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace java::security
{
	class GeneralSecurityException : public java::lang::Exception
	{
	public:
		// Fields
		
		GeneralSecurityException(QAndroidJniObject obj);
		// Constructors
		GeneralSecurityException();
		GeneralSecurityException(jstring &arg0);
		GeneralSecurityException(const QString &arg0);
		GeneralSecurityException(jthrowable &arg0);
		GeneralSecurityException(jstring &arg0, jthrowable &arg1);
		GeneralSecurityException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace java::security

