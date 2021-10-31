#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace java::security::cert
{
	class CRLException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CRLException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		CRLException(QAndroidJniObject obj);
		
		// Constructors
		CRLException();
		CRLException(jstring arg0);
		CRLException(jthrowable arg0);
		CRLException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security::cert

