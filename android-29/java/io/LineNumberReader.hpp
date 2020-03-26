#pragma once

#ifndef JAVA_IO_LINENUMBERREADER
#define JAVA_IO_LINENUMBERREADER

#include "../../__JniBaseClass.hpp"
#include "Reader.hpp"
#include "BufferedReader.hpp"

namespace __jni_impl::java::io
{
	class Reader;
}

namespace __jni_impl::java::io
{
	class LineNumberReader : public __jni_impl::java::io::BufferedReader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::Reader arg0);
		void __constructor(__jni_impl::java::io::Reader arg0, jint arg1);
		
		// Methods
		jint read();
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jstring readLine();
		void mark(jint arg0);
		jlong skip(jlong arg0);
		void reset();
		jint getLineNumber();
		void setLineNumber(jint arg0);
	};
} // namespace __jni_impl::java::io

#include "Reader.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void LineNumberReader::__constructor(__jni_impl::java::io::Reader arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.LineNumberReader",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object());
	}
	void LineNumberReader::__constructor(__jni_impl::java::io::Reader arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.LineNumberReader",
			"(Ljava/io/Reader;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	jint LineNumberReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint LineNumberReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jstring LineNumberReader::readLine()
	{
		return __thiz.callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LineNumberReader::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jlong LineNumberReader::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	void LineNumberReader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jint LineNumberReader::getLineNumber()
	{
		return __thiz.callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	void LineNumberReader::setLineNumber(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLineNumber",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class LineNumberReader : public __jni_impl::java::io::LineNumberReader
	{
	public:
		LineNumberReader(QAndroidJniObject obj) { __thiz = obj; }
		LineNumberReader(__jni_impl::java::io::Reader arg0)
		{
			__constructor(
				arg0);
		}
		LineNumberReader(__jni_impl::java::io::Reader arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

#endif // JAVA_IO_LINENUMBERREADER

