#pragma once

#include "../../../java/security/InvalidKeyException.hpp"

class JString;
class JThrowable;

namespace android::security::keystore
{
	class KeyNotYetValidException : public java::security::InvalidKeyException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyNotYetValidException(const char *className, const char *sig, Ts...agv) : java::security::InvalidKeyException(className, sig, std::forward<Ts>(agv)...) {}
		KeyNotYetValidException(QAndroidJniObject obj);
		
		// Constructors
		KeyNotYetValidException();
		KeyNotYetValidException(JString arg0);
		KeyNotYetValidException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

