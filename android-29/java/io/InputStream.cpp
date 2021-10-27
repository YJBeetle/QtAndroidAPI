#include "./OutputStream.hpp"
#include "./InputStream.hpp"

namespace java::io
{
	// Fields
	
	InputStream::InputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputStream::InputStream()
	{
		__thiz = QAndroidJniObject(
			"java.io.InputStream",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject InputStream::nullInputStream()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.InputStream",
			"nullInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jint InputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void InputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void InputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean InputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint InputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint InputStream::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint InputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jbyteArray InputStream::readAllBytes()
	{
		return __thiz.callObjectMethod(
			"readAllBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray InputStream::readNBytes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"readNBytes",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jint InputStream::readNBytes(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"readNBytes",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void InputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong InputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	void InputStream::skipNBytes(jlong arg0)
	{
		__thiz.callMethod<void>(
			"skipNBytes",
			"(J)V",
			arg0
		);
	}
	jlong InputStream::transferTo(java::io::OutputStream arg0)
	{
		return __thiz.callMethod<jlong>(
			"transferTo",
			"(Ljava/io/OutputStream;)J",
			arg0.__jniObject().object()
		);
	}
} // namespace java::io

