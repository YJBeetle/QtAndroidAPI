#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"


namespace java::security
{
	class GeneralSecurityException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GeneralSecurityException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		GeneralSecurityException(QAndroidJniObject obj);
		
		// Constructors
		GeneralSecurityException();
		GeneralSecurityException(jstring arg0);
		GeneralSecurityException(jthrowable arg0);
		GeneralSecurityException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security

