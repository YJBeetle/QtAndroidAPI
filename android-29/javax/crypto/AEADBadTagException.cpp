#include "./AEADBadTagException.hpp"

namespace javax::crypto
{
	// Fields
	
	AEADBadTagException::AEADBadTagException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AEADBadTagException::AEADBadTagException()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.AEADBadTagException",
			"()V"
		);
	}
	AEADBadTagException::AEADBadTagException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.AEADBadTagException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	AEADBadTagException::AEADBadTagException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.AEADBadTagException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace javax::crypto

