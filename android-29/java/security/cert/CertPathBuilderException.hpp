#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace java::security::cert
{
	class CertPathBuilderException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathBuilderException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		CertPathBuilderException(QAndroidJniObject obj);
		
		// Constructors
		CertPathBuilderException();
		CertPathBuilderException(jstring arg0);
		CertPathBuilderException(jthrowable arg0);
		CertPathBuilderException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security::cert

