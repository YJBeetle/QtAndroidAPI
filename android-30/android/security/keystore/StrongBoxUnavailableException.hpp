#pragma once

#include "../../../java/security/ProviderException.hpp"

class JString;
class JThrowable;

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
		StrongBoxUnavailableException(JString arg0);
		StrongBoxUnavailableException(JThrowable arg0);
		StrongBoxUnavailableException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

