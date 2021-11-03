#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace javax::crypto
{
	class IllegalBlockSizeException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalBlockSizeException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalBlockSizeException(QAndroidJniObject obj);
		
		// Constructors
		IllegalBlockSizeException();
		IllegalBlockSizeException(jstring arg0);
		
		// Methods
	};
} // namespace javax::crypto

