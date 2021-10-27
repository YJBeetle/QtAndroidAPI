#include "./StringBufferInputStream.hpp"

namespace java::io
{
	// Fields
	
	StringBufferInputStream::StringBufferInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StringBufferInputStream::StringBufferInputStream(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StringBufferInputStream",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	StringBufferInputStream::StringBufferInputStream(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StringBufferInputStream",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint StringBufferInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	jint StringBufferInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint StringBufferInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void StringBufferInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong StringBufferInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

