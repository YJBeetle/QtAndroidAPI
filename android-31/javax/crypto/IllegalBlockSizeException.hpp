#pragma once

#include "../../java/security/GeneralSecurityException.hpp"

class JString;

namespace javax::crypto
{
	class IllegalBlockSizeException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalBlockSizeException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalBlockSizeException(QJniObject obj);
		
		// Constructors
		IllegalBlockSizeException();
		IllegalBlockSizeException(JString arg0);
		
		// Methods
	};
} // namespace javax::crypto

