#pragma once

#include "../../../java/security/ProviderException.def.hpp"

class JString;
class JThrowable;

namespace android::security::keystore
{
	class StrongBoxUnavailableException : public java::security::ProviderException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StrongBoxUnavailableException(const char *className, const char *sig, Ts...agv) : java::security::ProviderException(className, sig, std::forward<Ts>(agv)...) {}
		StrongBoxUnavailableException(QJniObject obj) : java::security::ProviderException(obj) {}
		
		// Constructors
		StrongBoxUnavailableException();
		StrongBoxUnavailableException(JString arg0);
		StrongBoxUnavailableException(JThrowable arg0);
		StrongBoxUnavailableException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

