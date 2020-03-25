#pragma once

#ifndef JAVA_IO_OUTPUTSTREAMWRITER
#define JAVA_IO_OUTPUTSTREAMWRITER

#include "../../__JniBaseClass.hpp"
#include "Writer.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::nio::charset
{
	class CharsetEncoder;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::io
{
	class Writer;
}

namespace __jni_impl::java::io
{
	class OutputStreamWriter : public __jni_impl::java::io::Writer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::nio::charset::CharsetEncoder arg1);
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		void __constructor(__jni_impl::java::io::OutputStream arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject append(jstring arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jint arg0);
		void write(jstring arg0, jint arg1, jint arg2);
		void flush();
		void close();
		QAndroidJniObject getEncoding();
	};
} // namespace __jni_impl::java::io

#include "OutputStream.hpp"
#include "../nio/charset/CharsetEncoder.hpp"
#include "../nio/charset/Charset.hpp"
#include "Writer.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void OutputStreamWriter::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::nio::charset::CharsetEncoder arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/nio/charset/CharsetEncoder;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void OutputStreamWriter::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void OutputStreamWriter::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object());
	}
	void OutputStreamWriter::__constructor(__jni_impl::java::io::OutputStream arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	QAndroidJniObject OutputStreamWriter::append(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/Writer;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject OutputStreamWriter::append(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/Writer;",
			arg0);
	}
	void OutputStreamWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2);
	}
	void OutputStreamWriter::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0);
	}
	void OutputStreamWriter::write(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2);
	}
	void OutputStreamWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V");
	}
	void OutputStreamWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject OutputStreamWriter::getEncoding()
	{
		return __thiz.callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class OutputStreamWriter : public __jni_impl::java::io::OutputStreamWriter
	{
	public:
		OutputStreamWriter(QAndroidJniObject obj) { __thiz = obj; }
		OutputStreamWriter(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::nio::charset::CharsetEncoder arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		OutputStreamWriter(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		OutputStreamWriter(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
		OutputStreamWriter(__jni_impl::java::io::OutputStream arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

#endif // JAVA_IO_OUTPUTSTREAMWRITER

