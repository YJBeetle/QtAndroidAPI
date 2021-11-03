#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace javax::crypto
{
	class NoSuchPaddingException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoSuchPaddingException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchPaddingException(QAndroidJniObject obj);
		
		// Constructors
		NoSuchPaddingException();
		NoSuchPaddingException(jstring arg0);
		
		// Methods
	};
} // namespace javax::crypto

