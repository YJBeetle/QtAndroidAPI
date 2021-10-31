#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../../../java/security/ProviderException.hpp"


namespace android::security::keystore
{
	class StrongBoxUnavailableException : public java::security::ProviderException
	{
	public:
		// Fields
		
		StrongBoxUnavailableException(QAndroidJniObject obj);
		// Constructors
		StrongBoxUnavailableException();
		StrongBoxUnavailableException(jstring arg0);
		StrongBoxUnavailableException(jthrowable arg0);
		StrongBoxUnavailableException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

