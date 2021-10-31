#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace java::security::spec
{
	class InvalidParameterSpecException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		InvalidParameterSpecException(QAndroidJniObject obj);
		// Constructors
		InvalidParameterSpecException();
		InvalidParameterSpecException(jstring arg0);
		
		// Methods
	};
} // namespace java::security::spec

