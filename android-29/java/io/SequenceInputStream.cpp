#include "./InputStream.hpp"
#include "./SequenceInputStream.hpp"

namespace java::io
{
	// Fields
	
	SequenceInputStream::SequenceInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SequenceInputStream::SequenceInputStream(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.SequenceInputStream",
			"(Ljava/util/Enumeration;)V",
			arg0.__jniObject().object()
		);
	}
	SequenceInputStream::SequenceInputStream(java::io::InputStream arg0, java::io::InputStream arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.SequenceInputStream",
			"(Ljava/io/InputStream;Ljava/io/InputStream;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint SequenceInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void SequenceInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint SequenceInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint SequenceInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io

