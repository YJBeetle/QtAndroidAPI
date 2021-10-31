#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../../../java/security/ProviderException.hpp"


namespace android::security::keystore
{
	class BackendBusyException : public java::security::ProviderException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BackendBusyException(const char *className, const char *sig, Ts...agv) : java::security::ProviderException(className, sig, std::forward<Ts>(agv)...) {}
		BackendBusyException(QAndroidJniObject obj);
		
		// Constructors
		BackendBusyException(jlong arg0);
		BackendBusyException(jlong arg0, jstring arg1);
		BackendBusyException(jlong arg0, jstring arg1, jthrowable arg2);
		
		// Methods
		jlong getBackOffHintMillis();
	};
} // namespace android::security::keystore

