#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/security/GeneralSecurityException.hpp"
#include "../../../java/security/KeyException.hpp"
#include "../../../java/security/InvalidKeyException.hpp"


namespace android::security::keystore
{
	class KeyExpiredException : public java::security::InvalidKeyException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyExpiredException(const char *className, const char *sig, Ts...agv) : java::security::InvalidKeyException(className, sig, std::forward<Ts>(agv)...) {}
		KeyExpiredException(QJniObject obj);
		
		// Constructors
		KeyExpiredException();
		KeyExpiredException(jstring arg0);
		KeyExpiredException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

