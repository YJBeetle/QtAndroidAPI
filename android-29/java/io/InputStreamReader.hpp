#pragma once

#ifndef JAVA_IO_INPUTSTREAMREADER
#define JAVA_IO_INPUTSTREAMREADER

#include "../../__JniBaseClass.hpp"
#include "Reader.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::nio::charset
{
	class CharsetDecoder;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}

namespace __jni_impl::java::io
{
	class InputStreamReader : public __jni_impl::java::io::Reader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::nio::charset::CharsetDecoder arg1);
		void __constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(__jni_impl::java::io::InputStream arg0, jstring arg1);
		void __constructor(__jni_impl::java::io::InputStream arg0, const QString &arg1);
		void __constructor(__jni_impl::java::io::InputStream arg0);
		
		// Methods
		jint read();
		jint read(jcharArray arg0, jint arg1, jint arg2);
		void close();
		jstring getEncoding();
		jboolean ready();
	};
} // namespace __jni_impl::java::io

#include "InputStream.hpp"
#include "../nio/charset/CharsetDecoder.hpp"
#include "../nio/charset/Charset.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void InputStreamReader::__constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::nio::charset::CharsetDecoder arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;Ljava/nio/charset/CharsetDecoder;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void InputStreamReader::__constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void InputStreamReader::__constructor(__jni_impl::java::io::InputStream arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void InputStreamReader::__constructor(__jni_impl::java::io::InputStream arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void InputStreamReader::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint InputStreamReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint InputStreamReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void InputStreamReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jstring InputStreamReader::getEncoding()
	{
		return __thiz.callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean InputStreamReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class InputStreamReader : public __jni_impl::java::io::InputStreamReader
	{
	public:
		InputStreamReader(QAndroidJniObject obj) { __thiz = obj; }
		InputStreamReader(__jni_impl::java::io::InputStream arg0, __jni_impl::java::nio::charset::CharsetDecoder arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InputStreamReader(__jni_impl::java::io::InputStream arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InputStreamReader(__jni_impl::java::io::InputStream arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InputStreamReader(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_INPUTSTREAMREADER

