#pragma once

#include "../../../java/security/ProviderException.hpp"

class JString;
class JThrowable;

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
		BackendBusyException(jlong arg0, JString arg1);
		BackendBusyException(jlong arg0, JString arg1, JThrowable arg2);
		
		// Methods
		jlong getBackOffHintMillis() const;
	};
} // namespace android::security::keystore

