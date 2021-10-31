#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


namespace java::security
{
	class UnrecoverableEntryException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		UnrecoverableEntryException(QAndroidJniObject obj);
		// Constructors
		UnrecoverableEntryException();
		UnrecoverableEntryException(jstring arg0);
		
		// Methods
	};
} // namespace java::security

