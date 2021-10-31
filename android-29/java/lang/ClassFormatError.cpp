#include "./ClassFormatError.hpp"

namespace java::lang
{
	// Fields
	
	ClassFormatError::ClassFormatError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClassFormatError::ClassFormatError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassFormatError",
			"()V"
		);
	}
	ClassFormatError::ClassFormatError(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassFormatError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

