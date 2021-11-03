#pragma once

#include "./GeneralSecurityException.hpp"

class JString;
class JThrowable;

namespace java::security
{
	class KeyException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		KeyException(QJniObject obj);
		
		// Constructors
		KeyException();
		KeyException(JString arg0);
		KeyException(JThrowable arg0);
		KeyException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security

