#include "./IOException.hpp"
#include "./ObjectInputStream.hpp"
#include "./UncheckedIOException.hpp"

namespace java::io
{
	// Fields
	
	UncheckedIOException::UncheckedIOException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UncheckedIOException::UncheckedIOException(java::io::IOException arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.UncheckedIOException",
			"(Ljava/io/IOException;)V",
			arg0.__jniObject().object()
		);
	}
	UncheckedIOException::UncheckedIOException(jstring arg0, java::io::IOException arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.UncheckedIOException",
			"(Ljava/lang/String;Ljava/io/IOException;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject UncheckedIOException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/io/IOException;"
		);
	}
} // namespace java::io

