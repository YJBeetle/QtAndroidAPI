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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StrongBoxUnavailableException(const char *className, const char *sig, Ts...agv) : java::security::ProviderException(className, sig, std::forward<Ts>(agv)...) {}
		StrongBoxUnavailableException(QAndroidJniObject obj);
		
		// Constructors
		StrongBoxUnavailableException();
		StrongBoxUnavailableException(jstring arg0);
		StrongBoxUnavailableException(jthrowable arg0);
		StrongBoxUnavailableException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

