#include "./ConcurrentModificationException.hpp"

namespace java::util
{
	// Fields
	
	ConcurrentModificationException::ConcurrentModificationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConcurrentModificationException::ConcurrentModificationException()
	{
		__thiz = QAndroidJniObject(
			"java.util.ConcurrentModificationException",
			"()V"
		);
	}
	ConcurrentModificationException::ConcurrentModificationException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ConcurrentModificationException::ConcurrentModificationException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	ConcurrentModificationException::ConcurrentModificationException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::util

