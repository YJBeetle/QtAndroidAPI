#pragma once

#include "./CertificateException.def.hpp"

class JString;

namespace java::security::cert
{
	class CertificateNotYetValidException : public java::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateNotYetValidException(const char *className, const char *sig, Ts...agv) : java::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateNotYetValidException(QJniObject obj) : java::security::cert::CertificateException(obj) {}
		
		// Constructors
		CertificateNotYetValidException();
		CertificateNotYetValidException(JString arg0);
		
		// Methods
	};
} // namespace java::security::cert

