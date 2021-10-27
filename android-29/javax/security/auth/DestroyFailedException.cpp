#include "./DestroyFailedException.hpp"

namespace javax::security::auth
{
	// Fields
	
	DestroyFailedException::DestroyFailedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DestroyFailedException::DestroyFailedException()
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.DestroyFailedException",
			"()V"
		);
	}
	DestroyFailedException::DestroyFailedException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.DestroyFailedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	DestroyFailedException::DestroyFailedException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.DestroyFailedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace javax::security::auth

