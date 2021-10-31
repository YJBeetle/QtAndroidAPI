#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"
#include "./BadPaddingException.hpp"


namespace javax::crypto
{
	class AEADBadTagException : public javax::crypto::BadPaddingException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AEADBadTagException(const char *className, const char *sig, Ts...agv) : javax::crypto::BadPaddingException(className, sig, std::forward<Ts>(agv)...) {}
		AEADBadTagException(QAndroidJniObject obj);
		
		// Constructors
		AEADBadTagException();
		AEADBadTagException(jstring arg0);
		
		// Methods
	};
} // namespace javax::crypto

