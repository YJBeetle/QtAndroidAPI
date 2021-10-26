#pragma once

#ifndef JAVA_IO_BYTEARRAYINPUTSTREAM
#define JAVA_IO_BYTEARRAYINPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "InputStream.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::io
{
	class ByteArrayInputStream : public __jni_impl::java::io::InputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0);
		void __constructor(jbyteArray arg0, jint arg1, jint arg2);
		
		// Methods
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint read();
		void close();
		void mark(jint arg0);
		jbyteArray readAllBytes();
		jint readNBytes(jbyteArray arg0, jint arg1, jint arg2);
		jlong transferTo(__jni_impl::java::io::OutputStream arg0);
		jlong skip(jlong arg0);
		jint available();
		jboolean markSupported();
		void reset();
	};
} // namespace __jni_impl::java::io

#include "OutputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void ByteArrayInputStream::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.ByteArrayInputStream",
			"([B)V",
			arg0
		);
	}
	void ByteArrayInputStream::__constructor(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.ByteArrayInputStream",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint ByteArrayInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint ByteArrayInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	void ByteArrayInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void ByteArrayInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jbyteArray ByteArrayInputStream::readAllBytes()
	{
		return __thiz.callObjectMethod(
			"readAllBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jint ByteArrayInputStream::readNBytes(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"readNBytes",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jlong ByteArrayInputStream::transferTo(__jni_impl::java::io::OutputStream arg0)
	{
		return __thiz.callMethod<jlong>(
			"transferTo",
			"(Ljava/io/OutputStream;)J",
			arg0.__jniObject().object()
		);
	}
	jlong ByteArrayInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	jint ByteArrayInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	jboolean ByteArrayInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	void ByteArrayInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class ByteArrayInputStream : public __jni_impl::java::io::ByteArrayInputStream
	{
	public:
		ByteArrayInputStream(QAndroidJniObject obj) { __thiz = obj; }
		ByteArrayInputStream(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
		ByteArrayInputStream(jbyteArray arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::io

#endif // JAVA_IO_BYTEARRAYINPUTSTREAM

