#pragma once

#include "./GeneralSecurityException.hpp"

class JString;
class JThrowable;

namespace java::security
{
	class KeyStoreException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyStoreException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		KeyStoreException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
		
		// Constructors
		KeyStoreException();
		KeyStoreException(JString arg0);
		KeyStoreException(JThrowable arg0);
		KeyStoreException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security

