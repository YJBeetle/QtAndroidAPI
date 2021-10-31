#include "./IdentityScope.hpp"
#include "./KeyPair.hpp"
#include "./Signer.hpp"

namespace java::security
{
	// Fields
	
	Signer::Signer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Signer::Signer(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.Signer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Signer::Signer(jstring arg0, java::security::IdentityScope arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.Signer",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Signer::getPrivateKey()
	{
		return __thiz.callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	void Signer::setKeyPair(java::security::KeyPair arg0)
	{
		__thiz.callMethod<void>(
			"setKeyPair",
			"(Ljava/security/KeyPair;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Signer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

