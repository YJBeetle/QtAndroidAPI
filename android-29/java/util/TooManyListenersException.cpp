#include "./TooManyListenersException.hpp"

namespace java::util
{
	// Fields
	
	TooManyListenersException::TooManyListenersException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TooManyListenersException::TooManyListenersException()
	{
		__thiz = QAndroidJniObject(
			"java.util.TooManyListenersException",
			"()V"
		);
	}
	TooManyListenersException::TooManyListenersException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.TooManyListenersException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::util

