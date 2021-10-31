#include "../../io/InputStream.hpp"
#include "./Deflater.hpp"
#include "./DeflaterInputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	DeflaterInputStream::DeflaterInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DeflaterInputStream::DeflaterInputStream(java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	DeflaterInputStream::DeflaterInputStream(java::io::InputStream arg0, java::util::zip::Deflater arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Deflater;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	DeflaterInputStream::DeflaterInputStream(java::io::InputStream arg0, java::util::zip::Deflater arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Deflater;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	jint DeflaterInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void DeflaterInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void DeflaterInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean DeflaterInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint DeflaterInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint DeflaterInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void DeflaterInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong DeflaterInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::util::zip

