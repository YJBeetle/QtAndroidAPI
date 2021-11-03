#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./IdentityCredentialException.hpp"


namespace android::security::identity
{
	class DocTypeNotSupportedException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DocTypeNotSupportedException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		DocTypeNotSupportedException(QAndroidJniObject obj);
		
		// Constructors
		DocTypeNotSupportedException(jstring arg0);
		DocTypeNotSupportedException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

