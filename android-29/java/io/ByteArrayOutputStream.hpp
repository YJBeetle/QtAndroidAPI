#pragma once

#ifndef JAVA_IO_BYTEARRAYOUTPUTSTREAM
#define JAVA_IO_BYTEARRAYOUTPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "OutputStream.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}

namespace __jni_impl::java::io
{
	class ByteArrayOutputStream : public __jni_impl::java::io::OutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		
		// Methods
		void close();
		void reset();
		jint size();
		jbyteArray toByteArray();
		jstring toString();
		jstring toString(jint arg0);
		jstring toString(jstring arg0);
		jstring toString(const QString &arg0);
		jstring toString(__jni_impl::java::nio::charset::Charset arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void writeBytes(jbyteArray arg0);
		void writeTo(__jni_impl::java::io::OutputStream arg0);
	};
} // namespace __jni_impl::java::io

#include "OutputStream.hpp"
#include "../nio/charset/Charset.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void ByteArrayOutputStream::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.ByteArrayOutputStream",
			"()V"
		);
	}
	void ByteArrayOutputStream::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.ByteArrayOutputStream",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void ByteArrayOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void ByteArrayOutputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jint ByteArrayOutputStream::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jbyteArray ByteArrayOutputStream::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jstring ByteArrayOutputStream::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ByteArrayOutputStream::toString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ByteArrayOutputStream::toString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ByteArrayOutputStream::toString(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ByteArrayOutputStream::toString(__jni_impl::java::nio::charset::Charset arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void ByteArrayOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void ByteArrayOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ByteArrayOutputStream::writeBytes(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"writeBytes",
			"([B)V",
			arg0
		);
	}
	void ByteArrayOutputStream::writeTo(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"writeTo",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class ByteArrayOutputStream : public __jni_impl::java::io::ByteArrayOutputStream
	{
	public:
		ByteArrayOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		ByteArrayOutputStream()
		{
			__constructor();
		}
		ByteArrayOutputStream(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_BYTEARRAYOUTPUTSTREAM

