#include "./InternalError.hpp"

namespace java::lang
{
	// Fields
	
	InternalError::InternalError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InternalError::InternalError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"()V"
		);
	}
	InternalError::InternalError(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InternalError::InternalError(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	InternalError::InternalError(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::lang

