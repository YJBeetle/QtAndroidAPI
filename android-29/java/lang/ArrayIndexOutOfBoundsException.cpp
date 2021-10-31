#include "./ArrayIndexOutOfBoundsException.hpp"

namespace java::lang
{
	// Fields
	
	ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArrayIndexOutOfBoundsException",
			"()V"
		);
	}
	ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArrayIndexOutOfBoundsException",
			"(I)V",
			arg0
		);
	}
	ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArrayIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

