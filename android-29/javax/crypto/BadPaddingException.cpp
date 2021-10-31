#include "./BadPaddingException.hpp"

namespace javax::crypto
{
	// Fields
	
	BadPaddingException::BadPaddingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BadPaddingException::BadPaddingException()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.BadPaddingException",
			"()V"
		);
	}
	BadPaddingException::BadPaddingException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.BadPaddingException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::crypto

