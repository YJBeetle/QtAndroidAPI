#include "./TooManyListenersException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	TooManyListenersException::TooManyListenersException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	TooManyListenersException::TooManyListenersException()
		: java::lang::Exception(
			"java.util.TooManyListenersException",
			"()V"
		) {}
	TooManyListenersException::TooManyListenersException(jstring arg0)
		: java::lang::Exception(
			"java.util.TooManyListenersException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::util

