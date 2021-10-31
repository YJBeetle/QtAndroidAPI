#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"


namespace java::security::cert
{
	class CertificateParsingException : public java::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateParsingException(const char *className, const char *sig, Ts...agv) : java::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateParsingException(QJniObject obj);
		
		// Constructors
		CertificateParsingException();
		CertificateParsingException(jstring arg0);
		CertificateParsingException(jthrowable arg0);
		CertificateParsingException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security::cert

