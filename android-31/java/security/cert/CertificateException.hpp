#pragma once

#include "../GeneralSecurityException.hpp"

class JString;
class JThrowable;

namespace java::security::cert
{
	class CertificateException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateException(QJniObject obj);
		
		// Constructors
		CertificateException();
		CertificateException(JString arg0);
		CertificateException(JThrowable arg0);
		CertificateException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security::cert

