#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


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
		KeyException(jstring arg0);
		KeyException(jthrowable arg0);
		KeyException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security

