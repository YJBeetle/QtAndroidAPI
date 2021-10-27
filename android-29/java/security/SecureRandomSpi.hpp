#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class SecureRandomSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		SecureRandomSpi(QAndroidJniObject obj);
		// Constructors
		SecureRandomSpi();
		
		// Methods
		jstring toString();
	};
} // namespace java::security

