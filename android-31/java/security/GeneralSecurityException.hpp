#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace java::security
{
	class GeneralSecurityException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GeneralSecurityException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		GeneralSecurityException(QJniObject obj);
		
		// Constructors
		GeneralSecurityException();
		GeneralSecurityException(jstring arg0);
		GeneralSecurityException(jthrowable arg0);
		GeneralSecurityException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security

