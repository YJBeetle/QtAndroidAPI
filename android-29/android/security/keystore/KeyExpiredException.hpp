#pragma once

#include "../../../java/security/InvalidKeyException.hpp"

class JString;
class JThrowable;

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
		KeyExpiredException(JString arg0);
		KeyExpiredException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

