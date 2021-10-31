#include "./NoSuchElementException.hpp"

namespace java::util
{
	// Fields
	
	NoSuchElementException::NoSuchElementException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoSuchElementException::NoSuchElementException()
	{
		__thiz = QAndroidJniObject(
			"java.util.NoSuchElementException",
			"()V"
		);
	}
	NoSuchElementException::NoSuchElementException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.NoSuchElementException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NoSuchElementException::NoSuchElementException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.NoSuchElementException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	NoSuchElementException::NoSuchElementException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.NoSuchElementException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::util

