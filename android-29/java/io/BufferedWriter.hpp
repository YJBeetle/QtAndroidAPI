#pragma once

#ifndef JAVA_IO_BUFFEREDWRITER
#define JAVA_IO_BUFFEREDWRITER

#include "../../__JniBaseClass.hpp"
#include "Writer.hpp"

namespace __jni_impl::java::io
{
	class Writer;
}

namespace __jni_impl::java::io
{
	class BufferedWriter : public __jni_impl::java::io::Writer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::Writer arg0);
		void __constructor(__jni_impl::java::io::Writer arg0, jint arg1);
		
		// Methods
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jint arg0);
		void write(jstring arg0, jint arg1, jint arg2);
		void write(const QString &arg0, jint arg1, jint arg2);
		void newLine();
		void flush();
		void close();
	};
} // namespace __jni_impl::java::io

#include "Writer.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void BufferedWriter::__constructor(__jni_impl::java::io::Writer arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedWriter",
			"(Ljava/io/Writer;)V",
			arg0.__jniObject().object()
		);
	}
	void BufferedWriter::__constructor(__jni_impl::java::io::Writer arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedWriter",
			"(Ljava/io/Writer;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void BufferedWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void BufferedWriter::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void BufferedWriter::write(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void BufferedWriter::write(const QString &arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void BufferedWriter::newLine()
	{
		__thiz.callMethod<void>(
			"newLine",
			"()V"
		);
	}
	void BufferedWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void BufferedWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class BufferedWriter : public __jni_impl::java::io::BufferedWriter
	{
	public:
		BufferedWriter(QAndroidJniObject obj) { __thiz = obj; }
		BufferedWriter(__jni_impl::java::io::Writer arg0)
		{
			__constructor(
				arg0);
		}
		BufferedWriter(__jni_impl::java::io::Writer arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

#endif // JAVA_IO_BUFFEREDWRITER

