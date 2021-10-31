#include "./CancellationException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	CancellationException::CancellationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CancellationException::CancellationException()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CancellationException",
			"()V"
		);
	}
	CancellationException::CancellationException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CancellationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::util::concurrent

