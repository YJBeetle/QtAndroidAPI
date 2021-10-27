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
	CancellationException::CancellationException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CancellationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	CancellationException::CancellationException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CancellationException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::util::concurrent

