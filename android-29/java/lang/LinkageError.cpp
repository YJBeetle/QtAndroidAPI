#include "./LinkageError.hpp"

namespace java::lang
{
	// Fields
	
	LinkageError::LinkageError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LinkageError::LinkageError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.LinkageError",
			"()V"
		);
	}
	LinkageError::LinkageError(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.LinkageError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	LinkageError::LinkageError(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.LinkageError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::lang

