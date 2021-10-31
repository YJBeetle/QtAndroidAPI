#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace javax::crypto
{
	class IllegalBlockSizeException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalBlockSizeException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalBlockSizeException(QJniObject obj);
		
		// Constructors
		IllegalBlockSizeException();
		IllegalBlockSizeException(jstring arg0);
		
		// Methods
	};
} // namespace javax::crypto

