#pragma once

#include "../../java/security/GeneralSecurityException.def.hpp"

class JString;

namespace javax::crypto
{
	class ShortBufferException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ShortBufferException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		ShortBufferException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
		
		// Constructors
		ShortBufferException();
		ShortBufferException(JString arg0);
		
		// Methods
	};
} // namespace javax::crypto

