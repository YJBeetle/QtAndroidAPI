#pragma once

#ifndef ANDROID_UTIL_BASE64OUTPUTSTREAM
#define ANDROID_UTIL_BASE64OUTPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/io/FilterOutputStream.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::android::util
{
	class Base64OutputStream : public __jni_impl::java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0, jint arg1);
		
		// Methods
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void write(jint arg0);
		void close();
	};
} // namespace __jni_impl::android::util

#include "../../java/io/OutputStream.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void Base64OutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.Base64OutputStream",
			"(Ljava/io/OutputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void Base64OutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Base64OutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void Base64OutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class Base64OutputStream : public __jni_impl::android::util::Base64OutputStream
	{
	public:
		Base64OutputStream(QAndroidJniObject obj) { __thiz = obj; }
		Base64OutputStream(__jni_impl::java::io::OutputStream arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_BASE64OUTPUTSTREAM

