#pragma once

#include "../../java/security/GeneralSecurityException.hpp"

class JString;

namespace javax::crypto
{
	class NoSuchPaddingException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchPaddingException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchPaddingException(QJniObject obj);
		
		// Constructors
		NoSuchPaddingException();
		NoSuchPaddingException(JString arg0);
		
		// Methods
	};
} // namespace javax::crypto

