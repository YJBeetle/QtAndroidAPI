#include "./IllegalAccessError.hpp"

namespace java::lang
{
	// Fields
	
	IllegalAccessError::IllegalAccessError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalAccessError::IllegalAccessError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessError",
			"()V"
		);
	}
	IllegalAccessError::IllegalAccessError(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

