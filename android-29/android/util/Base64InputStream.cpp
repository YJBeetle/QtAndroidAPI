#include "../../java/io/InputStream.hpp"
#include "./Base64InputStream.hpp"

namespace android::util
{
	// Fields
	
	Base64InputStream::Base64InputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Base64InputStream::Base64InputStream(java::io::InputStream arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.Base64InputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint Base64InputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void Base64InputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void Base64InputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean Base64InputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint Base64InputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint Base64InputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void Base64InputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong Base64InputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace android::util

