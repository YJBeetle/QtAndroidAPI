#include "./InterruptedIOException.hpp"

namespace java::io
{
	// Fields
	jint InterruptedIOException::bytesTransferred()
	{
		return __thiz.getField<jint>(
			"bytesTransferred"
		);
	}
	
	InterruptedIOException::InterruptedIOException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InterruptedIOException::InterruptedIOException()
	{
		__thiz = QAndroidJniObject(
			"java.io.InterruptedIOException",
			"()V"
		);
	}
	InterruptedIOException::InterruptedIOException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InterruptedIOException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InterruptedIOException::InterruptedIOException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InterruptedIOException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::io

