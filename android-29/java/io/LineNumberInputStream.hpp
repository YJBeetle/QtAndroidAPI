#pragma once

#ifndef JAVA_IO_LINENUMBERINPUTSTREAM
#define JAVA_IO_LINENUMBERINPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "InputStream.hpp"
#include "FilterInputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::java::io
{
	class LineNumberInputStream : public __jni_impl::java::io::FilterInputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0);
		
		// Methods
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint read();
		void mark(jint arg0);
		jlong skip(jlong arg0);
		jint available();
		void reset();
		jint getLineNumber();
		void setLineNumber(jint arg0);
	};
} // namespace __jni_impl::java::io

#include "InputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void LineNumberInputStream::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.LineNumberInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint LineNumberInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint LineNumberInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	void LineNumberInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jlong LineNumberInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	jint LineNumberInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void LineNumberInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jint LineNumberInputStream::getLineNumber()
	{
		return __thiz.callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	void LineNumberInputStream::setLineNumber(jint arg0)
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
	class LineNumberInputStream : public __jni_impl::java::io::LineNumberInputStream
	{
	public:
		LineNumberInputStream(QAndroidJniObject obj) { __thiz = obj; }
		LineNumberInputStream(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_LINENUMBERINPUTSTREAM

