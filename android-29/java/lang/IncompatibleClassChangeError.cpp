#include "./IncompatibleClassChangeError.hpp"

namespace java::lang
{
	// Fields
	
	IncompatibleClassChangeError::IncompatibleClassChangeError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IncompatibleClassChangeError::IncompatibleClassChangeError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IncompatibleClassChangeError",
			"()V"
		);
	}
	IncompatibleClassChangeError::IncompatibleClassChangeError(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IncompatibleClassChangeError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

