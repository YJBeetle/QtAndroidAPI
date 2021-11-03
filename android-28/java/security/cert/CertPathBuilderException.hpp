#pragma once

#include "../GeneralSecurityException.hpp"

class JString;
class JThrowable;

namespace java::security::cert
{
	class CertPathBuilderException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertPathBuilderException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		CertPathBuilderException(QJniObject obj);
		
		// Constructors
		CertPathBuilderException();
		CertPathBuilderException(JString arg0);
		CertPathBuilderException(JThrowable arg0);
		CertPathBuilderException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security::cert

