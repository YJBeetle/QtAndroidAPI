#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Identity.hpp"

namespace java::security
{
	class IdentityScope;
}
namespace java::security
{
	class KeyPair;
}

namespace java::security
{
	class Signer : public java::security::Identity
	{
	public:
		// Fields
		
		Signer(QAndroidJniObject obj);
		// Constructors
		Signer(jstring &arg0);
		Signer(const QString &arg0);
		Signer(jstring &arg0, java::security::IdentityScope &arg1);
		Signer(const QString &arg0, java::security::IdentityScope &arg1);
		Signer() = default;
		
		// Methods
		QAndroidJniObject getPrivateKey();
		void setKeyPair(java::security::KeyPair arg0);
		jstring toString();
	};
} // namespace java::security

