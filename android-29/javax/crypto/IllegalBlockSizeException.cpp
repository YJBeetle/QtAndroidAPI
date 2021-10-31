#include "./IllegalBlockSizeException.hpp"

namespace javax::crypto
{
	// Fields
	
	IllegalBlockSizeException::IllegalBlockSizeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalBlockSizeException::IllegalBlockSizeException()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.IllegalBlockSizeException",
			"()V"
		);
	}
	IllegalBlockSizeException::IllegalBlockSizeException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.IllegalBlockSizeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::crypto

