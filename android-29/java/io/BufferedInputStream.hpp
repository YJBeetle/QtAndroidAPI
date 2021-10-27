#pragma once

#include "../../__JniBaseClass.hpp"
#include "InputStream.hpp"
#include "FilterInputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::java::io
{
	class BufferedInputStream : public __jni_impl::java::io::FilterInputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(__jni_impl::java::io::InputStream arg0, jint arg1);
		
		// Methods
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace __jni_impl::java::io

#include "InputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void BufferedInputStream::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void BufferedInputStream::__constructor(__jni_impl::java::io::InputStream arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedInputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint BufferedInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void BufferedInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void BufferedInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean BufferedInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint BufferedInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint BufferedInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void BufferedInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong BufferedInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class BufferedInputStream : public __jni_impl::java::io::BufferedInputStream
	{
	public:
		BufferedInputStream(QAndroidJniObject obj) { __thiz = obj; }
		BufferedInputStream(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		BufferedInputStream(__jni_impl::java::io::InputStream arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

