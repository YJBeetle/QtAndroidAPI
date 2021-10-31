#include "../../io/InputStream.hpp"
#include "./Inflater.hpp"
#include "./InflaterInputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	InflaterInputStream::InflaterInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InflaterInputStream::InflaterInputStream(java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.InflaterInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	InflaterInputStream::InflaterInputStream(java::io::InputStream arg0, java::util::zip::Inflater arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.InflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Inflater;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	InflaterInputStream::InflaterInputStream(java::io::InputStream arg0, java::util::zip::Inflater arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.InflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Inflater;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	jint InflaterInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void InflaterInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void InflaterInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean InflaterInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint InflaterInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint InflaterInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void InflaterInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong InflaterInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::util::zip

