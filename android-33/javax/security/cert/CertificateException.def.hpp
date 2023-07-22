#pragma once

#include "../../../java/lang/Exception.def.hpp"

class JString;

namespace javax::security::cert
{
	class CertificateException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		CertificateException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		CertificateException();
		CertificateException(JString arg0);
		
		// Methods
	};
} // namespace javax::security::cert

