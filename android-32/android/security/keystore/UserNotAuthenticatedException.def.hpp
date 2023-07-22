#pragma once

#include "../../../java/security/InvalidKeyException.def.hpp"

class JString;
class JThrowable;

namespace android::security::keystore
{
	class UserNotAuthenticatedException : public java::security::InvalidKeyException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UserNotAuthenticatedException(const char *className, const char *sig, Ts...agv) : java::security::InvalidKeyException(className, sig, std::forward<Ts>(agv)...) {}
		UserNotAuthenticatedException(QAndroidJniObject obj) : java::security::InvalidKeyException(obj) {}
		
		// Constructors
		UserNotAuthenticatedException();
		UserNotAuthenticatedException(JString arg0);
		UserNotAuthenticatedException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

