#pragma once

#include "./GeneralSecurityException.hpp"

class JString;
class JThrowable;

namespace java::security
{
	class DigestException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DigestException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		DigestException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
		
		// Constructors
		DigestException();
		DigestException(JString arg0);
		DigestException(JThrowable arg0);
		DigestException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security

