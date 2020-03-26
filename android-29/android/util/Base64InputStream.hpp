#pragma once

#ifndef ANDROID_UTIL_BASE64INPUTSTREAM
#define ANDROID_UTIL_BASE64INPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/FilterInputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::android::util
{
	class Base64InputStream : public __jni_impl::java::io::FilterInputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0, jint arg1);
		
		// Methods
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void close();
		void mark(jint arg0);
		jlong skip(jlong arg0);
		jint available();
		jboolean markSupported();
		void reset();
	};
} // namespace __jni_impl::android::util

#include "../../java/io/InputStream.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void Base64InputStream::__constructor(__jni_impl::java::io::InputStream arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.Base64InputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
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
	jlong Base64InputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	jint Base64InputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	jboolean Base64InputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	void Base64InputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class Base64InputStream : public __jni_impl::android::util::Base64InputStream
	{
	public:
		Base64InputStream(QAndroidJniObject obj) { __thiz = obj; }
		Base64InputStream(__jni_impl::java::io::InputStream arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_BASE64INPUTSTREAM

