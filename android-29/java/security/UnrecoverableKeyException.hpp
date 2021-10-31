#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"
#include "./UnrecoverableEntryException.hpp"


namespace java::security
{
	class UnrecoverableKeyException : public java::security::UnrecoverableEntryException
	{
	public:
		// Fields
		
		UnrecoverableKeyException(QAndroidJniObject obj);
		// Constructors
		UnrecoverableKeyException();
		UnrecoverableKeyException(jstring arg0);
		
		// Methods
	};
} // namespace java::security

