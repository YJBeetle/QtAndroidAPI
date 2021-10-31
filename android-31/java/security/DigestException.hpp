#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


namespace java::security
{
	class DigestException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DigestException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		DigestException(QJniObject obj);
		
		// Constructors
		DigestException();
		DigestException(jstring arg0);
		DigestException(jthrowable arg0);
		DigestException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security

