#include "./NoSuchPaddingException.hpp"

namespace javax::crypto
{
	// Fields
	
	NoSuchPaddingException::NoSuchPaddingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoSuchPaddingException::NoSuchPaddingException()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.NoSuchPaddingException",
			"()V"
		);
	}
	NoSuchPaddingException::NoSuchPaddingException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.NoSuchPaddingException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::crypto

