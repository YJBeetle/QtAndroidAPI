#pragma once

#include "../../../java/security/ProviderException.def.hpp"

class JString;
class JThrowable;

namespace android::security::keystore
{
	class BackendBusyException : public java::security::ProviderException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BackendBusyException(const char *className, const char *sig, Ts...agv) : java::security::ProviderException(className, sig, std::forward<Ts>(agv)...) {}
		BackendBusyException(QJniObject obj) : java::security::ProviderException(obj) {}
		
		// Constructors
		BackendBusyException(jlong arg0);
		BackendBusyException(jlong arg0, JString arg1);
		BackendBusyException(jlong arg0, JString arg1, JThrowable arg2);
		
		// Methods
		jlong getBackOffHintMillis() const;
	};
} // namespace android::security::keystore

