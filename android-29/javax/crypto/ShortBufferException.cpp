#include "./ShortBufferException.hpp"

namespace javax::crypto
{
	// Fields
	
	ShortBufferException::ShortBufferException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ShortBufferException::ShortBufferException()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.ShortBufferException",
			"()V"
		);
	}
	ShortBufferException::ShortBufferException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.ShortBufferException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::crypto

