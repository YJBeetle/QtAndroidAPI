#include "./NegativeArraySizeException.hpp"

namespace java::lang
{
	// Fields
	
	NegativeArraySizeException::NegativeArraySizeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NegativeArraySizeException::NegativeArraySizeException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NegativeArraySizeException",
			"()V"
		);
	}
	NegativeArraySizeException::NegativeArraySizeException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NegativeArraySizeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

