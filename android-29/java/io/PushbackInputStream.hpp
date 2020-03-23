#pragma once

#ifndef JAVA_IO_PUSHBACKINPUTSTREAM
#define JAVA_IO_PUSHBACKINPUTSTREAM

#include "FilterInputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::java::io
{
	class PushbackInputStream : public __jni_impl::java::io::FilterInputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(__jni_impl::java::io::InputStream arg0, jint arg1);
		
		// Methods
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint read();
		void close();
		void mark(jint arg0);
		jlong skip(jlong arg0);
		jint available();
		jboolean markSupported();
		void reset();
		void unread(jbyteArray arg0);
		void unread(jint arg0);
		void unread(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::java::io

#include "InputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void PushbackInputStream::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PushbackInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object());
	}
	void PushbackInputStream::__constructor(__jni_impl::java::io::InputStream arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PushbackInputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	jint PushbackInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2);
	}
	jint PushbackInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I");
	}
	void PushbackInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	void PushbackInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0);
	}
	jlong PushbackInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0);
	}
	jint PushbackInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I");
	}
	jboolean PushbackInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z");
	}
	void PushbackInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
	void PushbackInputStream::unread(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"unread",
			"([B)V",
			arg0);
	}
	void PushbackInputStream::unread(jint arg0)
	{
		__thiz.callMethod<void>(
			"unread",
			"(I)V",
			arg0);
	}
	void PushbackInputStream::unread(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"unread",
			"([BII)V",
			arg0,
			arg1,
			arg2);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class PushbackInputStream : public __jni_impl::java::io::PushbackInputStream
	{
	public:
		PushbackInputStream(QAndroidJniObject obj) { __thiz = obj; }
		PushbackInputStream(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		PushbackInputStream(__jni_impl::java::io::InputStream arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

#endif // JAVA_IO_PUSHBACKINPUTSTREAM

