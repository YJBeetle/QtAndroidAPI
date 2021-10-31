#include "./KeyPair.hpp"

namespace java::security
{
	// Fields
	
	KeyPair::KeyPair(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyPair::KeyPair(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyPair",
			"(Ljava/security/PublicKey;Ljava/security/PrivateKey;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject KeyPair::getPrivate()
	{
		return __thiz.callObjectMethod(
			"getPrivate",
			"()Ljava/security/PrivateKey;"
		);
	}
	QAndroidJniObject KeyPair::getPublic()
	{
		return __thiz.callObjectMethod(
			"getPublic",
			"()Ljava/security/PublicKey;"
		);
	}
} // namespace java::security

